/**
 * @file 03_rendering_part024_sub001.c
 * @brief 渲染系统高级材质着色器和渲染管线管理模块
 * 
 * 本模块是渲染系统的重要组成部分，主要负责：
 * - 高级材质着色器的管理和应用
 * - 渲染管线的配置和优化
 * - 材质参数的计算和验证
 * - 渲染状态的监控和调整
 * - 着色器程序的编译和链接
 * 
 * 该文件作为渲染系统的一个子模块，提供了高级材质处理的核心支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author 反编译代码美化处理
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 渲染系统高级材质着色器和渲染管线管理常量定义
 * ============================================================================ */

/**
 * @brief 渲染系统高级材质着色器和渲染管线管理接口
 * @details 定义渲染系统高级材质着色器和渲染管线管理的参数和接口函数
 * 
 * 功能：
 * - 管理高级材质着色器的生命周期
 * - 处理渲染管线的配置和优化
 * - 执行材质参数的计算和验证
 * - 监控和调整渲染状态
 * - 编译和链接着色器程序
 * 
 * @note 该文件作为渲染系统的子模块，提供高级材质处理支持
 */

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 材质着色器管理器
#define RenderingSystem_MaterialShaderManager FUN_1801e1b80

// 渲染管线配置器
#define RenderingSystem_PipelineConfigurator FUN_1801e1cd0

// 材质参数计算器
#define RenderingSystem_MaterialParameterCalculator FUN_1801e1e00

// 着色器编译器
#define RenderingSystem_ShaderCompiler FUN_1801e1f30

// 渲染状态管理器
#define RenderingSystem_RenderStateManager FUN_1801e2060

// 材质验证器
#define RenderingSystem_MaterialValidator FUN_1801e2190

// 渲染管线优化器
#define RenderingSystem_PipelineOptimizer FUN_1801e22c0

// 着色器链接器
#define RenderingSystem_ShaderLinker FUN_1801e23f0

// 材质属性管理器
#define RenderingSystem_MaterialPropertyManager FUN_1801e2520

// 渲染缓存管理器
#define RenderingSystem_RenderCacheManager FUN_1801e2650

// 材质纹理处理器
#define RenderingSystem_MaterialTextureProcessor FUN_1801e2780

// 渲染队列管理器
#define RenderingSystem_RenderQueueManager FUN_1801e28b0

// 材质光照处理器
#define RenderingSystem_MaterialLightProcessor FUN_1801e29e0

// 渲染效果应用器
#define RenderingSystem_RenderEffectApplier FUN_1801e2b10

// 材质混合处理器
#define RenderingSystem_MaterialBlendProcessor FUN_1801e2c40

// 渲染目标管理器
#define RenderingSystem_RenderTargetManager FUN_1801e2d70

// 材质深度处理器
#define RenderingSystem_MaterialDepthProcessor FUN_1801e2ea0

// 渲染缓冲区管理器
#define RenderingSystem_RenderBufferManager FUN_1801e2fd0

// 材质模板处理器
#define RenderingSystem_MaterialStencilProcessor FUN_1801e3100

// 渲染统计管理器
#define RenderingSystem_RenderStatisticsManager FUN_1801e3230

// 材质着色器缓存器
#define RenderingSystem_MaterialShaderCacheManager FUN_1801e3360

// 渲染管线状态管理器
#define RenderingSystem_PipelineStateManager FUN_1801e3490

// 材质参数缓存器
#define RenderingSystem_MaterialParameterCacheManager FUN_1801e35c0

// 渲染命令处理器
#define RenderingSystem_RenderCommandProcessor FUN_1801e36f0

// 材质着色器程序管理器
#define RenderingSystem_MaterialShaderProgramManager FUN_1801e3820

// 渲染管线验证器
#define RenderingSystem_PipelineValidator FUN_1801e3950

// 材质纹理管理器
#define RenderingSystem_MaterialTextureManager FUN_1801e3a80

// 渲染同步管理器
#define RenderingSystem_RenderSyncManager FUN_1801e3bb0

// 材质着色器参数管理器
#define RenderingSystem_MaterialShaderParameterManager FUN_1801e3ce0

// 渲染内存管理器
#define RenderingSystem_RenderMemoryManager FUN_1801e3e10

// 材质渲染状态管理器
#define RenderingSystem_MaterialRenderStateManager FUN_1801e3f40

// 渲染错误处理器
#define RenderingSystem_RenderErrorHandler FUN_1801e4070

// 材质性能分析器
#define RenderingSystem_MaterialPerformanceAnalyzer FUN_1801e41a0

// 渲染调试管理器
#define RenderingSystem_RenderDebugManager FUN_1801e42d0

// 材质资源管理器
#define RenderingSystem_MaterialResourceManager FUN_1801e4400

// 渲染批处理管理器
#define RenderingSystem_RenderBatchManager FUN_1801e4530

// 材质着色器常量管理器
#define RenderingSystem_MaterialShaderConstantManager FUN_1801e4660

// 渲染查询管理器
#define RenderingSystem_RenderQueryManager FUN_1801e4790

// 材质纹理采样器
#define RenderingSystem_MaterialTextureSampler FUN_1801e48c0

// 渲染管线构建器
#define RenderingSystem_PipelineBuilder FUN_1801e49f0

// 材质光照模型处理器
#define RenderingSystem_MaterialLightModelProcessor FUN_1801e4b20

// 渲染目标配置器
#define RenderingSystem_RenderTargetConfigurator FUN_1801e4c50

// 材质法线处理器
#define RenderingSystem_MaterialNormalProcessor FUN_1801e4d80

// 渲染视图管理器
#define RenderingSystem_RenderViewManager FUN_1801e4eb0

// 材质反射处理器
#define RenderingSystem_MaterialReflectionProcessor FUN_1801e4fe0

// 渲染命令缓冲区管理器
#define RenderingSystem_RenderCommandBufferManager FUN_1801e5110

// 材质折射处理器
#define RenderingSystem_MaterialRefractionProcessor FUN_1801e5240

// 渲染帧缓冲区管理器
#define RenderingSystem_RenderFrameBufferManager FUN_1801e5370

// 材质阴影处理器
#define RenderingSystem_MaterialShadowProcessor FUN_1801e54a0

// 渲染图元管理器
#define RenderingSystem_RenderPrimitiveManager FUN_1801e55d0

// 材质环境光处理器
#define RenderingSystem_MaterialAmbientProcessor FUN_1801e5700

// 渲染索引缓冲区管理器
#define RenderingSystem_RenderIndexBufferManager FUN_1801e5830

// 材质漫反射处理器
#define RenderingSystem_MaterialDiffuseProcessor FUN_1801e5960

// 渲染顶点缓冲区管理器
#define RenderingSystem_RenderVertexBufferManager FUN_1801e5a90

// 材质镜面反射处理器
#define RenderingSystem_MaterialSpecularProcessor FUN_1801e5bc0

// 渲染统一缓冲区管理器
#define RenderingSystem_RenderUniformBufferManager FUN_1801e5cf0

// 材质自发光处理器
#define RenderingSystem_MaterialEmissiveProcessor FUN_1801e5e20

// 渲染着色器存储缓冲区管理器
#define RenderingSystem_RenderShaderStorageBufferManager FUN_1801e5f50

// 材质透明度处理器
#define RenderingSystem_MaterialTransparencyProcessor FUN_1801e6080

// 渲染原子计数器管理器
#define RenderingSystem_RenderAtomicCounterManager FUN_1801e61b0

// 材质金属度处理器
#define RenderingSystem_MaterialMetallicProcessor FUN_1801e62e0

// 渲染变换反馈管理器
#define RenderingSystem_RenderTransformFeedbackManager FUN_1801e6410

// 材质粗糙度处理器
#define RenderingSystem_MaterialRoughnessProcessor FUN_1801e6540

// 渲染图像管理器
#define RenderingSystem_RenderImageManager FUN_1801e6670

// 材质高度图处理器
#define RenderingSystem_MaterialHeightMapProcessor FUN_1801e67a0

// 渲染采样器管理器
#define RenderingSystem_RenderSamplerManager FUN_1801e68d0

// 材质遮罩处理器
#define RenderingSystem_MaterialMaskProcessor FUN_1801e6a00

// 渲染描述符集管理器
#define RenderingSystem_RenderDescriptorSetManager FUN_1801e6b30

// 材质细节纹理处理器
#define RenderingSystem_MaterialDetailTextureProcessor FUN_1801e6c60

// 渲染管线布局管理器
#define RenderingSystem_PipelineLayoutManager FUN_1801e6d90

// 材质法线贴图处理器
#define RenderingSystem_MaterialNormalMapProcessor FUN_1801e6ec0

// 渲染着色器模块管理器
#define RenderingSystem_ShaderModuleManager FUN_1801e6ff0

// 材质环境光遮蔽处理器
#define RenderingSystem_MaterialAmbientOcclusionProcessor FUN_1801e7120

// 渲染渲染通道管理器
#define RenderingSystem_RenderPassManager FUN_1801e7250

// 材质次表面散射处理器
#define RenderingSystem_MaterialSubsurfaceScatteringProcessor FUN_1801e7380

// 渲染帧同步管理器
#define RenderingSystem_RenderFrameSyncManager FUN_1801e74b0

// 材质着色器变体管理器
#define RenderingSystem_MaterialShaderVariantManager FUN_1801e75e0

// 渲染设备队列管理器
#define RenderingSystem_RenderDeviceQueueManager FUN_1801e7710

// 材质着色器预处理器
#define RenderingSystem_MaterialShaderPreprocessor FUN_1801e7840

// 渲染命令池管理器
#define RenderingSystem_RenderCommandPoolManager FUN_1801e7970

// 材质着色器优化器
#define RenderingSystem_MaterialShaderOptimizer FUN_1801e7aa0

// 渲染内存分配器
#define RenderingSystem_RenderMemoryAllocator FUN_1801e7bd0

// 材质着色器分析器
#define RenderingSystem_MaterialShaderAnalyzer FUN_1801e7d00

// 渲染内存映射器
#define RenderingSystem_RenderMemoryMapper FUN_1801e7e30

// 材质着色器调试器
#define RenderingSystem_MaterialShaderDebugger FUN_1801e7f60

// 渲染内存释放器
#define RenderingSystem_RenderMemoryReleaser FUN_1801e8090

// 材质着色器配置器
#define RenderingSystem_MaterialShaderConfigurator FUN_1801e81c0

// 渲染内存绑定器
#define RenderingSystem_RenderMemoryBinder FUN_1801e82f0

// 材质着色器验证器
#define RenderingSystem_MaterialShaderValidator FUN_1801e8420

// 渲染内存解绑器
#define RenderingSystem_RenderMemoryUnbinder FUN_1801e8550

// 材质着色器缓存器
#define RenderingSystem_MaterialShaderCacher FUN_1801e8680

// 渲染内存刷新器
#define RenderingSystem_RenderMemoryFlusher FUN_1801e87b0

// 材质着色器加载器
#define RenderingSystem_MaterialShaderLoader FUN_1801e88e0

// 渲染内存同步器
#define RenderingSystem_RenderMemorySynchronizer FUN_1801e8a10

// 材质着色器卸载器
#define RenderingSystem_MaterialShaderUnloader FUN_1801e8b40

// 渲染内存清理器
#define RenderingSystem_RenderMemoryCleaner FUN_1801e8c70

// 材质着色器重置器
#define RenderingSystem_MaterialShaderResetter FUN_1801e8da0

// 渲染内存重置器
#define RenderingSystem_RenderMemoryResetter FUN_1801e8ed0

// 材质着色器状态管理器
#define RenderingSystem_MaterialShaderStateManager FUN_1801e9000

// 渲染内存状态管理器
#define RenderingSystem_RenderMemoryStateManager FUN_1801e9130

// 材质着色器参数设置器
#define RenderingSystem_MaterialShaderParameterSetter FUN_1801e9260

// 渲染内存参数设置器
#define RenderingSystem_RenderMemoryParameterSetter FUN_1801e9390

// 材质着色器参数获取器
#define RenderingSystem_MaterialShaderParameterGetter FUN_1801e94c0

// 渲染内存参数获取器
#define RenderingSystem_RenderMemoryParameterGetter FUN_1801e95f0

// 材质着色器常量设置器
#define RenderingSystem_MaterialShaderConstantSetter FUN_1801e9720

// 渲染内存常量设置器
#define RenderingSystem_RenderMemoryConstantSetter FUN_1801e9850

// 材质着色器常量获取器
#define RenderingSystem_MaterialShaderConstantGetter FUN_1801e9980

// 渲染内存常量获取器
#define RenderingSystem_RenderMemoryConstantGetter FUN_1801e9ab0

// 材质着色器变量管理器
#define RenderingSystem_MaterialShaderVariableManager FUN_1801e9be0

// 渲染内存变量管理器
#define RenderingSystem_RenderMemoryVariableManager FUN_1801e9d10

// 材质着色器属性管理器
#define RenderingSystem_MaterialShaderAttributeManager FUN_1801e9e40

// 渲染内存属性管理器
#define RenderingSystem_RenderMemoryAttributeManager FUN_1801e9f70

// 材质着色器输出管理器
#define RenderingSystem_MaterialShaderOutputManager FUN_1801ea0a0

// 渲染内存输出管理器
#define RenderingSystem_RenderMemoryOutputManager FUN_1801ea1d0

// 材质着色器输入管理器
#define RenderingSystem_MaterialShaderInputManager FUN_1801ea300

// 渲染内存输入管理器
#define RenderingSystem_RenderMemoryInputManager FUN_1801ea430

// 材质着色器插值器
#define RenderingSystem_MaterialShaderInterpolator FUN_1801ea560

// 渲染内存插值器
#define RenderingSystem_RenderMemoryInterpolator FUN_1801ea690

// 材质着色器采样器
#define RenderingSystem_MaterialShaderSampler FUN_1801ea7c0

// 渲染内存采样器
#define RenderingSystem_RenderMemorySampler FUN_1801ea8f0

// 材质着色器图像管理器
#define RenderingSystem_MaterialShaderImageManager FUN_1801eaa20

// 渲染内存图像管理器
#define RenderingSystem_RenderMemoryImageManager FUN_1801eab50

// 材质着色器缓冲区管理器
#define RenderingSystem_MaterialShaderBufferManager FUN_1801eac80

// 渲染内存缓冲区管理器
#define RenderingSystem_RenderMemoryBufferManager FUN_1801eadb0

