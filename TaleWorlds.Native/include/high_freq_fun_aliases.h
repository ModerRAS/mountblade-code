/**
 * 高频FUN_函数语义化别名定义
 * 
 * 本文件定义了项目中出现频率最高的20个FUN_函数的语义化别名
 * 这些别名提供了更清晰的功能描述，便于代码理解和维护
 * 
 * @author Claude Code
 * @date 2025-08-29
 * @version 1.0
 */

#ifndef HIGH_FREQ_FUN_ALIASES_H
#define HIGH_FREQ_FUN_ALIASES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/**
 * 系统核心模块函数别名
 * 这些函数负责系统初始化、数据处理和核心功能
 */

// 系统初始化器 - 负责系统启动和初始化
#define CoreEngine_SystemInitializer FUN_18020f150

// 数据处理器 - 负责数据转换和处理
#define CoreEngine_DataProcessor FUN_1800846d0

/**
 * 渲染引擎模块函数别名
 * 这些函数负责图形渲染、纹理管理和着色器处理
 */

// 图形渲染器 - 负责3D图形渲染
#define RenderingEngine_GraphicsRenderer FUN_18084d3f0

// 纹理管理器 - 负责纹理加载和管理
#define RenderingEngine_TextureManager FUN_1807703c0

// 着色器处理器 - 负责着色器编译和管理
#define RenderingEngine_ShaderProcessor FUN_1807681a0

// 帧缓冲区处理器 - 负责帧缓冲区管理
#define RenderingEngine_FrameBufferHandler FUN_18074bd40

/**
 * UI系统模块函数别名
 * 这些函数负责用户界面布局、组件和事件处理
 */

// 布局管理器 - 负责UI布局计算
#define UI_LayoutManager FUN_180645fa0

// 组件处理器 - 负责UI组件管理
#define UI_WidgetHandler FUN_18063a240

// 事件处理器 - 负责UI事件处理
#define UI_EventProcessor FUN_1805b7740

/**
 * 网络系统模块函数别名
 * 这些函数负责网络通信、协议处理和数据传输
 */

// 协议处理器 - 负责网络协议解析
#define Network_ProtocolHandler FUN_1802e8c60

// 连接管理器 - 负责网络连接管理
#define Network_ConnectionManager FUN_1802921e0

// 数据序列化器 - 负责网络数据序列化
#define Network_DataSerializer FUN_1801f20c0

/**
 * 内存管理模块函数别名
 * 这些函数负责内存分配、垃圾回收和缓存管理
 */

// 内存分配器 - 负责动态内存分配
#define Memory_Allocator FUN_180194a50

// 垃圾回收器 - 负责内存垃圾回收
#define Memory_GarbageCollector FUN_180124190

// 缓存管理器 - 负责内存缓存管理
#define Memory_CacheManager FUN_18011dd10

/**
 * 工具系统模块函数别名
 * 这些函数负责数据验证、工具函数和辅助操作
 */

// 数据验证器 - 负责数据有效性验证
#define Utilities_DataValidator FUN_180084ae0

/**
 * 物理系统模块函数别名
 * 这些函数负责物理模拟、碰撞检测和动画处理
 */

// 碰撞检测器 - 负责物理碰撞检测
#define Physics_CollisionDetector FUN_1808ca6f0

// 刚体处理器 - 负责物理刚体处理
#define Physics_RigidBodyHandler FUN_1808aef40

// 动画处理器 - 负责物理动画处理
#define Physics_AnimationProcessor FUN_1808532e0

/**
 * 音频系统模块函数别名
 * 这些函数负责音频播放、声音管理和音效处理
 */

// 声音管理器 - 负责音频播放和管理
#define Audio_SoundManager FUN_180639fd0

#ifdef __cplusplus
}
#endif

#endif /* HIGH_FREQ_FUN_ALIASES_H */