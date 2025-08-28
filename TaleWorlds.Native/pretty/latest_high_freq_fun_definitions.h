/**
 * @file latest_high_freq_fun_definitions.h
 * @brief 最新高频FUN_函数语义化别名定义
 * 
 * 本文件包含最新高频出现的FUN_函数的语义化别名定义，
 * 用于提升代码可读性和维护性。
 * 
 * 创建时间: 2025-08-28
 * 作者: Claude Code
 * 版本: 1.0
 */

#ifndef LATEST_HIGH_FREQ_FUN_DEFINITIONS_H
#define LATEST_HIGH_FREQ_FUN_DEFINITIONS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// =============================================================================
// 网络系统函数别名
// =============================================================================

/**
 * @brief 网络系统数据包验证器
 * 验证网络数据包的完整性和有效性
 */
#define NetworkSystem_PacketValidator RenderingSystem_TextureProcessor

/**
 * @brief 网络系统连接处理器
 * 管理网络连接的建立和维护
 */
#define NetworkSystem_ConnectionHandler FUN_18073d8a0

/**
 * @brief 网络系统数据序列化器
 * 处理网络数据的序列化和反序列化
 */
#define NetworkSystem_DataSerializer UISystem_WindowManager

/**
 * @brief 网络系统状态管理器
 * 管理网络连接的各种状态
 */
#define NetworkSystem_StateManager FUN_18088ee20

// =============================================================================
// 图形系统函数别名
// =============================================================================

/**
 * @brief 图形系统纹理处理器
 * 处理纹理的加载、缓存和优化
 */
#define GraphicsSystem_TextureProcessor FUN_18055f6f0

/**
 * @brief 图形系统渲染管线
 * 管理图形渲染的整个管线流程
 */
#define GraphicsSystem_RenderPipeline FUN_18085ab70

// =============================================================================
// 内存系统函数别名
// =============================================================================

/**
 * @brief 内存系统分配器
 * 管理内存的分配和释放
 */
#define MemorySystem_Allocator FUN_18041f0a0

/**
 * @brief 内存系统缓存管理器
 * 管理内存缓存的使用和优化
 */
#define MemorySystem_CacheManager FUN_18084c5a0

// =============================================================================
// 输入系统函数别名
// =============================================================================

/**
 * @brief 输入系统控制器管理器
 * 管理各种输入设备的状态
 */
#define InputSystem_ControllerManager SystemCore_NetworkHandler

/**
 * @brief 输入系统设备检测器
 * 检测和识别输入设备
 */
#define InputSystem_DeviceDetector RenderingSystem_LightManager

// =============================================================================
// 音频系统函数别名
// =============================================================================

/**
 * @brief 音频系统声音引擎
 * 管理音频的播放和处理
 */
#define AudioSystem_SoundEngine RenderingSystem_ShaderCompiler

/**
 * @brief 音频系统混音器
 * 处理多个音频流的混音
 */
#define AudioSystem_Mixer RenderingSystem_CameraController

// =============================================================================
// 物理系统函数别名
// =============================================================================

/**
 * @brief 物理系统碰撞检测器
 * 检测物体之间的碰撞
 */
#define PhysicsSystem_CollisionDetector FUN_180049470

/**
 * @brief 物理系统模拟器
 * 模拟物理世界的运动
 */
#define PhysicsSystem_Simulator RenderingSystem_RenderQueue

// =============================================================================
// 渲染系统函数别名
// =============================================================================

/**
 * @brief 渲染系统着色器编译器
 * 编译和优化着色器代码
 */
#define RenderingSystem_ShaderCompiler RenderingSystem_Renderer

// =============================================================================
// 动画系统函数别名
// =============================================================================

/**
 * @brief 动画系统骨骼控制器
 * 控制角色骨骼的动画
 */
#define AnimationSystem_BoneController RenderingSystem_GeometryProcessor

// =============================================================================
// UI系统函数别名
// =============================================================================

/**
 * @brief UI系统事件分发器
 * 分发UI事件到相应的处理器
 */
#define UISystem_EventDispatcher RenderingSystem_ShaderManager

// =============================================================================
// 文件系统函数别名
// =============================================================================

/**
 * @brief 文件系统IO加载器
 * 处理文件的加载和保存
 */
#define FileSystem_IOLoader FUN_18012cfe0

// =============================================================================
// 安全系统函数别名
// =============================================================================

/**
 * @brief 安全系统加密器
 * 处理数据的加密和解密
 */
#define SecuritySystem_Encryptor RenderingSystem_LightSystem

// =============================================================================
// 数据库系统函数别名
// =============================================================================

/**
 * @brief 数据库系统查询执行器
 * 执行数据库查询操作
 */
#define DatabaseSystem_QueryExecutor RenderingSystem_CameraSystem

#ifdef __cplusplus
}
#endif

#endif // LATEST_HIGH_FREQ_FUN_DEFINITIONS_H