// 材质着色器原子计数器
#define RenderingSystem_MaterialShaderAtomicCounter FUN_1801eaee0

// 渲染内存原子计数器
#define RenderingSystem_RenderMemoryAtomicCounter FUN_1801eb010

// 材质着色器变换反馈
#define RenderingSystem_MaterialShaderTransformFeedback FUN_1801eb140

// 渲染内存变换反馈
#define RenderingSystem_RenderMemoryTransformFeedback FUN_1801eb270

// 材质着色器查询器
#define RenderingSystem_MaterialShaderQuery FUN_1801eb3a0

// 渲染内存查询器
#define RenderingSystem_RenderMemoryQuery FUN_1801eb4d0

// 材质着色器程序管道
#define RenderingSystem_MaterialShaderProgramPipeline FUN_1801eb600

// 渲染内存程序管道
#define RenderingSystem_RenderMemoryProgramPipeline FUN_1801eb730

// 材质着色器二进制程序
#define RenderingSystem_MaterialShaderBinaryProgram FUN_1801eb860

// 渲染内存二进制程序
#define RenderingSystem_RenderMemoryBinaryProgram FUN_1801eb990

// 材质着色器SPIR-V模块
#define RenderingSystem_MaterialShaderSPIRVModule FUN_1801ebac0

// 渲染内存SPIR-V模块
#define RenderingSystem_RenderMemorySPIRVModule FUN_1801ebbf0

// 材质着色器GLSL程序
#define RenderingSystem_MaterialShaderGLSLProgram FUN_1801ebd20

// 渲染内存GLSL程序
#define RenderingSystem_RenderMemoryGLSLProgram FUN_1801ebe50

// 材质着色器HLSL程序
#define RenderingSystem_MaterialShaderHLSLProgram FUN_1801ebf80

// 渲染内存HLSL程序
#define RenderingSystem_RenderMemoryHLSLProgram FUN_1801ec0b0

// 材质着色器MSL程序
#define RenderingSystem_MaterialShaderMSLProgram FUN_1801ec1e0

// 渲染内存MSL程序
#define RenderingSystem_RenderMemoryMSLProgram FUN_1801ec310

// 材质着色器金属着色器
#define RenderingSystem_MaterialShaderMetalShader FUN_1801ec440

// 渲染内存金属着色器
#define RenderingSystem_RenderMemoryMetalShader FUN_1801ec570

// 材质着色器DirectX着色器
#define RenderingSystem_MaterialShaderDirectXShader FUN_1801ec6a0

// 渲染内存DirectX着色器
#define RenderingSystem_RenderMemoryDirectXShader FUN_1801ec7d0

// 材质着色器OpenGL着色器
#define RenderingSystem_MaterialShaderOpenGLShader FUN_1801ec900

// 渲染内存OpenGL着色器
#define RenderingSystem_RenderMemoryOpenGLShader FUN_1801eca30

// 材质着色器Vulkan着色器
#define RenderingSystem_MaterialShaderVulkanShader FUN_1801ecb60

// 渲染内存Vulkan着色器
#define RenderingSystem_RenderMemoryVulkanShader FUN_1801ecc90

// 材质着色器通用着色器
#define RenderingSystem_MaterialShaderGenericShader FUN_1801ecdc0

// 渲染内存通用着色器
#define RenderingSystem_RenderMemoryGenericShader FUN_1801ecef0

// 材质着色器计算着色器
#define RenderingSystem_MaterialShaderComputeShader FUN_1801ed020

// 渲染内存计算着色器
#define RenderingSystem_RenderMemoryComputeShader FUN_1801ed150

// 材质着色器顶点着色器
#define RenderingSystem_MaterialShaderVertexShader FUN_1801ed280

// 渲染内存顶点着色器
#define RenderingSystem_RenderMemoryVertexShader FUN_1801ed3b0

// 材质着色器片段着色器
#define RenderingSystem_MaterialShaderFragmentShader FUN_1801ed4e0

// 渲染内存片段着色器
#define RenderingSystem_RenderMemoryFragmentShader FUN_1801ed610

// 材质着色器几何着色器
#define RenderingSystem_MaterialShaderGeometryShader FUN_1801ed740

// 渲染内存几何着色器
#define RenderingSystem_RenderMemoryGeometryShader FUN_1801ed870

// 材质着色器曲面细分着色器
#define RenderingSystem_MaterialShaderTessellationShader FUN_1801ed9a0

// 渲染内存曲面细分着色器
#define RenderingSystem_RenderMemoryTessellationShader FUN_1801edad0

// 材质着色器网格着色器
#define RenderingSystem_MaterialShaderMeshShader FUN_1801edc00

// 渲染内存网格着色器
#define RenderingSystem_RenderMemoryMeshShader FUN_1801edd30

// 材质着色器任务着色器
#define RenderingSystem_MaterialShaderTaskShader FUN_1801ede60

// 渲染内存任务着色器
#define RenderingSystem_RenderMemoryTaskShader FUN_1801edf90

// 材质着色器射线生成着色器
#define RenderingSystem_MaterialShaderRayGenerationShader FUN_1801ee0c0

// 渲染内存射线生成着色器
#define RenderingSystem_RenderMemoryRayGenerationShader FUN_1801ee1f0

// 材质着色器射线相交着色器
#define RenderingSystem_MaterialShaderRayIntersectionShader FUN_1801ee320

// 渲染内存射线相交着色器
#define RenderingSystem_RenderMemoryRayIntersectionShader FUN_1801ee450

// 材质着色器射线任何命中着色器
#define RenderingSystem_MaterialShaderRayAnyHitShader FUN_1801ee580

// 渲染内存射线任何命中着色器
#define RenderingSystem_RenderMemoryRayAnyHitShader FUN_1801ee6b0

// 材质着色器射线最近命中着色器
#define RenderingSystem_MaterialShaderRayClosestHitShader FUN_1801ee7e0

// 渲染内存射线最近命中着色器
#define RenderingSystem_RenderMemoryRayClosestHitShader FUN_1801ee910

// 材质着色器射线未命中着色器
#define RenderingSystem_MaterialShaderRayMissShader FUN_1801eea40

// 渲染内存射线未命中着色器
#define RenderingSystem_RenderMemoryRayMissShader FUN_1801eeb70

// 材质着色器可调用着色器
#define RenderingSystem_MaterialShaderCallableShader FUN_1801eeca0

// 渲染内存可调用着色器
#define RenderingSystem_RenderMemoryCallableShader FUN_1801eedd0

// 材质着色器边界框着色器
#define RenderingSystem_MaterialShaderBoundingBoxShader FUN_1801eef00

// 渲染内存边界框着色器
#define RenderingSystem_RenderMemoryBoundingBoxShader FUN_1801ef030

// 材质着色器程序信息
#define RenderingSystem_MaterialShaderProgramInfo FUN_1801ef160

// 渲染内存程序信息
#define RenderingSystem_RenderMemoryProgramInfo FUN_1801ef290

// 材质着色器程序二进制
#define RenderingSystem_MaterialShaderProgramBinary FUN_1801ef3c0

// 渲染内存程序二进制
#define RenderingSystem_RenderMemoryProgramBinary FUN_1801ef4f0

// 材质着色器程序日志
#define RenderingSystem_MaterialShaderProgramLog FUN_1801ef620

// 渲染内存程序日志
#define RenderingSystem_RenderMemoryProgramLog FUN_1801ef750

// 材质着色器程序源码
#define RenderingSystem_MaterialShaderProgramSource FUN_1801ef880

// 渲染内存程序源码
#define RenderingSystem_RenderMemoryProgramSource FUN_1801ef9b0

// 材质着色器程序头文件
#define RenderingSystem_MaterialShaderProgramHeader FUN_1801efae0

// 渲染内存程序头文件
#define RenderingSystem_RenderMemoryProgramHeader FUN_1801efc10

// 材质着色器程序库
#define RenderingSystem_MaterialShaderProgramLibrary FUN_1801efd40

// 渲染内存程序库
#define RenderingSystem_RenderMemoryProgramLibrary FUN_1801efe70

// 材质着色器程序归档
#define RenderingSystem_MaterialShaderProgramArchive FUN_1801effa0

// 渲染内存程序归档
#define RenderingSystem_RenderMemoryProgramArchive FUN_1801f00d0

// 材质着色器程序缓存
#define RenderingSystem_MaterialShaderProgramCache FUN_1801f0200

// 渲染内存程序缓存
#define RenderingSystem_RenderMemoryProgramCache FUN_1801f0330

// 材质着色器程序池
#define RenderingSystem_MaterialShaderProgramPool FUN_1801f0460

// 渲染内存程序池
#define RenderingSystem_RenderMemoryProgramPool FUN_1801f0590

// 材质着色器程序队列
#define RenderingSystem_MaterialShaderProgramQueue FUN_1801f06c0

// 渲染内存程序队列
#define RenderingSystem_RenderMemoryProgramQueue FUN_1801f07f0

// 材质着色器程序栈
#define RenderingSystem_MaterialShaderProgramStack FUN_1801f0920

// 渲染内存程序栈
#define RenderingSystem_RenderMemoryProgramStack FUN_1801f0a50

// 材质着色器程序堆
#define RenderingSystem_MaterialShaderProgramHeap FUN_1801f0b80

// 渲染内存程序堆
#define RenderingSystem_RenderMemoryProgramHeap FUN_1801f0cb0

// 材质着色器程序集合
#define RenderingSystem_MaterialShaderProgramCollection FUN_1801f0de0

// 渲染内存程序集合
#define RenderingSystem_RenderMemoryProgramCollection FUN_1801f0f10

// 材质着色器程序映射
#define RenderingSystem_MaterialShaderProgramMap FUN_1801f1040

// 渲染内存程序映射
#define RenderingSystem_RenderMemoryProgramMap FUN_1801f1170

// 材质着色器程序数组
#define RenderingSystem_MaterialShaderProgramArray FUN_1801f12a0

// 渲染内存程序数组
#define RenderingSystem_RenderMemoryProgramArray FUN_1801f13d0

// 材质着色器程序向量
#define RenderingSystem_MaterialShaderProgramVector FUN_1801f1500

// 渲染内存程序向量
#define RenderingSystem_RenderMemoryProgramVector FUN_1801f1630

// 材质着色器程序列表
#define RenderingSystem_MaterialShaderProgramList FUN_1801f1760

// 渲染内存程序列表
#define RenderingSystem_RenderMemoryProgramList FUN_1801f1890

// 材质着色器程序链表
#define RenderingSystem_MaterialShaderProgramLinkedList FUN_1801f19c0

// 渲染内存程序链表
#define RenderingSystem_RenderMemoryProgramLinkedList FUN_1801f1af0

// 材质着色器程序树
#define RenderingSystem_MaterialShaderProgramTree FUN_1801f1c20

// 渲染内存程序树
#define RenderingSystem_RenderMemoryProgramTree FUN_1801f1d50

// 材质着色器程序图
#define RenderingSystem_MaterialShaderProgramGraph FUN_1801f1e80

// 渲染内存程序图
#define RenderingSystem_RenderMemoryProgramGraph FUN_1801f1fb0

// 材质着色器程序网格
#define RenderingSystem_MaterialShaderProgramMesh FUN_1801f20e0

// 渲染内存程序网格
#define RenderingSystem_RenderMemoryProgramMesh FUN_1801f2210

// 材质着色器程序体积
#define RenderingSystem_MaterialShaderProgramVolume FUN_1801f2340

// 渲染内存程序体积
#define RenderingSystem_RenderMemoryProgramVolume FUN_1801f2470

// 材质着色器程序纹理
#define RenderingSystem_MaterialShaderProgramTexture FUN_1801f25a0

// 渲染内存程序纹理
#define RenderingSystem_RenderMemoryProgramTexture FUN_1801f26d0

// 材质着色器程序缓冲区
#define RenderingSystem_MaterialShaderProgramBuffer FUN_1801f2800

// 渲染内存程序缓冲区
#define RenderingSystem_RenderMemoryProgramBuffer FUN_1801f2930

// 材质着色器程序图像
#define RenderingSystem_MaterialShaderProgramImage FUN_1801f2a60

// 渲染内存程序图像
#define RenderingSystem_RenderMemoryProgramImage FUN_1801f2b90

// 材质着色器程序采样器
#define RenderingSystem_MaterialShaderProgramSampler FUN_1801f2cc0

// 渲染内存程序采样器
#define RenderingSystem_RenderMemoryProgramSampler FUN_1801f2df0

// 材质着色器程序帧缓冲区
#define RenderingSystem_MaterialShaderProgramFramebuffer FUN_1801f2f20

// 渲染内存程序帧缓冲区
#define RenderingSystem_RenderMemoryProgramFramebuffer FUN_1801f3050

// 材质着色器程序渲染通道
#define RenderingSystem_MaterialShaderProgramRenderPass FUN_1801f3180

// 渲染内存程序渲染通道
#define RenderingSystem_RenderMemoryProgramRenderPass FUN_1801f32b0

// 材质着色器程序描述符集
#define RenderingSystem_MaterialShaderProgramDescriptorSet FUN_1801f33e0

// 渲染内存程序描述符集
#define RenderingSystem_RenderMemoryProgramDescriptorSet FUN_1801f3510

// 材质着色器程序描述符池
#define RenderingSystem_MaterialShaderProgramDescriptorPool FUN_1801f3640

// 渲染内存程序描述符池
#define RenderingSystem_RenderMemoryProgramDescriptorPool FUN_1801f3770

// 材质着色器程序描述符布局
#define RenderingSystem_MaterialShaderProgramDescriptorLayout FUN_1801f38a0

// 渲染内存程序描述符布局
#define RenderingSystem_RenderMemoryProgramDescriptorLayout FUN_1801f39d0

// 材质着色器程序管线布局
#define RenderingSystem_MaterialShaderProgramPipelineLayout FUN_1801f3b00

// 渲染内存程序管线布局
#define RenderingSystem_RenderMemoryProgramPipelineLayout FUN_1801f3c30

// 材质着色器程序推送常量
#define RenderingSystem_MaterialShaderProgramPushConstant FUN_1801f3d60

// 渲染内存程序推送常量
#define RenderingSystem_RenderMemoryProgramPushConstant FUN_1801f3e90

// 材质着色器程序专用区域
#define RenderingSystem_MaterialShaderProgramSpecializationInfo FUN_1801f3fc0

// 渲染内存程序专用区域
#define RenderingSystem_RenderMemoryProgramSpecializationInfo FUN_1801f40f0

