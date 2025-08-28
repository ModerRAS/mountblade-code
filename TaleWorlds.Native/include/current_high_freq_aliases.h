/**
 * @file current_high_freq_aliases.h
 * @brief 当前高频FUN_函数语义化别名定义
 * 
 * 本文件定义了当前出现频率最高的FUN_函数的语义化别名，
 * 用于提升代码可读性和维护性。
 * 
 * @author Claude Code
 * @date 2025-08-29
 */

#ifndef CURRENT_HIGH_FREQ_ALIASES_H
#define CURRENT_HIGH_FREQ_ALIASES_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ============================================================================
 * 渲染系统函数别名定义
 * ============================================================================ */

/**
 * @brief 纹理管理器
 * 
 * 负责游戏中的纹理资源管理，包括纹理加载、缓存、释放等操作。
 * 支持多种纹理格式，优化内存使用和渲染性能。
 * 
 * @param texture_id 纹理ID
 * @param texture_data 纹理数据指针
 * @param width 纹理宽度
 * @param height 纹理高度
 * @param format 纹理格式
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_TextureManager FUN_18084d3f0

/**
 * @brief 材质处理器
 * 
 * 处理游戏中的材质系统，包括材质加载、参数设置、着色器绑定等。
 * 支持PBR材质、卡通材质等多种材质类型。
 * 
 * @param material_id 材质ID
 * @param shader_program 着色器程序
 * @param parameters 材质参数数组
 * @param param_count 参数数量
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_MaterialProcessor FUN_1807703c0

/**
 * @brief 着色器编译器
 * 
 * 负责着色器代码的编译、链接和优化。
 * 支持GLSL、HLSL等多种着色器语言。
 * 
 * @param shader_type 着色器类型
 * @param source_code 源代码
 * @param source_length 源代码长度
 * @return uint32_t 编译成功返回着色器ID，失败返回0
 */
#define RenderingSystem_ShaderCompiler FUN_1807681a0

/**
 * @brief 顶点缓冲区管理器
 * 
 * 管理顶点缓冲区的创建、更新和释放。
 * 优化顶点数据传输和存储效率。
 * 
 * @param buffer_id 缓冲区ID
 * @param data 顶点数据
 * @param size 数据大小
 * @param usage 使用模式
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_VertexBufferManager FUN_180645fa0

/**
 * @brief 光照管理器
 * 
 * 管理场景中的光照系统，包括光源管理、阴影计算、光照贴图等。
 * 支持多种光源类型和光照模型。
 * 
 * @param light_id 光源ID
 * @param light_type 光源类型
 * @param position 光源位置
 * @param color 光源颜色
 * @param intensity 光源强度
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_LightManager FUN_1805b7740

/**
 * @brief 相机处理器
 * 
 * 处理游戏相机的设置、变换和投影。
 * 支持多种相机模式和投影方式。
 * 
 * @param camera_id 相机ID
 * @param position 相机位置
 * @param target 相机目标
 * @param up 向上向量
 * @param fov 视场角
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_CameraProcessor FUN_18020f150

/**
 * @brief 渲染目标管理器
 * 
 * 管理渲染目标的创建、绑定和释放。
 * 支持多重渲染目标和后处理效果。
 * 
 * @param target_id 目标ID
 * @param width 宽度
 * @param height 高度
 * @param format 格式
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_RenderTargetManager FUN_1801f20c0

/**
 * @brief 管线处理器
 * 
 * 管理渲染管线的状态和配置。
 * 优化渲染流程和性能。
 * 
 * @param pipeline_id 管线ID
 * @param state 渲染状态
 * @param shaders 着色器数组
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_PipelineProcessor FUN_180124190

/**
 * @brief 几何处理器
 * 
 * 处理几何体的创建、变换和优化。
 * 支持LOD和实例化渲染。
 * 
 * @param geometry_id 几何体ID
 * @param vertices 顶点数据
 * @param indices 索引数据
 * @param vertex_count 顶点数量
 * @param index_count 索引数量
 * @return int 成功返回0，失败返回错误码
 */
#define RenderingSystem_GeometryProcessor FUN_1800846d0

