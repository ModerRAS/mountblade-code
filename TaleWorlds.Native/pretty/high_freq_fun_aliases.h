/**
 * 高频FUN_函数语义化别名定义
 * 
 * 本文件定义了出现频率最高的FUN_函数的语义化别名，
 * 用于提升代码可读性和维护性。
 * 
 * 文件创建时间: $(date)
 * 处理的FUN_函数数量: ${#FUN_ALIAS_MAP[@]}
 */

#ifndef HIGH_FREQ_FUN_ALIASES_H
#define HIGH_FREQ_FUN_ALIASES_H

#ifdef __cplusplus
extern "C" {
#endif

// 系统核心功能别名
#define SystemCore_StateProcessor          FUN_18038b160  // 系统核心状态处理器 (51次调用)
#define SystemCore_DataManager             FUN_180768380  // 系统核心数据管理器 (49次调用)
#define SystemCore_ConfigHandler           FUN_180297340  // 系统核心配置处理器 (49次调用)
#define SystemCore_MemoryController       FUN_18004a130  // 系统核心内存控制器 (49次调用)

// 渲染系统功能别名
#define RenderingSystem_VertexProcessor    FUN_18084f2d0  // 渲染系统顶点处理器 (48次调用)
#define RenderingSystem_MaterialManager    FUN_1807d3f50  // 渲染系统材质管理器 (48次调用)
#define RenderingSystem_ShaderCompiler     FUN_180768b70  // 渲染系统着色器编译器 (48次调用)
#define RenderingSystem_TextureHandler     FUN_18075dbf0  // 渲染系统纹理处理器 (48次调用)
#define RenderingSystem_LightController    FUN_18054a4b0  // 渲染系统光照控制器 (48次调用)
#define RenderingSystem_CameraProcessor    FUN_180488690  // 渲染系统相机处理器 (48次调用)
#define RenderingSystem_BufferManager      FUN_180121200  // 渲染系统缓冲区管理器 (48次调用)

// UI系统功能别名
#define UISystem_EventHandler              FUN_1807d7590  // UI系统事件处理器 (47次调用)
#define UISystem_LayoutManager             FUN_180627910  // UI系统布局管理器 (47次调用)
#define UISystem_ComponentController       FUN_180567f30  // UI系统组件控制器 (47次调用)
#define UISystem_InputProcessor            FUN_1802fac00  // UI系统输入处理器 (47次调用)
#define UISystem_RenderController          FUN_180269810  // UI系统渲染控制器 (47次调用)
#define UISystem_StateManager              FUN_1800b31f0  // UI系统状态管理器 (47次调用)

// 网络系统功能别名
#define NetworkSystem_ConnectionManager    FUN_180874760  // 网络系统连接管理器 (46次调用)
#define NetworkSystem_ProtocolHandler      FUN_1808616bc  // 网络系统协议处理器 (46次调用)

#ifdef __cplusplus
}
#endif

#endif /* HIGH_FREQ_FUN_ALIASES_H */