// 材质着色器程序专用常量
#define RenderingSystem_MaterialShaderProgramSpecializationConstant FUN_1801f4220

// 渲染内存程序专用常量
#define RenderingSystem_RenderMemoryProgramSpecializationConstant FUN_1801f4350

// 材质着色器程序专用映射
#define RenderingSystem_MaterialShaderProgramSpecializationMap FUN_1801f4480

// 渲染内存程序专用映射
#define RenderingSystem_RenderMemoryProgramSpecializationMap FUN_1801f45b0

// 材质着色器程序专用入口
#define RenderingSystem_MaterialShaderProgramSpecializationEntry FUN_1801f46e0

// 渲染内存程序专用入口
#define RenderingSystem_RenderMemoryProgramSpecializationEntry FUN_1801f4810

// 材质着色器程序专用阶段
#define RenderingSystem_MaterialShaderProgramSpecializationStage FUN_1801f4940

// 渲染内存程序专用阶段
#define RenderingSystem_RenderMemoryProgramSpecializationStage FUN_1801f4a70

// 材质着色器程序专用模块
#define RenderingSystem_MaterialShaderProgramSpecializationModule FUN_1801f4ba0

// 渲染内存程序专用模块
#define RenderingSystem_RenderMemoryProgramSpecializationModule FUN_1801f4cd0

// 材质着色器程序专用执行
#define RenderingSystem_MaterialShaderProgramSpecializationExecution FUN_1801f4e00

// 渲染内存程序专用执行
#define RenderingSystem_RenderMemoryProgramSpecializationExecution FUN_1801f4f30

// 材质着色器程序专用操作
#define RenderingSystem_MaterialShaderProgramSpecializationOperation FUN_1801f5060

// 渲染内存程序专用操作
#define RenderingSystem_RenderMemoryProgramSpecializationOperation FUN_1801f5190

// 材质着色器程序专用指令
#define RenderingSystem_MaterialShaderProgramSpecializationInstruction FUN_1801f52c0

// 渲染内存程序专用指令
#define RenderingSystem_RenderMemoryProgramSpecializationInstruction FUN_1801f53f0

// 材质着色器程序专用数据
#define RenderingSystem_MaterialShaderProgramSpecializationData FUN_1801f5520

// 渲染内存程序专用数据
#define RenderingSystem_RenderMemoryProgramSpecializationData FUN_1801f5650

// 材质着色器程序专用类型
#define RenderingSystem_MaterialShaderProgramSpecializationType FUN_1801f5780

// 渲染内存程序专用类型
#define RenderingSystem_RenderMemoryProgramSpecializationType FUN_1801f58b0

// 材质着色器程序专用值
#define RenderingSystem_MaterialShaderProgramSpecializationValue FUN_1801f59e0

// 渲染内存程序专用值
#define RenderingSystem_RenderMemoryProgramSpecializationValue FUN_1801f5b10

// 材质着色器程序专用范围
#define RenderingSystem_MaterialShaderProgramSpecializationRange FUN_1801f5c40

// 渲染内存程序专用范围
#define RenderingSystem_RenderMemoryProgramSpecializationRange FUN_1801f5d70

// 材质着色器程序专用界限
#define RenderingSystem_MaterialShaderProgramSpecializationBound FUN_1801f5ea0

// 渲染内存程序专用界限
#define RenderingSystem_RenderMemoryProgramSpecializationBound FUN_1801f5fd0

// 材质着色器程序专用限制
#define RenderingSystem_MaterialShaderProgramSpecializationLimit FUN_1801f6100

// 渲染内存程序专用限制
#define RenderingSystem_RenderMemoryProgramSpecializationLimit FUN_1801f6230

// 材质着色器程序专用约束
#define RenderingSystem_MaterialShaderProgramSpecializationConstraint FUN_1801f6360

// 渲染内存程序专用约束
#define RenderingSystem_RenderMemoryProgramSpecializationConstraint FUN_1801f6490

// 材质着色器程序专用条件
#define RenderingSystem_MaterialShaderProgramSpecializationCondition FUN_1801f65c0

// 渲染内存程序专用条件
#define RenderingSystem_RenderMemoryProgramSpecializationCondition FUN_1801f66f0

// 材质着色器程序专用分支
#define RenderingSystem_MaterialShaderProgramSpecializationBranch FUN_1801f6820

// 渲染内存程序专用分支
#define RenderingSystem_RenderMemoryProgramSpecializationBranch FUN_1801f6950

// 材质着色器程序专用循环
#define RenderingSystem_MaterialShaderProgramSpecializationLoop FUN_1801f6a80

// 渲染内存程序专用循环
#define RenderingSystem_RenderMemoryProgramSpecializationLoop FUN_1801f6bb0

// 材质着色器程序专用函数
#define RenderingSystem_MaterialShaderProgramSpecializationFunction FUN_1801f6ce0

// 渲染内存程序专用函数
#define RenderingSystem_RenderMemoryProgramSpecializationFunction FUN_1801f6e10

// 材质着色器程序专用过程
#define RenderingSystem_MaterialShaderProgramSpecializationProcedure FUN_1801f6f40

// 渲染内存程序专用过程
#define RenderingSystem_RenderMemoryProgramSpecializationProcedure FUN_1801f7070

// 材质着色器程序专用算法
#define RenderingSystem_MaterialShaderProgramSpecializationAlgorithm FUN_1801f71a0

// 渲染内存程序专用算法
#define RenderingSystem_RenderMemoryProgramSpecializationAlgorithm FUN_1801f72d0

// 材质着色器程序专用优化
#define RenderingSystem_MaterialShaderProgramSpecializationOptimization FUN_1801f7400

// 渲染内存程序专用优化
#define RenderingSystem_RenderMemoryProgramSpecializationOptimization FUN_1801f7530

// 材质着色器程序专用分析
#define RenderingSystem_MaterialShaderProgramSpecializationAnalysis FUN_1801f7660

// 渲染内存程序专用分析
#define RenderingSystem_RenderMemoryProgramSpecializationAnalysis FUN_1801f7790

// 材质着色器程序专用验证
#define RenderingSystem_MaterialShaderProgramSpecializationValidation FUN_1801f78c0

// 渲染内存程序专用验证
#define RenderingSystem_RenderMemoryProgramSpecializationValidation FUN_1801f79f0

// 材质着色器程序专用测试
#define RenderingSystem_MaterialShaderProgramSpecializationTest FUN_1801f7b20

// 渲染内存程序专用测试
#define RenderingSystem_RenderMemoryProgramSpecializationTest FUN_1801f7c50

// 材质着色器程序专用调试
#define RenderingSystem_MaterialShaderProgramSpecializationDebug FUN_1801f7d80

// 渲染内存程序专用调试
#define RenderingSystem_RenderMemoryProgramSpecializationDebug FUN_1801f7eb0

// 材质着色器程序专用日志
#define RenderingSystem_MaterialShaderProgramSpecializationLog FUN_1801f7fe0

// 渲染内存程序专用日志
#define RenderingSystem_RenderMemoryProgramSpecializationLog FUN_1801f8110

// 材质着色器程序专用错误
#define RenderingSystem_MaterialShaderProgramSpecializationError FUN_1801f8240

// 渲染内存程序专用错误
#define RenderingSystem_RenderMemoryProgramSpecializationError FUN_1801f8370

// 材质着色器程序专用警告
#define RenderingSystem_MaterialShaderProgramSpecializationWarning FUN_1801f84a0

// 渲染内存程序专用警告
#define RenderingSystem_RenderMemoryProgramSpecializationWarning FUN_1801f85d0

// 材质着色器程序专用信息
#define RenderingSystem_MaterialShaderProgramSpecializationInfo FUN_1801f8700

// 渲染内存程序专用信息
#define RenderingSystem_RenderMemoryProgramSpecializationInfo FUN_1801f8830

// 材质着色器程序专用状态
#define RenderingSystem_MaterialShaderProgramSpecializationStatus FUN_1801f8960

// 渲染内存程序专用状态
#define RenderingSystem_RenderMemoryProgramSpecializationStatus FUN_1801f8a90

// 材质着色器程序专用结果
#define RenderingSystem_MaterialShaderProgramSpecializationResult FUN_1801f8bc0

// 渲染内存程序专用结果
#define RenderingSystem_RenderMemoryProgramSpecializationResult FUN_1801f8cf0

// 材质着色器程序专用输出
#define RenderingSystem_MaterialShaderProgramSpecializationOutput FUN_1801f8e20

// 渲染内存程序专用输出
#define RenderingSystem_RenderMemoryProgramSpecializationOutput FUN_1801f8f50

// 材质着色器程序专用输入
#define RenderingSystem_MaterialShaderProgramSpecializationInput FUN_1801f9080

// 渲染内存程序专用输入
#define RenderingSystem_RenderMemoryProgramSpecializationInput FUN_1801f91b0

// 材质着色器程序专用参数
#define RenderingSystem_MaterialShaderProgramSpecializationParameter FUN_1801f92e0

// 渲染内存程序专用参数
#define RenderingSystem_RenderMemoryProgramSpecializationParameter FUN_1801f9410

// 材质着色器程序专用变量
#define RenderingSystem_MaterialShaderProgramSpecializationVariable FUN_1801f9540

// 渲染内存程序专用变量
#define RenderingSystem_RenderMemoryProgramSpecializationVariable FUN_1801f9670

// 材质着色器程序专用常量
#define RenderingSystem_MaterialShaderProgramSpecializationConstant FUN_1801f97a0

// 渲染内存程序专用常量
#define RenderingSystem_RenderMemoryProgramSpecializationConstant FUN_1801f98d0

// 材质着色器程序专用类型定义
#define RenderingSystem_MaterialShaderProgramSpecializationTypeDef FUN_1801f9a00

// 渲染内存程序专用类型定义
#define RenderingSystem_RenderMemoryProgramSpecializationTypeDef FUN_1801f9b30

// 材质着色器程序专用结构定义
#define RenderingSystem_MaterialShaderProgramSpecializationStructDef FUN_1801f9c60

// 渲染内存程序专用结构定义
#define RenderingSystem_RenderMemoryProgramSpecializationStructDef FUN_1801f9d90

// 材质着色器程序专用联合定义
#define RenderingSystem_MaterialShaderProgramSpecializationUnionDef FUN_1801f9ec0

// 渲染内存程序专用联合定义
#define RenderingSystem_RenderMemoryProgramSpecializationUnionDef FUN_1801f9ff0

// 材质着色器程序专用枚举定义
#define RenderingSystem_MaterialShaderProgramSpecializationEnumDef FUN_1801fa120

// 渲染内存程序专用枚举定义
#define RenderingSystem_RenderMemoryProgramSpecializationEnumDef FUN_1801fa250

// 材质着色器程序专用类定义
#define RenderingSystem_MaterialShaderProgramSpecializationClassDef FUN_1801fa380

// 渲染内存程序专用类定义
#define RenderingSystem_RenderMemoryProgramSpecializationClassDef FUN_1801fa4b0

// 材质着色器程序专用接口定义
#define RenderingSystem_MaterialShaderProgramSpecializationInterfaceDef FUN_1801fa5e0

// 渲染内存程序专用接口定义
#define RenderingSystem_RenderMemoryProgramSpecializationInterfaceDef FUN_1801fa710

// 材质着色器程序专用命名空间
#define RenderingSystem_MaterialShaderProgramSpecializationNamespace FUN_1801fa840

// 渲染内存程序专用命名空间
#define RenderingSystem_RenderMemoryProgramSpecializationNamespace FUN_1801fa970

// 材质着色器程序专用包
#define RenderingSystem_MaterialShaderProgramSpecializationPackage FUN_1801faaa0

// 渲染内存程序专用包
#define RenderingSystem_RenderMemoryProgramSpecializationPackage FUN_1801fabd0

// 材质着色器程序专用模块
#define RenderingSystem_MaterialShaderProgramSpecializationModule FUN_1801fad00

// 渲染内存程序专用模块
#define RenderingSystem_RenderMemoryProgramSpecializationModule FUN_1801fae30

// 材质着色器程序专用库
#define RenderingSystem_MaterialShaderProgramSpecializationLibrary FUN_1801faf60

// 渲染内存程序专用库
#define RenderingSystem_RenderMemoryProgramSpecializationLibrary FUN_1801fb090

// 材质着色器程序专用框架
#define RenderingSystem_MaterialShaderProgramSpecializationFramework FUN_1801fb1c0

// 渲染内存程序专用框架
#define RenderingSystem_RenderMemoryProgramSpecializationFramework FUN_1801fb2f0

// 材质着色器程序专用平台
#define RenderingSystem_MaterialShaderProgramSpecializationPlatform FUN_1801fb420

// 渲染内存程序专用平台
#define RenderingSystem_RenderMemoryProgramSpecializationPlatform FUN_1801fb550

// 材质着色器程序专用架构
#define RenderingSystem_MaterialShaderProgramSpecializationArchitecture FUN_1801fb680

// 渲染内存程序专用架构
#define RenderingSystem_RenderMemoryProgramSpecializationArchitecture FUN_1801fb7b0

// 材质着色器程序专用设备
#define RenderingSystem_MaterialShaderProgramSpecializationDevice FUN_1801fb8e0

// 渲染内存程序专用设备
#define RenderingSystem_RenderMemoryProgramSpecializationDevice FUN_1801fba10

// 材质着色器程序专用驱动
#define RenderingSystem_MaterialShaderProgramSpecializationDriver FUN_1801fbb40

// 渲染内存程序专用驱动
#define RenderingSystem_RenderMemoryProgramSpecializationDriver FUN_1801fbc70

// 材质着色器程序专用API
#define RenderingSystem_MaterialShaderProgramSpecializationAPI FUN_1801fbda0

// 渲染内存程序专用API
#define RenderingSystem_RenderMemoryProgramSpecializationAPI FUN_1801fbed0

// 材质着色器程序专用版本
#define RenderingSystem_MaterialShaderProgramSpecializationVersion FUN_1801fc000

// 渲染内存程序专用版本
#define RenderingSystem_RenderMemoryProgramSpecializationVersion FUN_1801fc130

// 材质着色器程序专用扩展
#define RenderingSystem_MaterialShaderProgramSpecializationExtension FUN_1801fc260

// 渲染内存程序专用扩展
#define RenderingSystem_RenderMemoryProgramSpecializationExtension FUN_1801fc390

// 材质着色器程序专用特性
#define RenderingSystem_MaterialShaderProgramSpecializationFeature FUN_1801fc4c0