/* ============================================================================
 * 网络系统函数别名定义
 * ============================================================================ */

/**
 * @brief 网络协议处理器
 * 
 * 处理网络协议的解析、封装和验证。
 * 支持多种网络协议和通信模式。
 * 
 * @param protocol_id 协议ID
 * @param data 数据包
 * @param length 数据长度
 * @return int 处理结果
 */
#define NetworkSystem_ProtocolHandler FUN_1808ca6f0

/**
 * @brief 网络连接管理器
 * 
 * 管理网络连接的建立、维护和断开。
 * 支持TCP/UDP等多种连接方式。
 * 
 * @param connection_id 连接ID
 * @param address 目标地址
 * @param port 目标端口
 * @return int 成功返回0，失败返回错误码
 */
#define NetworkSystem_ConnectionManager FUN_1808aef40

/**
 * @brief 网络数据处理器
 * 
 * 处理网络数据的接收、发送和验证。
 * 优化数据传输效率和可靠性。
 * 
 * @param data 数据指针
 * @param length 数据长度
 * @param connection_id 连接ID
 * @return int 处理结果
 */
#define NetworkSystem_DataProcessor FUN_1808532e0

/**
 * @brief 网络状态验证器
 * 
 * 验证网络连接状态和数据完整性。
 * 提供网络状态监控和诊断功能。
 * 
 * @param connection_id 连接ID
 * @param timeout 超时时间
 * @return int 状态验证结果
 */
#define NetworkSystem_StateValidator FUN_18074bd40

/**
 * @brief 网络缓冲区管理器
 * 
 * 管理网络数据缓冲区的分配、使用和释放。
 * 优化内存使用和数据传输效率。
 * 
 * @param buffer_id 缓冲区ID
 * @param size 缓冲区大小
 * @return void* 缓冲区指针，失败返回NULL
 */
#define NetworkSystem_BufferManager FUN_18063a240

/**
 * @brief 网络事件处理器
 * 
 * 处理网络事件的触发、分发和处理。
 * 支持异步事件处理和回调机制。
 * 
 * @param event_id 事件ID
 * @param event_data 事件数据
 * @param handler 处理函数指针
 * @return int 处理结果
 */
#define NetworkSystem_EventHandler FUN_180534930

/**
 * @brief 网络安全管理器
 * 
 * 处理网络通信的安全性和加密。
 * 支持数据加密和身份验证。
 * 
 * @param data 数据指针
 * @param length 数据长度
 * @param key 加密密钥
 * @return int 安全处理结果
 */
#define NetworkSystem_SecurityManager FUN_1802e8c60

/**
 * @brief 网络包序列化器
 * 
 * 处理网络数据包的序列化和反序列化。
 * 优化数据包的打包和解包效率。
 * 
 * @param packet 数据包指针
 * @param data 数据指针
 * @param length 数据长度
 * @return int 序列化结果
 */
#define NetworkSystem_PacketSerializer FUN_1802921e0

/**
 * @brief 网络流处理器
 * 
 * 处理网络数据流的读取、写入和缓冲。
 * 支持流式数据传输和处理。
 * 
 * @param stream_id 流ID
 * @param data 数据指针
 * @param length 数据长度
 * @param mode 处理模式
 * @return int 处理结果
 */
#define NetworkSystem_StreamProcessor FUN_180194a50

/**
 * @brief 网络错误处理器
 * 
 * 处理网络通信中的错误和异常。
 * 提供错误诊断和恢复机制。
 * 
 * @param error_id 错误ID
 * @param context 错误上下文
 * @param recovery 恢复函数指针
 * @return int 错误处理结果
 */
#define NetworkSystem_ErrorHandler FUN_18011dd10

/**
 * @brief 网络性能监控器
 * 
 * 监控网络通信的性能指标和状态。
 * 提供性能统计和优化建议。
 * 
 * @param connection_id 连接ID
 * @param metric_id 性能指标ID
 * @return int 性能数据
 */
#define NetworkSystem_PerformanceMonitor FUN_180084ae0

#ifdef __cplusplus
}
#endif

#endif /* CURRENT_HIGH_FREQ_ALIASES_H */