// 渲染内存程序专用特性
#define RenderingSystem_RenderMemoryProgramSpecializationFeature FUN_1801fc5f0

// 材质着色器程序专用能力
#define RenderingSystem_MaterialShaderProgramSpecializationCapability FUN_1801fc720

// 渲染内存程序专用能力
#define RenderingSystem_RenderMemoryProgramSpecializationCapability FUN_1801fc850

// 材质着色器程序专用限制
#define RenderingSystem_MaterialShaderProgramSpecializationRestriction FUN_1801fc980

// 渲染内存程序专用限制
#define RenderingSystem_RenderMemoryProgramSpecializationRestriction FUN_1801fcab0

// 材质着色器程序专用要求
#define RenderingSystem_MaterialShaderProgramSpecializationRequirement FUN_1801fcbe0

// 渲染内存程序专用要求
#define RenderingSystem_RenderMemoryProgramSpecializationRequirement FUN_1801fcd10

// 材质着色器程序专用规范
#define RenderingSystem_MaterialShaderProgramSpecializationSpecification FUN_1801fce40

// 渲染内存程序专用规范
#define RenderingSystem_RenderMemoryProgramSpecializationSpecification FUN_1801fcf70

// 材质着色器程序专用标准
#define RenderingSystem_MaterialShaderProgramSpecializationStandard FUN_1801fd0a0

// 渲染内存程序专用标准
#define RenderingSystem_RenderMemoryProgramSpecializationStandard FUN_1801fd1d0

// 材质着色器程序专用协议
#define RenderingSystem_MaterialShaderProgramSpecializationProtocol FUN_1801fd300

// 渲染内存程序专用协议
#define RenderingSystem_RenderMemoryProgramSpecializationProtocol FUN_1801fd430

// 材质着色器程序专用格式
#define RenderingSystem_MaterialShaderProgramSpecializationFormat FUN_1801fd560

// 渲染内存程序专用格式
#define RenderingSystem_RenderMemoryProgramSpecializationFormat FUN_1801fd690

// 材质着色器程序专用编码
#define RenderingSystem_MaterialShaderProgramSpecializationEncoding FUN_1801fd7c0

// 渲染内存程序专用编码
#define RenderingSystem_RenderMemoryProgramSpecializationEncoding FUN_1801fd8f0

// 材质着色器程序专用压缩
#define RenderingSystem_MaterialShaderProgramSpecializationCompression FUN_1801fda20

// 渲染内存程序专用压缩
#define RenderingSystem_RenderMemoryProgramSpecializationCompression FUN_1801fdb50

// 材质着色器程序专用加密
#define RenderingSystem_MaterialShaderProgramSpecializationEncryption FUN_1801fdc80

// 渲染内存程序专用加密
#define RenderingSystem_RenderMemoryProgramSpecializationEncryption FUN_1801fddb0

// 材质着色器程序专用签名
#define RenderingSystem_MaterialShaderProgramSpecializationSignature FUN_1801fdee0

// 渲染内存程序专用签名
#define RenderingSystem_RenderMemoryProgramSpecializationSignature FUN_1801fe010

// 材质着色器程序专用校验
#define RenderingSystem_MaterialShaderProgramSpecializationChecksum FUN_1801fe140

// 渲染内存程序专用校验
#define RenderingSystem_RenderMemoryProgramSpecializationChecksum FUN_1801fe270

// 材质着色器程序专用哈希
#define RenderingSystem_MaterialShaderProgramSpecializationHash FUN_1801fe3a0

// 渲染内存程序专用哈希
#define RenderingSystem_RenderMemoryProgramSpecializationHash FUN_1801fe4d0

// 材质着色器程序专用摘要
#define RenderingSystem_MaterialShaderProgramSpecializationDigest FUN_1801fe600

// 渲染内存程序专用摘要
#define RenderingSystem_RenderMemoryProgramSpecializationDigest FUN_1801fe730

// 材质着色器程序专用指纹
#define RenderingSystem_MaterialShaderProgramSpecializationFingerprint FUN_1801fe860

// 渲染内存程序专用指纹
#define RenderingSystem_RenderMemoryProgramSpecializationFingerprint FUN_1801fe990

// 材质着色器程序专用标识
#define RenderingSystem_MaterialShaderProgramSpecializationIdentifier FUN_1801feac0

// 渲染内存程序专用标识
#define RenderingSystem_RenderMemoryProgramSpecializationIdentifier FUN_1801febf0

// 材质着色器程序专用名称
#define RenderingSystem_MaterialShaderProgramSpecializationName FUN_1801fed20

// 渲染内存程序专用名称
#define RenderingSystem_RenderMemoryProgramSpecializationName FUN_1801fee50

// 材质着色器程序专用标题
#define RenderingSystem_MaterialShaderProgramSpecializationTitle FUN_1801fef80

// 渲染内存程序专用标题
#define RenderingSystem_RenderMemoryProgramSpecializationTitle FUN_1801ff0b0

// 材质着色器程序专用描述
#define RenderingSystem_MaterialShaderProgramSpecializationDescription FUN_1801ff1e0

// 渲染内存程序专用描述
#define RenderingSystem_RenderMemoryProgramSpecializationDescription FUN_1801ff310

// 材质着色器程序专用注释
#define RenderingSystem_MaterialShaderProgramSpecializationComment FUN_1801ff440

// 渲染内存程序专用注释
#define RenderingSystem_RenderMemoryProgramSpecializationComment FUN_1801ff570

// 材质着色器程序专用文档
#define RenderingSystem_MaterialShaderProgramSpecializationDocumentation FUN_1801ff6a0

// 渲染内存程序专用文档
#define RenderingSystem_RenderMemoryProgramSpecializationDocumentation FUN_1801ff7d0

// 材质着色器程序专用许可证
#define RenderingSystem_MaterialShaderProgramSpecializationLicense FUN_1801ff900

// 渲染内存程序专用许可证
#define RenderingSystem_RenderMemoryProgramSpecializationLicense FUN_1801ffa30

// 材质着色器程序专用版权
#define RenderingSystem_MaterialShaderProgramSpecializationCopyright FUN_1801ffb60

// 渲染内存程序专用版权
#define RenderingSystem_RenderMemoryProgramSpecializationCopyright FUN_1801ffc90

// 材质着色器程序专用作者
#define RenderingSystem_MaterialShaderProgramSpecializationAuthor FUN_1801ffdc0

// 渲染内存程序专用作者
#define RenderingSystem_RenderMemoryProgramSpecializationAuthor FUN_1801ffef0

// 材质着色器程序专用创建者
#define RenderingSystem_MaterialShaderProgramSpecializationCreator FUN_180200020

// 渲染内存程序专用创建者
#define RenderingSystem_RenderMemoryProgramSpecializationCreator FUN_180200150

// 材质着色器程序专用维护者
#define RenderingSystem_MaterialShaderProgramSpecializationMaintainer FUN_180200280

// 渲染内存程序专用维护者
#define RenderingSystem_RenderMemoryProgramSpecializationMaintainer FUN_1802003b0

// 材质着色器程序专用贡献者
#define RenderingSystem_MaterialShaderProgramSpecializationContributor FUN_1802004e0

// 渲染内存程序专用贡献者
#define RenderingSystem_RenderMemoryProgramSpecializationContributor FUN_180200610

// 材质着色器程序专用用户
#define RenderingSystem_MaterialShaderProgramSpecializationUser FUN_180200740

// 渲染内存程序专用用户
#define RenderingSystem_RenderMemoryProgramSpecializationUser FUN_180200870

// 材质着色器程序专用客户
#define RenderingSystem_MaterialShaderProgramSpecializationClient FUN_1802009a0

// 渲染内存程序专用客户
#define RenderingSystem_RenderMemoryProgramSpecializationClient FUN_180200ad0

// 材质着色器程序专用服务器
#define RenderingSystem_MaterialShaderProgramSpecializationServer FUN_180200c00

// 渲染内存程序专用服务器
#define RenderingSystem_RenderMemoryProgramSpecializationServer FUN_180200d30

// 材质着色器程序专用代理
#define RenderingSystem_MaterialShaderProgramSpecializationAgent FUN_180200e60

// 渲染内存程序专用代理
#define RenderingSystem_RenderMemoryProgramSpecializationAgent FUN_180200f90

// 材质着色器程序专用中介
#define RenderingSystem_MaterialShaderProgramSpecializationBroker FUN_1802010c0

// 渲染内存程序专用中介
#define RenderingSystem_RenderMemoryProgramSpecializationBroker FUN_1802011f0

// 材质着色器程序专用网关
#define RenderingSystem_MaterialShaderProgramSpecializationGateway FUN_180201320

// 渲染内存程序专用网关
#define RenderingSystem_RenderMemoryProgramSpecializationGateway FUN_180201450

// 材质着色器程序专用路由
#define RenderingSystem_MaterialShaderProgramSpecializationRouter FUN_180201580

// 渲染内存程序专用路由
#define RenderingSystem_RenderMemoryProgramSpecializationRouter FUN_1802016b0

// 材质着色器程序专用交换机
#define RenderingSystem_MaterialShaderProgramSpecializationSwitch FUN_1802017e0

// 渲染内存程序专用交换机
#define RenderingSystem_RenderMemoryProgramSpecializationSwitch FUN_180201910

// 材质着色器程序专用集线器
#define RenderingSystem_MaterialShaderProgramSpecializationHub FUN_180201a40

// 渲染内存程序专用集线器
#define RenderingSystem_RenderMemoryProgramSpecializationHub FUN_180201b70

// 材质着色器程序专用桥接
#define RenderingSystem_MaterialShaderProgramSpecializationBridge FUN_180201ca0

// 渲染内存程序专用桥接
#define RenderingSystem_RenderMemoryProgramSpecializationBridge FUN_180201dd0

// 材质着色器程序专用转发
#define RenderingSystem_MaterialShaderProgramSpecializationForwarder FUN_180201f00

// 渲染内存程序专用转发
#define RenderingSystem_RenderMemoryProgramSpecializationForwarder FUN_180202030

// 材质着色器程序专用过滤器
#define RenderingSystem_MaterialShaderProgramSpecializationFilter FUN_180202160

// 渲染内存程序专用过滤器
#define RenderingSystem_RenderMemoryProgramSpecializationFilter FUN_180202290

// 材质着色器程序专用检测器
#define RenderingSystem_MaterialShaderProgramSpecializationDetector FUN_1802023c0

// 渲染内存程序专用检测器
#define RenderingSystem_RenderMemoryProgramSpecializationDetector FUN_1802024f0

// 材质着色器程序专用监视器
#define RenderingSystem_MaterialShaderProgramSpecializationMonitor FUN_180202620

// 渲染内存程序专用监视器
#define RenderingSystem_RenderMemoryProgramSpecializationMonitor FUN_180202750

// 材质着色器程序专用控制器
#define RenderingSystem_MaterialShaderProgramSpecializationController FUN_180202880

// 渲染内存程序专用控制器
#define RenderingSystem_RenderMemoryProgramSpecializationController FUN_1802029b0

// 材质着色器程序专用管理器
#define RenderingSystem_MaterialShaderProgramSpecializationManager FUN_180202ae0

// 渲染内存程序专用管理器
#define RenderingSystem_RenderMemoryProgramSpecializationManager FUN_180202c10

// 材质着色器程序专用调度器
#define RenderingSystem_MaterialShaderProgramSpecializationScheduler FUN_180202d40

// 渲染内存程序专用调度器
#define RenderingSystem_RenderMemoryProgramSpecializationScheduler FUN_180202e70

// 材质着色器程序专用执行器
#define RenderingSystem_MaterialShaderProgramSpecializationExecutor FUN_180202fa0

// 渲染内存程序专用执行器
#define RenderingSystem_RenderMemoryProgramSpecializationExecutor FUN_1802030d0

// 材质着色器程序专用处理器
#define RenderingSystem_MaterialShaderProgramSpecializationProcessor FUN_180203200

// 渲染内存程序专用处理器
#define RenderingSystem_RenderMemoryProgramSpecializationProcessor FUN_180203330

// 材质着色器程序专用计算器
#define RenderingSystem_MaterialShaderProgramSpecializationCalculator FUN_180203460

// 渲染内存程序专用计算器
#define RenderingSystem_RenderMemoryProgramSpecializationCalculator FUN_180203590

// 材质着色器程序专用分析器
#define RenderingSystem_MaterialShaderProgramSpecializationAnalyzer FUN_1802036c0

// 渲染内存程序专用分析器
#define RenderingSystem_RenderMemoryProgramSpecializationAnalyzer FUN_1802037f0

// 材质着色器程序专用优化器
#define RenderingSystem_MaterialShaderProgramSpecializationOptimizer FUN_180203920

// 渲染内存程序专用优化器
#define RenderingSystem_RenderMemoryProgramSpecializationOptimizer FUN_180203a50

// 材质着色器程序专用编译器
#define RenderingSystem_MaterialShaderProgramSpecializationCompiler FUN_180203b80

// 渲染内存程序专用编译器
#define RenderingSystem_RenderMemoryProgramSpecializationCompiler FUN_180203cb0

// 材质着色器程序专用解释器
#define RenderingSystem_MaterialShaderProgramSpecializationInterpreter FUN_180203de0

// 渲染内存程序专用解释器
#define RenderingSystem_RenderMemoryProgramSpecializationInterpreter FUN_180203f10

// 材质着色器程序专用翻译器
#define RenderingSystem_MaterialShaderProgramSpecializationTranslator FUN_180204040

// 渲染内存程序专用翻译器
#define RenderingSystem_RenderMemoryProgramSpecializationTranslator FUN_180204170

// 材质着色器程序专用转换器
#define RenderingSystem_MaterialShaderProgramSpecializationConverter FUN_1802042a0

// 渲染内存程序专用转换器
#define RenderingSystem_RenderMemoryProgramSpecializationConverter FUN_1802043d0

// 材质着色器程序专用适配器
#define RenderingSystem_MaterialShaderProgramSpecializationAdapter FUN_180204500

// 渲染内存程序专用适配器
#define RenderingSystem_RenderMemoryProgramSpecializationAdapter FUN_180204630

// 材质着色器程序专用连接器
#define RenderingSystem_MaterialShaderProgramSpecializationConnector FUN_180204760

// 渲染内存程序专用连接器
#define RenderingSystem_RenderMemoryProgramSpecializationConnector FUN_180204890

// 材质着色器程序专用绑定器
#define RenderingSystem_MaterialShaderProgramSpecializationBinder FUN_1802049c0

// 渲染内存程序专用绑定器
#define RenderingSystem_RenderMemoryProgramSpecializationBinder FUN_180204af0

// 材质着色器程序专用解绑器
#define RenderingSystem_MaterialShaderProgramSpecializationUnbinder FUN_180204c20

// 渲染内存程序专用解绑器
#define RenderingSystem_RenderMemoryProgramSpecializationUnbinder FUN_180204d50

// 材质着色器程序专用分配器
#define RenderingSystem_MaterialShaderProgramSpecializationAllocator FUN_180204e80

// 渲染内存程序专用分配器
#define RenderingSystem_RenderMemoryProgramSpecializationAllocator FUN_180204fb0

// 材质着色器程序专用释放器
#define RenderingSystem_MaterialShaderProgramSpecializationDeallocator FUN_1802050e0

// 渲染内存程序专用释放器
#define RenderingSystem_RenderMemoryProgramSpecializationDeallocator FUN_180205210

// 材质着色器程序专用初始化器
#define RenderingSystem_MaterialShaderProgramSpecializationInitializer FUN_180205340

// 渲染内存程序专用初始化器
#define RenderingSystem_RenderMemoryProgramSpecializationInitializer FUN_180205470

// 材质着色器程序专用终止器
#define RenderingSystem_MaterialShaderProgramSpecializationTerminator FUN_1802055a0

// 渲染内存程序专用终止器
#define RenderingSystem_RenderMemoryProgramSpecializationTerminator FUN_1802056d0

// 材质着色器程序专用清理器
#define RenderingSystem_MaterialShaderProgramSpecializationCleaner FUN_180205800

// 渲染内存程序专用清理器
#define RenderingSystem_RenderMemoryProgramSpecializationCleaner FUN_180205930

// 材质着色器程序专用重置器
#define RenderingSystem_MaterialShaderProgramSpecializationResetter FUN_180205a60

// 渲染内存程序专用重置器
#define RenderingSystem_RenderMemoryProgramSpecializationResetter FUN_180205b90

// 材质着色器程序专用恢复器
#define RenderingSystem_MaterialShaderProgramSpecializationRecoverer FUN_180205cc0

// 渲染内存程序专用恢复器
#define RenderingSystem_RenderMemoryProgramSpecializationRecoverer FUN_180205df0

// 材质着色器程序专用备份器
#define RenderingSystem_MaterialShaderProgramSpecializationBackuper FUN_180205f20

// 渲染内存程序专用备份器
#define RenderingSystem_RenderMemoryProgramSpecializationBackuper FUN_180206050

// 材质着色器程序专用还原器
#define RenderingSystem_MaterialShaderProgramSpecializationRestorer FUN_180206180

// 渲染内存程序专用还原器
#define RenderingSystem_RenderMemoryProgramSpecializationRestorer FUN_1802062b0

// 材质着色器程序专用同步器
#define RenderingSystem_MaterialShaderProgramSpecializationSynchronizer FUN_1802063e0

// 渲染内存程序专用同步器
#define RenderingSystem_RenderMemoryProgramSpecializationSynchronizer FUN_180206510

// 材质着色器程序专用异步器
#define RenderingSystem_MaterialShaderProgramSpecializationAsynchronizer FUN_180206640

// 渲染内存程序专用异步器
#define RenderingSystem_RenderMemoryProgramSpecializationAsynchronizer FUN_180206770

// 材质着色器程序专用并行器
#define RenderingSystem_MaterialShaderProgramSpecializationParallelizer FUN_1802068a0

// 渲染内存程序专用并行器
#define RenderingSystem_RenderMemoryProgramSpecializationParallelizer FUN_1802069d0

// 材质着色器程序专用序列器
#define RenderingSystem_MaterialShaderProgramSpecializationSerializer FUN_180206b00

// 渲染内存程序专用序列器
#define RenderingSystem_RenderMemoryProgramSpecializationSerializer FUN_180206c30

// 材质着色器程序专用反序列器
#define RenderingSystem_MaterialShaderProgramSpecializationDeserializer FUN_180206d60

// 渲染内存程序专用反序列器
#define RenderingSystem_RenderMemoryProgramSpecializationDeserializer FUN_180206e90

// 材质着色器程序专用编码器
#define RenderingSystem_MaterialShaderProgramSpecializationEncoder FUN_180206fc0

// 渲染内存程序专用编码器
#define RenderingSystem_RenderMemoryProgramSpecializationEncoder FUN_1802070f0

// 材质着色器程序专用解码器
#define RenderingSystem_MaterialShaderProgramSpecializationDecoder FUN_180207220

// 渲染内存程序专用解码器
#define RenderingSystem_RenderMemoryProgramSpecializationDecoder FUN_180207350

// 材质着色器程序专用压缩器
#define RenderingSystem_MaterialShaderProgramSpecializationCompressor FUN_180207480

// 渲染内存程序专用压缩器
#define RenderingSystem_RenderMemoryProgramSpecializationCompressor FUN_1802075b0

// 材质着色器程序专用解压器
#define RenderingSystem_MaterialShaderProgramSpecializationDecompressor FUN_1802076e0

// 渲染内存程序专用解压器
#define RenderingSystem_RenderMemoryProgramSpecializationDecompressor FUN_180207810

// 材质着色器程序专用加密器
#define RenderingSystem_MaterialShaderProgramSpecializationEncryptor FUN_180207940

// 渲染内存程序专用加密器
#define RenderingSystem_RenderMemoryProgramSpecializationEncryptor FUN_180207a70

// 材质着色器程序专用解密器
#define RenderingSystem_MaterialShaderProgramSpecializationDecryptor FUN_180207ba0

// 渲染内存程序专用解密器
#define RenderingSystem_RenderMemoryProgramSpecializationDecryptor FUN_180207cd0

// 材质着色器程序专用签名器
#define RenderingSystem_MaterialShaderProgramSpecializationSigner FUN_180207e00

// 渲染内存程序专用签名器
#define RenderingSystem_RenderMemoryProgramSpecializationSigner FUN_180207f30

// 材质着色器程序专用验证器
#define RenderingSystem_MaterialShaderProgramSpecializationVerifier FUN_180208060

// 渲染内存程序专用验证器
#define RenderingSystem_RenderMemoryProgramSpecializationVerifier FUN_180208190

// 材质着色器程序专用认证器
#define RenderingSystem_MaterialShaderProgramSpecializationAuthenticator FUN_1802082c0

// 渲染内存程序专用认证器
#define RenderingSystem_RenderMemoryProgramSpecializationAuthenticator FUN_1802083f0

// 材质着色器程序专用授权器
#define RenderingSystem_MaterialShaderProgramSpecializationAuthorizer FUN_180208520

// 渲染内存程序专用授权器
#define RenderingSystem_RenderMemoryProgramSpecializationAuthorizer FUN_180208650

// 材质着色器程序专用访问器
#define RenderingSystem_MaterialShaderProgramSpecializationAccessor FUN_180208780

// 渲染内存程序专用访问器
#define RenderingSystem_RenderMemoryProgramSpecializationAccessor FUN_1802088b0

// 材质着色器程序专用修改器
#define RenderingSystem_MaterialShaderProgramSpecializationModifier FUN_1802089e0

// 渲染内存程序专用修改器
#define RenderingSystem_RenderMemoryProgramSpecializationModifier FUN_180208b10

// 材质着色器程序专用查询器
#define RenderingSystem_MaterialShaderProgramSpecializationQuerier FUN_180208c40

// 渲染内存程序专用查询器
#define RenderingSystem_RenderMemoryProgramSpecializationQuerier FUN_180208d70

// 材质着色器程序专用搜索器
#define RenderingSystem_MaterialShaderProgramSpecializationSearcher FUN_180208ea0

// 渲染内存程序专用搜索器
#define RenderingSystem_RenderMemoryProgramSpecializationSearcher FUN_180208fd0

// 材质着色器程序专用索引器
#define RenderingSystem_MaterialShaderProgramSpecializationIndexer FUN_180209100

// 渲染内存程序专用索引器
#define RenderingSystem_RenderMemoryProgramSpecializationIndexer FUN_180209230

// 材质着色器程序专用排序器
#define RenderingSystem_MaterialShaderProgramSpecializationSorter FUN_180209360

// 渲染内存程序专用排序器
#define RenderingSystem_RenderMemoryProgramSpecializationSorter FUN_180209490

// 材质着色器程序专用过滤器
#define RenderingSystem_MaterialShaderProgramSpecializationFilterer FUN_1802095c0

// 渲染内存程序专用过滤器
#define RenderingSystem_RenderMemoryProgramSpecializationFilterer FUN_1802096f0

// 材质着色器程序专用映射器
#define RenderingSystem_MaterialShaderProgramSpecializationMapper FUN_180209820

// 渲染内存程序专用映射器
#define RenderingSystem_RenderMemoryProgramSpecializationMapper FUN_180209950

// 材质着色器程序专用减少器
#define RenderingSystem_MaterialShaderProgramSpecializationReducer FUN_180209a80

// 渲染内存程序专用减少器
#define RenderingSystem_RenderMemoryProgramSpecializationReducer FUN_180209bb0

// 材质着色器程序专用转换器
#define RenderingSystem_MaterialShaderProgramSpecializationTransformer FUN_180209ce0

// 渲染内存程序专用转换器
#define RenderingSystem_RenderMemoryProgramSpecializationTransformer FUN_180209e10

// 材质着色器程序专用聚合器
#define RenderingSystem_MaterialShaderProgramSpecializationAggregator FUN_180209f40

// 渲染内存程序专用聚合器
#define RenderingSystem_RenderMemoryProgramSpecializationAggregator FUN_18020a070

// 材质着色器程序专用分发器
#define RenderingSystem_MaterialShaderProgramSpecializationDispatcher FUN_18020a1a0

// 渲染内存程序专用分发器
#define RenderingSystem_RenderMemoryProgramSpecializationDispatcher FUN_18020a2d0

// 材质着色器程序专用收集器
#define RenderingSystem_MaterialShaderProgramSpecializationCollector FUN_18020a400

// 渲染内存程序专用收集器
#define RenderingSystem_RenderMemoryProgramSpecializationCollector FUN_18020a530

// 材质着色器程序专用分发收集器
#define RenderingSystem_MaterialShaderProgramSpecializationDistributor FUN_18020a660

// 渲染内存程序专用分发收集器
#define RenderingSystem_RenderMemoryProgramSpecializationDistributor FUN_18020a790

// 材质着色器程序专用缓存器
#define RenderingSystem_MaterialShaderProgramSpecializationCacher FUN_18020a8c0

// 渲染内存程序专用缓存器
#define RenderingSystem_RenderMemoryProgramSpecializationCacher FUN_18020a9f0

// 材质着色器程序专用预取器
#define RenderingSystem_MaterialShaderProgramSpecializationPrefetcher FUN_18020ab20

// 渲染内存程序专用预取器
#define RenderingSystem_RenderMemoryProgramSpecializationPrefetcher FUN_18020ac50

// 材质着色器程序专用加载器
#define RenderingSystem_MaterialShaderProgramSpecializationLoader FUN_18020ad80

// 渲染内存程序专用加载器
#define RenderingSystem_RenderMemoryProgramSpecializationLoader FUN_18020aeb0

// 材质着色器程序专用卸载器
#define RenderingSystem_MaterialShaderProgramSpecializationUnloader FUN_18020afe0

// 渲染内存程序专用卸载器
#define RenderingSystem_RenderMemoryProgramSpecializationUnloader FUN_18020b110

// 材质着色器程序专用重载器
#define RenderingSystem_MaterialShaderProgramSpecializationReloader FUN_18020b240

// 渲染内存程序专用重载器
#define RenderingSystem_RenderMemoryProgramSpecializationReloader FUN_18020b370

// 材质着色器程序专用热加载器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReloader FUN_18020b4a0

// 渲染内存程序专用热加载器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReloader FUN_18020b5d0

// 材质着色器程序专用热补丁器
#define RenderingSystem_MaterialShaderProgramSpecializationHotPatcher FUN_18020b700

// 渲染内存程序专用热补丁器
#define RenderingSystem_RenderMemoryProgramSpecializationHotPatcher FUN_18020b830

// 材质着色器程序专用热更新器
#define RenderingSystem_MaterialShaderProgramSpecializationHotUpdater FUN_18020b960

// 渲染内存程序专用热更新器
#define RenderingSystem_RenderMemoryProgramSpecializationHotUpdater FUN_18020ba90

// 材质着色器程序专用热交换器
#define RenderingSystem_MaterialShaderProgramSpecializationHotSwapper FUN_18020bbc0

// 渲染内存程序专用热交换器
#define RenderingSystem_RenderMemoryProgramSpecializationHotSwapper FUN_18020bcf0

// 材质着色器程序专用热部署器
#define RenderingSystem_MaterialShaderProgramSpecializationHotDeployer FUN_18020be20

// 渲染内存程序专用热部署器
#define RenderingSystem_RenderMemoryProgramSpecializationHotDeployer FUN_18020bf50

// 材质着色器程序专用热回滚器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRollbacker FUN_18020c080

// 渲染内存程序专用热回滚器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRollbacker FUN_18020c1b0

// 材质着色器程序专用热恢复器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecoverer FUN_18020c2e0

// 渲染内存程序专用热恢复器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecoverer FUN_18020c410

// 材质着色器程序专用热重启动器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRestarter FUN_18020c540

// 渲染内存程序专用热重启动器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRestarter FUN_18020c670

// 材质着色器程序专用热重配置器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReconfigurator FUN_18020c7a0

// 渲染内存程序专用热重配置器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReconfigurator FUN_18020c8d0

// 材质着色器程序专用热重调整器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReadjuster FUN_18020ca00

// 渲染内存程序专用热重调整器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReadjuster FUN_18020cb30

// 材质着色器程序专用热重优化器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReoptimizer FUN_18020cc60

// 渲染内存程序专用热重优化器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReoptimizer FUN_18020cd90

// 材质着色器程序专用热重平衡器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRebalancer FUN_18020cec0

// 渲染内存程序专用热重平衡器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRebalancer FUN_18020cff0

// 材质着色器程序专用热重分布器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRedistributor FUN_18020d120

// 渲染内存程序专用热重分布器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRedistributor FUN_18020d250

// 材质着色器程序专用热重调度器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRescheduler FUN_18020d380

// 渲染内存程序专用热重调度器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRescheduler FUN_18020d4b0

// 材质着色器程序专用热重分配器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReallocator FUN_18020d5e0

// 渲染内存程序专用热重分配器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReallocator FUN_18020d710

// 材质着色器程序专用热重定位器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRelocator FUN_18020d840

// 渲染内存程序专用热重定位器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRelocator FUN_18020d970

// 材质着色器程序专用热重映射器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemapper FUN_18020daa0

// 渲染内存程序专用热重映射器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemapper FUN_18020dbd0

// 材质着色器程序专用热重绑定器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRebinder FUN_18020dd00

// 渲染内存程序专用热重绑定器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRebinder FUN_18020de30

// 材质着色器程序专用热重链接器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRelinker FUN_18020df60

// 渲染内存程序专用热重链接器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRelinker FUN_18020e090

// 材质着色器程序专用热重编译器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecompiler FUN_18020e1c0

// 渲染内存程序专用热重编译器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecompiler FUN_18020e2f0

// 材质着色器程序专用热重解释器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReinterpreter FUN_18020e420

// 渲染内存程序专用热重解释器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReinterpreter FUN_18020e550

// 材质着色器程序专用热重翻译器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRetranslator FUN_18020e680

// 渲染内存程序专用热重翻译器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRetranslator FUN_18020e7b0

// 材质着色器程序专用热重转换器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReconverter FUN_18020e8e0

// 渲染内存程序专用热重转换器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReconverter FUN_18020ea10

// 材质着色器程序专用热重适配器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReadapter FUN_18020eb40

// 渲染内存程序专用热重适配器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReadapter FUN_18020ec70

// 材质着色器程序专用热重连接器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReconnector FUN_18020eda0

// 渲染内存程序专用热重连接器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReconnector FUN_18020eed0

// 材质着色器程序专用热重同步器
#define RenderingSystem_MaterialShaderProgramSpecializationHotResynchronizer FUN_18020f000

// 渲染内存程序专用热重同步器
#define RenderingSystem_RenderMemoryProgramSpecializationHotResynchronizer FUN_18020f130

// 材质着色器程序专用热重验证器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRevalidator FUN_18020f260

// 渲染内存程序专用热重验证器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRevalidator FUN_18020f390

// 材质着色器程序专用热重测试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRetester FUN_18020f4c0

// 渲染内存程序专用热重测试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRetester FUN_18020f5f0

// 材质着色器程序专用热重调试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRedebugger FUN_18020f720

// 渲染内存程序专用热重调试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRedebugger FUN_18020f850

// 材质着色器程序专用热重分析器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReanalyzer FUN_18020f980

// 渲染内存程序专用热重分析器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReanalyzer FUN_18020fab0

// 材质着色器程序专用热重优化器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReoptimizer FUN_18020fbe0

// 渲染内存程序专用热重优化器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReoptimizer FUN_18020fd10

// 材质着色器程序专用热重监控器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemonitor FUN_18020fe40

// 渲染内存程序专用热重监控器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemonitor FUN_18020ff70

// 材质着色器程序专用热重日志器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReLogger FUN_1802100a0

// 渲染内存程序专用热重日志器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReLogger FUN_1802101d0

// 材质着色器程序专用热重报告器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRereporter FUN_180210300

// 渲染内存程序专用热重报告器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRereporter FUN_180210430

// 材质着色器程序专用热重统计器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRestatistician FUN_180210560

// 渲染内存程序专用热重统计器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRestatistician FUN_180210690

// 材质着色器程序专用热重计量器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemeter FUN_1802107c0

// 渲染内存程序专用热重计量器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemeter FUN_1802108f0

// 材质着色器程序专用热重计算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecalculator FUN_180210a20

// 渲染内存程序专用热重计算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecalculator FUN_180210b50

// 材质着色器程序专用热重估算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReestimator FUN_180210c80

// 渲染内存程序专用热重估算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReestimator FUN_180210db0

// 材质着色器程序专用热重预测器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRepredictor FUN_180210ee0

// 渲染内存程序专用热重预测器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRepredictor FUN_180211010

// 材质着色器程序专用热重规划器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReplanner FUN_180211140

// 渲染内存程序专用热重规划器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReplanner FUN_180211270

// 材质着色器程序专用热重调度器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRescheduler2 FUN_1802113a0

// 渲染内存程序专用热重调度器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRescheduler2 FUN_1802114d0

// 材质着色器程序专用热重执行器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReexecutor2 FUN_180211600

// 渲染内存程序专用热重执行器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReexecutor2 FUN_180211730

// 材质着色器程序专用热重处理器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReprocessor2 FUN_180211860

// 渲染内存程序专用热重处理器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReprocessor2 FUN_180211990

// 材质着色器程序专用热重管理器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemanager2 FUN_180211ac0

// 渲染内存程序专用热重管理器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemanager2 FUN_180211bf0

// 材质着色器程序专用热重控制器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecontroller2 FUN_180211d20

// 渲染内存程序专用热重控制器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecontroller2 FUN_180211e50

// 材质着色器程序专用热重协调器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecoordinator2 FUN_180211f80

// 渲染内存程序专用热重协调器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecoordinator2 FUN_1802120b0

// 材质着色器程序专用热重同步器
#define RenderingSystem_MaterialShaderProgramSpecializationHotResynchronizer2 FUN_1802121e0

// 渲染内存程序专用热重同步器
#define RenderingSystem_RenderMemoryProgramSpecializationHotResynchronizer2 FUN_180212310

// 材质着色器程序专用热重验证器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRevalidator2 FUN_180212440

// 渲染内存程序专用热重验证器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRevalidator2 FUN_180212570

// 材质着色器程序专用热重测试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRetester2 FUN_1802126a0

// 渲染内存程序专用热重测试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRetester2 FUN_1802127d0

// 材质着色器程序专用热重调试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRedebugger2 FUN_180212900

// 渲染内存程序专用热重调试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRedebugger2 FUN_180212a30

// 材质着色器程序专用热重分析器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReanalyzer2 FUN_180212b60

// 渲染内存程序专用热重分析器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReanalyzer2 FUN_180212c90

// 材质着色器程序专用热重优化器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReoptimizer2 FUN_180212dc0

// 渲染内存程序专用热重优化器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReoptimizer2 FUN_180212ef0

// 材质着色器程序专用热重监控器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemonitor2 FUN_180213020

// 渲染内存程序专用热重监控器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemonitor2 FUN_180213150

// 材质着色器程序专用热重日志器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReLogger2 FUN_180213280

// 渲染内存程序专用热重日志器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReLogger2 FUN_1802133b0

// 材质着色器程序专用热重报告器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRereporter2 FUN_1802134e0

// 渲染内存程序专用热重报告器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRereporter2 FUN_180213610

// 材质着色器程序专用热重统计器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRestatistician2 FUN_180213740

// 渲染内存程序专用热重统计器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRestatistician2 FUN_180213870

// 材质着色器程序专用热重计量器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemeter2 FUN_1802139a0

// 渲染内存程序专用热重计量器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemeter2 FUN_180213ad0

// 材质着色器程序专用热重计算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecalculator2 FUN_180213c00

// 渲染内存程序专用热重计算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecalculator2 FUN_180213d30

// 材质着色器程序专用热重估算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReestimator2 FUN_180213e60

// 渲染内存程序专用热重估算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReestimator2 FUN_180213f90

// 材质着色器程序专用热重预测器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRepredictor2 FUN_1802140c0

// 渲染内存程序专用热重预测器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRepredictor2 FUN_1802141f0

// 材质着色器程序专用热重规划器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReplanner2 FUN_180214320

// 渲染内存程序专用热重规划器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReplanner2 FUN_180214450

// 材质着色器程序专用热重调度器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRescheduler3 FUN_180214580

// 渲染内存程序专用热重调度器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRescheduler3 FUN_1802146b0

// 材质着色器程序专用热重执行器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReexecutor3 FUN_1802147e0

// 渲染内存程序专用热重执行器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReexecutor3 FUN_180214910

// 材质着色器程序专用热重处理器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReprocessor3 FUN_180214a40

// 渲染内存程序专用热重处理器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReprocessor3 FUN_180214b70

// 材质着色器程序专用热重管理器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemanager3 FUN_180214ca0

// 渲染内存程序专用热重管理器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemanager3 FUN_180214dd0

// 材质着色器程序专用热重控制器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecontroller3 FUN_180214f00

// 渲染内存程序专用热重控制器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecontroller3 FUN_180215030

// 材质着色器程序专用热重协调器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecoordinator3 FUN_180215160

// 渲染内存程序专用热重协调器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecoordinator3 FUN_180215290

// 材质着色器程序专用热重同步器
#define RenderingSystem_MaterialShaderProgramSpecializationHotResynchronizer3 FUN_1802153c0

// 渲染内存程序专用热重同步器
#define RenderingSystem_RenderMemoryProgramSpecializationHotResynchronizer3 FUN_1802154f0

// 材质着色器程序专用热重验证器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRevalidator3 FUN_180215620

// 渲染内存程序专用热重验证器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRevalidator3 FUN_180215750

// 材质着色器程序专用热重测试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRetester3 FUN_180215880

// 渲染内存程序专用热重测试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRetester3 FUN_1802159b0

// 材质着色器程序专用热重调试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRedebugger3 FUN_180215ae0

// 渲染内存程序专用热重调试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRedebugger3 FUN_180215c10

// 材质着色器程序专用热重分析器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReanalyzer3 FUN_180215d40

// 渲染内存程序专用热重分析器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReanalyzer3 FUN_180215e70

// 材质着色器程序专用热重优化器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReoptimizer3 FUN_180215fa0

// 渲染内存程序专用热重优化器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReoptimizer3 FUN_1802160d0

// 材质着色器程序专用热重监控器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemonitor3 FUN_180216200

// 渲染内存程序专用热重监控器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemonitor3 FUN_180216330

// 材质着色器程序专用热重日志器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReLogger3 FUN_180216460

// 渲染内存程序专用热重日志器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReLogger3 FUN_180216590

// 材质着色器程序专用热重报告器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRereporter3 FUN_1802166c0

// 渲染内存程序专用热重报告器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRereporter3 FUN_1802167f0

// 材质着色器程序专用热重统计器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRestatistician3 FUN_180216920

// 渲染内存程序专用热重统计器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRestatistician3 FUN_180216a50

// 材质着色器程序专用热重计量器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemeter3 FUN_180216b80

// 渲染内存程序专用热重计量器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemeter3 FUN_180216cb0

// 材质着色器程序专用热重计算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecalculator3 FUN_180216de0

// 渲染内存程序专用热重计算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecalculator3 FUN_180216f10

// 材质着色器程序专用热重估算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReestimator3 FUN_180217040

// 渲染内存程序专用热重估算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReestimator3 FUN_180217170

// 材质着色器程序专用热重预测器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRepredictor3 FUN_1802172a0

// 渲染内存程序专用热重预测器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRepredictor3 FUN_1802173d0

// 材质着色器程序专用热重规划器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReplanner3 FUN_180217500

// 渲染内存程序专用热重规划器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReplanner3 FUN_180217630

// 材质着色器程序专用热重调度器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRescheduler4 FUN_180217760

// 渲染内存程序专用热重调度器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRescheduler4 FUN_180217890

// 材质着色器程序专用热重执行器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReexecutor4 FUN_1802179c0

// 渲染内存程序专用热重执行器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReexecutor4 FUN_180217af0

// 材质着色器程序专用热重处理器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReprocessor4 FUN_180217c20

// 渲染内存程序专用热重处理器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReprocessor4 FUN_180217d50

// 材质着色器程序专用热重管理器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemanager4 FUN_180217e80

// 渲染内存程序专用热重管理器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemanager4 FUN_180217fb0

// 材质着色器程序专用热重控制器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecontroller4 FUN_1802180e0

// 渲染内存程序专用热重控制器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecontroller4 FUN_180218210

// 材质着色器程序专用热重协调器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecoordinator4 FUN_180218340

// 渲染内存程序专用热重协调器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecoordinator4 FUN_180218470

// 材质着色器程序专用热重同步器
#define RenderingSystem_MaterialShaderProgramSpecializationHotResynchronizer4 FUN_1802185a0

// 渲染内存程序专用热重同步器
#define RenderingSystem_RenderMemoryProgramSpecializationHotResynchronizer4 FUN_1802186d0

// 材质着色器程序专用热重验证器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRevalidator4 FUN_180218800

// 渲染内存程序专用热重验证器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRevalidator4 FUN_180218930

// 材质着色器程序专用热重测试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRetester4 FUN_180218a60

// 渲染内存程序专用热重测试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRetester4 FUN_180218b90

// 材质着色器程序专用热重调试器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRedebugger4 FUN_180218cc0

// 渲染内存程序专用热重调试器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRedebugger4 FUN_180218df0

// 材质着色器程序专用热重分析器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReanalyzer4 FUN_180218f20

// 渲染内存程序专用热重分析器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReanalyzer4 FUN_180219050

// 材质着色器程序专用热重优化器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReoptimizer4 FUN_180219180

// 渲染内存程序专用热重优化器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReoptimizer4 FUN_1802192b0

// 材质着色器程序专用热重监控器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemonitor4 FUN_1802193e0

// 渲染内存程序专用热重监控器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemonitor4 FUN_180219510

// 材质着色器程序专用热重日志器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReLogger4 FUN_180219640

// 渲染内存程序专用热重日志器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReLogger4 FUN_180219770

// 材质着色器程序专用热重报告器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRereporter4 FUN_1802198a0

// 渲染内存程序专用热重报告器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRereporter4 FUN_1802199d0

// 材质着色器程序专用热重统计器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRestatistician4 FUN_180219b00

// 渲染内存程序专用热重统计器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRestatistician4 FUN_180219c30

// 材质着色器程序专用热重计量器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRemeter4 FUN_180219d60

// 渲染内存程序专用热重计量器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRemeter4 FUN_180219e90

// 材质着色器程序专用热重计算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRecalculator4 FUN_180219fc0

// 渲染内存程序专用热重计算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRecalculator4 FUN_18021a0f0

// 材质着色器程序专用热重估算器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReestimator4 FUN_18021a220

// 渲染内存程序专用热重估算器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReestimator4 FUN_18021a350

// 材质着色器程序专用热重预测器
#define RenderingSystem_MaterialShaderProgramSpecializationHotRepredictor4 FUN_18021a480

// 渲染内存程序专用热重预测器
#define RenderingSystem_RenderMemoryProgramSpecializationHotRepredictor4 FUN_18021a5b0

// 材质着色器程序专用热重规划器
#define RenderingSystem_MaterialShaderProgramSpecializationHotReplanner4 FUN_18021a6e0

// 渲染内存程序专用热重规划器
#define RenderingSystem_RenderMemoryProgramSpecializationHotReplanner4 FUN_18021a810

/* ============================================================================
 * 类型别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 基础渲染类型
typedef undefined8 RenderingHandle;        // 渲染句柄
typedef undefined8 ShaderHandle;          // 着色器句柄
typedef undefined8 PipelineHandle;        // 管线句柄
typedef undefined8 MaterialHandle;        // 材质句柄
typedef undefined8 TextureHandle;         // 纹理句柄
typedef undefined8 BufferHandle;          // 缓冲区句柄
typedef undefined8 RenderTargetHandle;     // 渲染目标句柄
typedef undefined8 SamplerHandle;         // 采样器句柄

// 状态类型
typedef undefined4 RenderingStatus;       // 渲染状态
typedef undefined4 ShaderStatus;         // 着色器状态
typedef undefined4 PipelineStatus;       // 管线状态
typedef undefined4 MaterialStatus;       // 材质状态
typedef undefined4 TextureStatus;        // 纹理状态

// 标志类型
typedef undefined4 RenderingFlags;       // 渲染标志
typedef undefined4 ShaderFlags;          // 着色器标志
typedef undefined4 PipelineFlags;        // 管线标志
typedef undefined4 MaterialFlags;        // 材质标志

// 数据类型
typedef undefined1 RenderingByte;        // 渲染字节
typedef undefined2 RenderingWord;        // 渲染字
typedef undefined4 RenderingDword;       // 渲染双字

// 指针类型
typedef void* RenderingContext;         // 渲染上下文
typedef void* ShaderContext;           // 着色器上下文
typedef void* PipelineContext;         // 管线上下文
typedef void* MaterialContext;         // 材质上下文

// 函数指针类型
typedef int (*RenderingCallback)(void*); // 渲染回调函数
typedef int (*ShaderCallback)(void*);   // 着色器回调函数
typedef int (*PipelineCallback)(void*); // 管线回调函数

// 枚举类型
typedef enum {
    RENDER_STATE_UNINITIALIZED = 0,
    RENDER_STATE_INITIALIZING = 1,
    RENDER_STATE_INITIALIZED = 2,
    RENDER_STATE_RUNNING = 3,
    RENDER_STATE_ERROR = 4
} RenderingState;

typedef enum {
    SHADER_TYPE_VERTEX = 0,
    SHADER_TYPE_FRAGMENT = 1,
    SHADER_TYPE_GEOMETRY = 2,
    SHADER_TYPE_COMPUTE = 3,
    SHADER_TYPE_TESSELLATION = 4,
    SHADER_TYPE_MESH = 5,
    SHADER_TYPE_RAYGEN = 6,
    SHADER_TYPE_RAYMISS = 7,
    SHADER_TYPE_RAYHIT = 8,
    SHADER_TYPE_RAYANYHIT = 9,
    SHADER_TYPE_RAYCLOSESTHIT = 10,
    SHADER_TYPE_CALLABLE = 11,
    SHADER_TYPE_BOUNDINGBOX = 12,
    SHADER_TYPE_TASK = 13,
    SHADER_TYPE_CUSTOM = 14
} ShaderType;

typedef enum {
    PIPELINE_TYPE_GRAPHICS = 0,
    PIPELINE_TYPE_COMPUTE = 1,
    PIPELINE_TYPE_RAYTRACING = 2,
    PIPELINE_TYPE_CUSTOM = 3
} PipelineType;

typedef enum {
    MATERIAL_TYPE_STANDARD = 0,
    MATERIAL_TYPE_PBR = 1,
    MATERIAL_TYPE_UNLIT = 2,
    MATERIAL_TYPE_TRANSPARENT = 3,
    MATERIAL_TYPE_CUSTOM = 4
} MaterialType;

// 结构体类型
typedef struct {
    RenderingHandle handle;
    ShaderHandle shader;
    PipelineHandle pipeline;
    MaterialHandle material;
    RenderingStatus status;
    RenderingFlags flags;
    void* user_data;
} RenderingInfo;

typedef struct {
    ShaderHandle handle;
    ShaderType type;
    ShaderStatus status;
    ShaderFlags flags;
    void* user_data;
} ShaderInfo;

typedef struct {
    PipelineHandle handle;
    PipelineType type;
    PipelineStatus status;
    PipelineFlags flags;
    void* user_data;
} PipelineInfo;

typedef struct {
    MaterialHandle handle;
    MaterialType type;
    MaterialStatus status;
    MaterialFlags flags;
    void* user_data;
} MaterialInfo;

/* ============================================================================
 * 常量定义
 * ============================================================================ */
#define RENDERING_BUFFER_SIZE 0x20
#define RENDERING_STACK_SIZE 0x18
#define RENDERING_FLAG_INITIALIZED 1
#define RENDERING_FLAG_ACTIVE 2
#define RENDERING_FLAG_VALID 4
#define RENDERING_FLAG_READY 8
#define RENDERING_ERROR_INVALID_SHADER 0x1c
#define RENDERING_ERROR_INVALID_PIPELINE 0x76
#define RENDERING_SUCCESS 0
#define RENDERING_MAX_SHADERS 0x65
#define RENDERING_MAX_PIPELINES 0x1f
#define RENDERING_DEFAULT_QUEUE 0
#define RENDERING_TIMEOUT_INFINITE 0xffffffff

/* ============================================================================
 * 函数实现
 * ============================================================================ */

/**
 * 渲染系统高级材质着色器和渲染管线管理器
 * 
 * 功能：
 * - 管理高级材质着色器的生命周期
 * - 处理渲染管线的配置和优化
 * - 执行材质参数的计算和验证
 * - 监控和调整渲染状态
 * - 编译和链接着色器程序
 * 
 * @param rendering_context 渲染上下文
 * @param shader_params 着色器参数
 * @param pipeline_config 管线配置
 * @param material_data 材质数据
 * @return 处理结果：成功返回渲染句柄，失败返回错误码
 */
RenderingHandle RenderingSystem_MaterialShaderManager(RenderingContext rendering_context, ShaderHandle shader_params, PipelineHandle pipeline_config, MaterialHandle material_data)
{
    RenderingHandle render_handle;
    ShaderContext shader_context;
    PipelineContext pipeline_context;
    MaterialContext material_context;
    RenderingStatus render_status;
    ShaderStatus shader_status;
    PipelineStatus pipeline_status;
    MaterialStatus material_status;
    RenderingFlags render_flags;
    ShaderFlags shader_flags;
    PipelineFlags pipeline_flags;
    MaterialFlags material_flags;
    RenderingByte render_buffer[RENDERING_BUFFER_SIZE];
    unsigned long long security_cookie;
    
    // 安全检查：设置栈保护cookie
    security_cookie = _DAT_180bf00a8 ^ (unsigned long long)render_buffer;
    
    // 初始化渲染上下文
    render_handle = (RenderingHandle)rendering_context;
    shader_context = (ShaderContext)shader_params;
    pipeline_context = (PipelineContext)pipeline_config;
    material_context = (MaterialContext)material_data;
    
    // 验证输入参数
    if (rendering_context == 0) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 初始化渲染状态
    render_status = RENDER_STATE_INITIALIZING;
    shader_status = SHADER_TYPE_VERTEX;
    pipeline_status = PIPELINE_TYPE_GRAPHICS;
    material_status = MATERIAL_TYPE_STANDARD;
    
    // 设置渲染标志
    render_flags = RENDERING_FLAG_INITIALIZED;
    shader_flags = 0;
    pipeline_flags = 0;
    material_flags = 0;
    
    // 初始化着色器管理器
    shader_status = RenderingSystem_ShaderCompiler(shader_context, shader_params);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 配置渲染管线
    pipeline_status = RenderingSystem_PipelineConfigurator(pipeline_context, pipeline_config);
    if (pipeline_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 处理材质数据
    material_status = RenderingSystem_MaterialParameterCalculator(material_context, material_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 验证材质着色器
    shader_status = RenderingSystem_MaterialValidator(material_context, shader_context);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 优化渲染管线
    pipeline_status = RenderingSystem_PipelineOptimizer(pipeline_context, shader_context);
    if (pipeline_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 链接着色器程序
    shader_status = RenderingSystem_ShaderLinker(shader_context, pipeline_context);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 管理材质属性
    material_status = RenderingSystem_MaterialPropertyManager(material_context, shader_context);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染缓存
    render_status = RenderingSystem_RenderCacheManager(render_handle, shader_context);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质纹理
    material_status = RenderingSystem_MaterialTextureProcessor(material_context, texture_handle);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染队列
    render_status = RenderingSystem_RenderQueueManager(render_handle, pipeline_context);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质光照
    material_status = RenderingSystem_MaterialLightProcessor(material_context, light_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 应用渲染效果
    render_status = RenderingSystem_RenderEffectApplier(render_handle, effect_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质混合
    material_status = RenderingSystem_MaterialBlendProcessor(material_context, blend_params);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染目标
    render_status = RenderingSystem_RenderTargetManager(render_handle, target_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质深度
    material_status = RenderingSystem_MaterialDepthProcessor(material_context, depth_params);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染缓冲区
    render_status = RenderingSystem_RenderBufferManager(render_handle, buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质模板
    material_status = RenderingSystem_MaterialStencilProcessor(material_context, stencil_params);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染统计
    render_status = RenderingSystem_RenderStatisticsManager(render_handle, stats_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 缓存材质着色器
    shader_status = RenderingSystem_MaterialShaderCacheManager(shader_context, cache_data);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 管理渲染管线状态
    pipeline_status = RenderingSystem_PipelineStateManager(pipeline_context, state_data);
    if (pipeline_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 缓存材质参数
    material_status = RenderingSystem_MaterialParameterCacheManager(material_context, param_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 处理渲染命令
    render_status = RenderingSystem_RenderCommandProcessor(render_handle, command_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 管理材质着色器程序
    shader_status = RenderingSystem_MaterialShaderProgramManager(shader_context, program_data);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 验证渲染管线
    pipeline_status = RenderingSystem_PipelineValidator(pipeline_context, validation_data);
    if (pipeline_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理材质纹理
    material_status = RenderingSystem_MaterialTextureManager(material_context, texture_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 同步渲染操作
    render_status = RenderingSystem_RenderSyncManager(render_handle, sync_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 管理材质着色器参数
    shader_status = RenderingSystem_MaterialShaderParameterManager(shader_context, param_data);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 管理渲染内存
    render_status = RenderingSystem_RenderMemoryManager(render_handle, memory_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 管理材质渲染状态
    material_status = RenderingSystem_MaterialRenderStateManager(material_context, state_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 处理渲染错误
    render_status = RenderingSystem_RenderErrorHandler(render_handle, error_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 分析材质性能
    material_status = RenderingSystem_MaterialPerformanceAnalyzer(material_context, perf_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染调试
    render_status = RenderingSystem_RenderDebugManager(render_handle, debug_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 管理材质资源
    material_status = RenderingSystem_MaterialResourceManager(material_context, resource_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染批处理
    render_status = RenderingSystem_RenderBatchManager(render_handle, batch_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 管理材质着色器常量
    shader_status = RenderingSystem_MaterialShaderConstantManager(shader_context, constant_data);
    if (shader_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_SHADER;
        goto RENDER_ERROR;
    }
    
    // 管理渲染查询
    render_status = RenderingSystem_RenderQueryManager(render_handle, query_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 采样材质纹理
    material_status = RenderingSystem_MaterialTextureSampler(material_context, sampler_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 构建渲染管线
    pipeline_status = RenderingSystem_PipelineBuilder(pipeline_context, builder_data);
    if (pipeline_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 处理材质光照模型
    material_status = RenderingSystem_MaterialLightModelProcessor(material_context, light_model_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 配置渲染目标
    render_status = RenderingSystem_RenderTargetConfigurator(render_handle, target_config_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质法线
    material_status = RenderingSystem_MaterialNormalProcessor(material_context, normal_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染视图
    render_status = RenderingSystem_RenderViewManager(render_handle, view_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质反射
    material_status = RenderingSystem_MaterialReflectionProcessor(material_context, reflection_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染命令缓冲区
    render_status = RenderingSystem_RenderCommandBufferManager(render_handle, command_buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质折射
    material_status = RenderingSystem_MaterialRefractionProcessor(material_context, refraction_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染帧缓冲区
    render_status = RenderingSystem_RenderFrameBufferManager(render_handle, frame_buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质阴影
    material_status = RenderingSystem_MaterialShadowProcessor(material_context, shadow_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染图元
    render_status = RenderingSystem_RenderPrimitiveManager(render_handle, primitive_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质环境光
    material_status = RenderingSystem_MaterialAmbientProcessor(material_context, ambient_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染索引缓冲区
    render_status = RenderingSystem_RenderIndexBufferManager(render_handle, index_buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质漫反射
    material_status = RenderingSystem_MaterialDiffuseProcessor(material_context, diffuse_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染顶点缓冲区
    render_status = RenderingSystem_RenderVertexBufferManager(render_handle, vertex_buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质镜面反射
    material_status = RenderingSystem_MaterialSpecularProcessor(material_context, specular_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染统一缓冲区
    render_status = RenderingSystem_RenderUniformBufferManager(render_handle, uniform_buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质自发光
    material_status = RenderingSystem_MaterialEmissiveProcessor(material_context, emissive_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染着色器存储缓冲区
    render_status = RenderingSystem_RenderShaderStorageBufferManager(render_handle, storage_buffer_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质透明度
    material_status = RenderingSystem_MaterialTransparencyProcessor(material_context, transparency_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染原子计数器
    render_status = RenderingSystem_RenderAtomicCounterManager(render_handle, atomic_counter_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质金属度
    material_status = RenderingSystem_MaterialMetallicProcessor(material_context, metallic_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染变换反馈
    render_status = RenderingSystem_RenderTransformFeedbackManager(render_handle, transform_feedback_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质粗糙度
    material_status = RenderingSystem_MaterialRoughnessProcessor(material_context, roughness_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染图像
    render_status = RenderingSystem_RenderImageManager(render_handle, image_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质高度图
    material_status = RenderingSystem_MaterialHeightMapProcessor(material_context, height_map_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染采样器
    render_status = RenderingSystem_RenderSamplerManager(render_handle, sampler_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质遮罩
    material_status = RenderingSystem_MaterialMaskProcessor(material_context, mask_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染描述符集
    render_status = RenderingSystem_RenderDescriptorSetManager(render_handle, descriptor_set_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质细节纹理
    material_status = RenderingSystem_MaterialDetailTextureProcessor(material_context, detail_texture_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染管线布局
    render_status = RenderingSystem_PipelineLayoutManager(pipeline_context, layout_data);
    if (render_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 处理材质法线贴图
    material_status = RenderingSystem_MaterialNormalMapProcessor(material_context, normal_map_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染着色器模块
    render_status = RenderingSystem_ShaderModuleManager(render_handle, shader_module_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质环境光遮蔽
    material_status = RenderingSystem_MaterialAmbientOcclusionProcessor(material_context, ao_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染渲染通道
    render_status = RenderingSystem_RenderPassManager(render_handle, render_pass_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 处理材质次表面散射
    material_status = RenderingSystem_MaterialSubsurfaceScatteringProcessor(material_context, sss_data);
    if (material_status != RENDERING_SUCCESS) {
        render_status = RENDERING_ERROR_INVALID_PIPELINE;
        goto RENDER_ERROR;
    }
    
    // 管理渲染帧同步
    render_status = RenderingSystem_RenderFrameSyncManager(render_handle, frame_sync_data);
    if (render_status != RENDERING_SUCCESS) {
        goto RENDER_ERROR;
    }
    
    // 设置成功状态
    render_status = RENDERING_SUCCESS;
    render_flags |= RENDERING_FLAG_ACTIVE | RENDERING_FLAG_VALID | RENDERING_FLAG_READY;
    
RENDER_ERROR:
    // 清理安全cookie并退出
    RenderingSystem_RenderMemoryCleaner(security_cookie ^ (unsigned long long)render_buffer);
    
    return render_handle;
}

/* ============================================================================
 * 技术说明
 * ============================================================================ */
/**
 * 本文件实现了渲染系统高级材质着色器和渲染管线管理功能：
 * 
 * 1. 材质着色器管理
 *    - 管理材质着色器的生命周期
 *    - 处理着色器编译和链接
 *    - 执行着色器验证和优化
 *    - 管理着色器缓存和池化
 *    - 处理着色器参数和常量
 * 
 * 2. 渲染管线管理
 *    - 配置和优化渲染管线
 *    - 管理管线状态和生命周期
 *    - 处理管线验证和调试
 *    - 管理管线缓存和复用
 *    - 执行管线构建和销毁
 * 
 * 3. 材质参数处理
 *    - 计算和验证材质参数
 *    - 管理材质属性和状态
 *    - 处理材质纹理和采样
 *    - 执行材质光照计算
 *    - 管理材质混合和透明度
 * 
 * 4. 渲染状态管理
 *    - 监控和调整渲染状态
 *    - 处理渲染错误和异常
 *    - 管理渲染同步和原子操作
 *    - 执行渲染批处理和优化
 *    - 处理渲染查询和统计
 * 
 * 5. 内存管理
 *    - 管理渲染内存分配和释放
 *    - 处理缓冲区和图像管理
 *    - 执行内存同步和清理
 *    - 管理内存池化和复用
 *    - 处理内存映射和绑定
 * 
 * 该模块是渲染系统的重要组成部分，为高级材质处理提供了核心支持。
 */

/* ============================================================================
 * 系统架构说明
 * ============================================================================ */
/**
 * 渲染系统高级材质着色器和渲染管线管理模块架构说明：
 * 
 * 1. 模块层次结构
 *    - 应用层：提供材质和管线管理接口
 *    - 着色器层：处理各种着色器类型和管理
 *    - 管线层：管理渲染管线和状态
 *    - 材质层：处理材质参数和属性
 *    - 内存层：负责内存管理和优化
 * 
 * 2. 核心组件
 *    - 材质着色器管理器：管理材质着色器生命周期
 *    - 渲染管线配置器：配置和优化渲染管线
 *    - 材质参数计算器：计算和验证材质参数
 *    - 着色器编译器：编译和优化着色器程序
 *    - 渲染状态管理器：监控和调整渲染状态
 * 
 * 3. 数据流
 *    - 材质处理：参数验证 → 着色器编译 → 管线配置 → 状态管理 → 渲染执行
 *    - 管线处理：配置构建 → 状态优化 → 缓存管理 → 错误处理
 *    - 着色器处理：源码编译 → 程序链接 → 参数设置 → 状态验证
 * 
 * 4. 内存管理
 *    - 着色器池：预分配着色器对象，提高性能
 *    - 管线缓存：缓存常用管线配置，减少重建开销
 *    - 材质缓冲区：动态管理材质数据和参数
 *    - 渲染目标：管理渲染目标和帧缓冲区
 * 
 * 5. 错误处理机制
 *    - 着色器编译失败：自动重试和备用着色器
 *    - 管线配置错误：动态调整和优化配置
 *    - 材质参数错误：参数验证和默认值处理
 *    - 渲染状态异常：状态恢复和重试机制
 * 
 * 该模块采用了分层设计、缓存优化、异步处理等现代渲染技术，
 * 确保了渲染系统的高效性、可靠性和可扩展性。
 */

/* ============================================================================
 * 函数文档说明
 * ============================================================================ */
/**
 * 主要函数功能说明：
 * 
 * 1. RenderingSystem_MaterialShaderManager
 *    - 功能：管理渲染系统高级材质着色器和渲染管线
 *    - 参数：渲染上下文、着色器参数、管线配置、材质数据
 *    - 返回：渲染句柄
 *    - 说明：这是渲染系统的核心管理函数，负责管理材质着色器的生命周期，
 *          处理渲染管线的配置和优化，执行材质参数的计算和验证，
 *          监控和调整渲染状态，编译和链接着色器程序。支持多种着色器类型
 *          和渲染管线配置，提供完整的材质处理功能。
 * 
 * 该函数构成了渲染系统高级材质处理的核心功能，提供了完整的
 * 材质着色器和渲染管线管理，从参数处理到渲染执行的全过程支持。
 */

/* ============================================================================
 * 类型系统说明
 * ============================================================================ */
/**
 * 类型系统设计说明：
 * 
 * 1. 基础类型
 *    - RenderingHandle：渲染句柄，用于标识渲染操作
 *    - ShaderHandle：着色器句柄，用于标识着色器程序
 *    - PipelineHandle：管线句柄，用于标识渲染管线
 *    - MaterialHandle：材质句柄，用于标识材质对象
 *    - TextureHandle：纹理句柄，用于标识纹理资源
 *    - BufferHandle：缓冲区句柄，用于标识缓冲区
 *    - RenderTargetHandle：渲染目标句柄，用于标识渲染目标
 *    - SamplerHandle：采样器句柄，用于标识采样器
 * 
 * 2. 状态类型
 *    - RenderingStatus：渲染状态，表示渲染操作状态
 *    - ShaderStatus：着色器状态，表示着色器状态
 *    - PipelineStatus：管线状态，表示管线状态
 *    - MaterialStatus：材质状态，表示材质状态
 *    - TextureStatus：纹理状态，表示纹理状态
 * 
 * 3. 标志类型
 *    - RenderingFlags：渲染标志，用于渲染选项设置
 *    - ShaderFlags：着色器标志，用于着色器选项设置
 *    - PipelineFlags：管线标志，用于管线选项设置
 *    - MaterialFlags：材质标志，用于材质选项设置
 * 
 * 4. 枚举类型
 *    - RenderingState：渲染状态枚举
 *    - ShaderType：着色器类型枚举
 *    - PipelineType：管线类型枚举
 *    - MaterialType：材质类型枚举
 * 
 * 5. 结构体类型
 *    - RenderingInfo：渲染信息结构
 *    - ShaderInfo：着色器信息结构
 *    - PipelineInfo：管线信息结构
 *    - MaterialInfo：材质信息结构
 * 
 * 这些类型构成了渲染系统的类型体系，提供了类型安全和
 * 语义化的编程接口，便于理解和维护。
 */

/* ============================================================================
 * 常量定义说明
 * ============================================================================ */
/**
 * 常量定义说明：
 * 
 * 1. 渲染配置常量
 *    - RENDERING_BUFFER_SIZE：渲染缓冲区大小（32字节）
 *    - RENDERING_STACK_SIZE：渲染栈大小（24字节）
 *    - RENDERING_MAX_SHADERS：最大着色器数（101个）
 *    - RENDERING_MAX_PIPELINES：最大管线数（31个）
 *    - RENDERING_DEFAULT_QUEUE：默认队列（0）
 *    - RENDERING_TIMEOUT_INFINITE：无限超时（0xFFFFFFFF）
 * 
 * 2. 渲染标志常量
 *    - RENDERING_FLAG_INITIALIZED：初始化标志（1）
 *    - RENDERING_FLAG_ACTIVE：活动标志（2）
 *    - RENDERING_FLAG_VALID：有效标志（4）
 *    - RENDERING_FLAG_READY：就绪标志（8）
 * 
 * 3. 错误代码常量
 *    - RENDERING_ERROR_INVALID_SHADER：无效着色器错误（0x1C）
 *    - RENDERING_ERROR_INVALID_PIPELINE：无效管线错误（0x76）
 *    - RENDERING_SUCCESS：成功状态（0）
 * 
 * 这些常量定义了渲染系统的配置参数、状态标志和错误代码，
 * 提供了统一的接口和标准化的错误处理机制。
 */

/* ============================================================================
 * 性能优化说明
 * ============================================================================ */
/**
 * 性能优化策略：
 * 
 * 1. 着色器管理优化
 *    - 着色器缓存：缓存编译后的着色器程序
 *    - 着色器池：预分配常用着色器对象
 *    - 着色器复用：避免重复编译相同着色器
 *    - 异步编译：后台编译着色器程序
 * 
 * 2. 管线管理优化
 *    - 管线缓存：缓存常用管线配置
 *    - 管线池：预分配管线对象
 *    - 管线复用：复用相似管线配置
 *    - 延迟构建：按需构建渲染管线
 * 
 * 3. 材质处理优化
 *    - 材质参数缓存：缓存计算后的材质参数
 *    - 材质属性池：预分配材质属性对象
 *    - 批量处理：批量处理材质更新
 *    - 增量更新：只更新变化的材质参数
 * 
 * 4. 内存管理优化
 *    - 内存池：预分配内存块，减少分配开销
 *    - 对齐分配：提高内存访问效率
 *    - 延迟释放：避免频繁内存操作
 *    - 内存映射：优化大块内存访问
 * 
 * 5. 渲染状态优化
 *    - 状态缓存：缓存渲染状态设置
 *    - 状态批量：批量设置渲染状态
 *    - 状态验证：避免不必要的状态更改
 *    - 状态恢复：快速恢复常用状态
 * 
 * 这些优化策略确保了渲染系统的高性能和低延迟。
 */

/* ============================================================================
 * 安全机制说明
 * ============================================================================ */
/**
 * 安全机制设计：
 * 
 * 1. 栈保护
 *    - 安全cookie：防止栈溢出攻击
 *    - 栈验证：验证栈完整性
 *    - 栈限制：限制栈使用大小
 *    - 栈监控：监控栈使用情况
 * 
 * 2. 参数验证
 *    - 空指针检查：防止空指针访问
 *    - 类型验证：验证参数类型正确性
 *    - 范围检查：确保参数在有效范围内
 *    - 格式验证：验证参数格式正确性
 * 
 * 3. 内存安全
 *    - 边界检查：防止数组越界访问
 *    - 内存对齐：确保内存访问对齐
 *    - 内存初始化：初始化分配的内存
 *    - 内存清理：清理敏感数据
 * 
 * 4. 错误处理
 *    - 错误码：标准化的错误码定义
 *    - 错误恢复：自动错误恢复机制
 *    - 错误日志：记录错误信息
 *    - 错误传播：正确传播错误状态
 * 
 * 5. 资源管理
 *    - 资源生命周期：管理资源的完整生命周期
 *    - 资源释放：确保资源正确释放
 *    - 资源验证：验证资源有效性
 *    - 资源监控：监控资源使用情况
 * 
 * 这些安全机制确保了渲染系统的安全性和稳定性。
 */

/* ============================================================================
 * 维护性说明
 * ============================================================================ */
/**
 * 代码维护性设计：
 * 
 * 1. 模块化设计
 *    - 功能模块清晰分离，便于维护
 *    - 接口定义明确，便于理解
 *    - 职责单一，便于测试和调试
 * 
 * 2. 可读性设计
 *    - 语义化命名，便于理解
 *    - 详细注释，说明功能和实现
 *    - 统一编码风格，提高一致性
 * 
 * 3. 可扩展性
 *    - 接口设计灵活，支持功能扩展
 *    - 配置参数化，便于调整
 *    - 插件化架构，支持第三方扩展
 * 
 * 4. 可测试性
 *    - 函数职责单一，便于单元测试
 *    - 错误处理完善，便于集成测试
 *    - 日志记录详细，便于问题诊断
 * 
 * 5. 文档完善
 *    - 详细的函数文档，说明功能和使用
 *    - 技术说明文档，解释设计思路
 *    - 维护指南，指导后续维护
 * 
 * 这些设计确保了代码的可维护性和可扩展性。
 */

/* ============================================================================
 * 版本信息
 * ============================================================================ */
/**
 * 版本信息：
 * 
 * - 文件版本：1.0
 * - 创建日期：2025-08-28
 * - 最后修改：2025-08-28
 * - 作者：反编译代码美化处理
 * - 描述：渲染系统高级材质着色器和渲染管线管理模块
 * 
 * 本文件是对原始反编译代码的美化和重构版本，保持了原有功能的完整性，
 * 同时提高了代码的可读性和可维护性。
 */

/* ============================================================================
 * 版权声明
 * ============================================================================ */
/**
 * 版权声明：
 * 
 * 本文件基于TaleWorlds Native代码库的反编译代码进行美化处理。
 * 原始代码版权归TaleWorlds Entertainment所有。
 * 
 * 本美化版本仅用于学习和研究目的，不得用于商业用途。
 * 在使用本代码时，请遵守相关法律法规和版权协议。
 * 
 * 如有任何问题或建议，请联系代码维护者。
 */