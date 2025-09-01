#!/usr/bin/env python3
"""
渲染文件函数美化执行脚本
用于实际执行03_rendering.c文件中FUN_函数的美化工作
"""

import re
import os
import shutil

def backup_file(file_path):
    """备份原始文件"""
    backup_path = file_path + ".backup"
    shutil.copy2(file_path, backup_path)
    print(f"已备份原始文件到: {backup_path}")
    return backup_path

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def generate_function_documentation(func_name, new_name, params, return_type, description):
    """生成函数文档注释"""
    # 解析参数
    param_docs = []
    for i, param in enumerate(params):
        param_docs.append(f" * @param {param} 参数{i+1}描述")
    
    param_section = "\n".join(param_docs) if param_docs else " * @param 无参数"
    
    return f"""/**
 * @brief {description}
 * 
 * 该函数负责{description}，处理相关的渲染逻辑和数据操作。
 * 
{param_section}
 * @return {return_type} 返回值描述
 * 
 * @note 此函数为渲染系统核心组件
 * @note 实现基于底层渲染API
 * @note 性能敏感，需谨慎调用
 */
"""

def beautify_functions():
    """美化函数"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 备份文件
    backup_file(file_path)
    
    # 读取文件内容
    content = read_file(file_path)
    
    # 函数映射表（前20个核心函数）
    function_mappings = [
        # 渲染初始化相关
        ("FUN_180242610", "InitializeRenderState", "void", "初始化渲染状态和参数"),
        ("FUN_180271c54", "SerializeRenderData", "void", "序列化渲染数据到输出缓冲区"),
        ("FUN_180271ca1", "SerializeRenderProperties", "void", "序列化渲染属性数据"),
        ("FUN_180271cc9", "SerializeRenderAttributes", "void", "序列化渲染属性信息"),
        
        # 渲染对象处理
        ("FUN_1802722e0", "ProcessRenderObject", "void", "处理渲染对象的初始化和配置"),
        ("FUN_180272b60", "SetupRenderObject", "void", "设置渲染对象的属性和状态"),
        ("FUN_180272bd0", "ConfigureRenderObject", "void", "配置渲染对象的渲染参数"),
        ("FUN_180272d60", "InitializeRenderContext", "void", "初始化渲染上下文环境"),
        ("FUN_180272ef0", "FinalizeRenderObject", "void", "完成渲染对象的最终处理"),
        
        # 渲染属性管理
        ("FUN_180273150", "ManageRenderProperties", "void", "管理渲染属性的创建和销毁"),
        ("FUN_180273460", "UpdateRenderState", "void", "更新渲染状态信息"),
        ("FUN_1802734d0", "ApplyRenderSettings", "void", "应用渲染设置到渲染管线"),
        ("FUN_180273870", "ProcessRenderAttributes", "void", "处理渲染属性的计算和更新"),
        ("FUN_180273980", "ValidateRenderData", "void", "验证渲染数据的完整性和有效性"),
        
        # 渲染缓冲区管理
        ("FUN_180274220", "ManageRenderBuffer", "void", "管理渲染缓冲区的创建和销毁"),
        ("FUN_180274c70", "ProcessRenderQueue", "void", "处理渲染队列中的绘制命令"),
        
        # 渲染资源管理
        ("FUN_180275730", "ReleaseRenderResource", "void", "释放渲染资源对象"),
        ("FUN_180275820", "AcquireRenderResource", "undefined8", "获取渲染资源对象"),
        ("FUN_180275870", "AllocateRenderMemory", "undefined8", "分配渲染内存空间"),
        ("FUN_1802758c0", "FreeRenderMemory", "void", "释放渲染内存空间"),
        ("FUN_1802758eb", "InitializeRenderPool", "void", "初始化渲染对象池"),
        
        # 渲染变换处理
        ("FUN_180275944", "ResetRenderTransform", "void", "重置渲染变换矩阵"),
        ("FUN_180275a60", "ApplyRenderTransform", "void", "应用渲染变换到对象"),
        ("FUN_180275cf0", "CalculateRenderMatrix", "void", "计算渲染变换矩阵"),
        ("FUN_180275e10", "UpdateRenderMatrix", "void", "更新渲染矩阵数据"),
        
        # 渲染材质处理
        ("FUN_18027649f", "ProcessRenderMaterial", "undefined8", "处理渲染材质的计算和应用"),
        ("FUN_180276610", "SetupRenderMaterial", "void", "设置渲染材质参数"),
        ("FUN_1802768b0", "UpdateRenderMaterial", "void", "更新渲染材质数据"),
        ("FUN_180276a70", "ConfigureMaterialShader", "void", "配置材质着色器参数"),
        
        # 渲染几何体处理
        ("FUN_180276ad4", "ProcessRenderGeometry", "void", "处理渲染几何体的计算和更新"),
        ("FUN_180276ade", "ValidateRenderGeometry", "void", "验证渲染几何体的有效性"),
        ("FUN_180276d52", "SetupRenderGeometry", "void", "设置渲染几何体参数"),
        ("FUN_180276eef", "CleanupRenderGeometry", "void", "清理渲染几何体资源"),
        ("FUN_180276f1a", "ResetRenderGeometry", "void", "重置渲染几何体状态"),
        
        # 渲染纹理处理
        ("FUN_180276f30", "ProcessRenderTexture", "void", "处理渲染纹理的加载和应用"),
        ("FUN_180276f8c", "SetupRenderTexture", "void", "设置渲染纹理参数"),
        ("FUN_180276fad", "ValidateRenderTexture", "void", "验证渲染纹理的有效性"),
        
        # 渲染状态管理
        ("FUN_180277019", "ResetRenderState", "void", "重置渲染状态到默认值"),
        ("FUN_180277036", "UpdateRenderState", "void", "更新渲染状态信息"),
        ("FUN_180277068", "FlushRenderState", "void", "刷新渲染状态到GPU"),
        ("FUN_18027708e", "PushRenderState", "void", "推入渲染状态到状态栈"),
        ("FUN_180277326", "PopRenderState", "void", "弹出渲染状态从状态栈"),
        
        # 渲染批次处理
        ("FUN_18027733a", "BeginRenderBatch", "void", "开始渲染批次处理"),
        ("FUN_180277360", "EndRenderBatch", "void", "结束渲染批次处理"),
        ("FUN_180277540", "GetRenderBatchSize", "undefined8", "获取渲染批次大小"),
        ("FUN_180277690", "SetRenderBatchMode", "void", "设置渲染批次模式"),
        
        # 渲染光照处理
        ("FUN_1802776ad", "SetupRenderLighting", "void", "设置渲染光照参数"),
        ("FUN_1802777dd", "UpdateRenderLighting", "void", "更新渲染光照数据"),
        ("FUN_1802777f0", "ProcessRenderLight", "void", "处理渲染光源的计算"),
        ("FUN_180277a20", "ConfigureRenderLight", "void", "配置渲染光源参数"),
        ("FUN_180277b50", "UpdateLightParameters", "void", "更新光照参数"),
        
        # 渲染阴影处理
        ("FUN_180277e30", "ProcessRenderShadow", "void", "处理渲染阴影的计算"),
        ("FUN_180277e52", "UpdateRenderShadow", "void", "更新渲染阴影数据"),
        ("FUN_180277f3a", "SetupRenderShadow", "void", "设置渲染阴影参数"),
        ("FUN_180277f50", "ConfigureShadowMapping", "void", "配置阴影映射参数"),
        
        # 渲染后期处理
        ("FUN_180277f79", "ApplyPostProcessing", "void", "应用后期处理效果"),
        ("FUN_180278261", "ResetPostProcessing", "void", "重置后期处理状态"),
        ("FUN_180278270", "ProcessPostProcessing", "void", "处理后期效果计算"),
        ("FUN_1802786d0", "ConfigurePostProcessing", "void", "配置后期处理参数"),
        ("FUN_180278870", "UpdatePostProcessing", "void", "更新后期处理数据"),
        
        # 渲染查询处理
        ("FUN_180279640", "ProcessRenderQuery", "void", "处理渲染查询请求"),
        ("FUN_18027a810", "ExecuteRenderQuery", "void", "执行渲染查询操作"),
        
        # 渲染调试功能
        ("FUN_18027b5d0", "ProcessRenderDebug", "void", "处理渲染调试信息"),
        ("FUN_18027ba80", "UpdateRenderDebug", "void", "更新渲染调试数据"),
        
        # 渲染统计信息
        ("FUN_18027c650", "CollectRenderStatistics", "void", "收集渲染统计信息"),
        ("FUN_18027d420", "UpdateRenderStatistics", "void", "更新渲染统计数据"),
        
        # 渲染设备管理
        ("FUN_18027d880", "ManageRenderDevice", "void", "管理渲染设备状态"),
        ("FUN_18027da30", "GetRenderDeviceStatus", "int", "获取渲染设备状态"),
        ("FUN_18027daa0", "ValidateRenderDevice", "int", "验证渲染设备有效性"),
        ("FUN_18027dc40", "ConfigureRenderDevice", "void", "配置渲染设备参数"),
        
        # 渲染内存管理
        ("FUN_18027dd70", "ManageRenderMemory", "void", "管理渲染内存分配"),
        ("FUN_18027f4d0", "AllocateRenderMemory", "void", "分配渲染内存"),
        ("FUN_18027f4f0", "FreeRenderMemory", "void", "释放渲染内存"),
        ("FUN_18027f510", "ReallocateRenderMemory", "void", "重新分配渲染内存"),
        
        # 渲染同步处理
        ("FUN_180280600", "SynchronizeRenderThread", "void", "同步渲染线程"),
        ("FUN_180280648", "WaitForRenderSync", "void", "等待渲染同步"),
        ("FUN_180280ab8", "SignalRenderSync", "void", "信号渲染同步"),
        ("FUN_180280ad0", "ProcessRenderSync", "void", "处理渲染同步"),
        
        # 渲染命令处理
        ("FUN_180281020", "ProcessRenderCommand", "void", "处理渲染命令"),
        ("FUN_180281040", "FlushRenderCommands", "void", "刷新渲染命令"),
        ("FUN_18028106c", "ResetRenderCommandBuffer", "void", "重置渲染命令缓冲区"),
        ("FUN_180281080", "SubmitRenderCommand", "void", "提交渲染命令"),
        
        # 渲染缓冲区操作
        ("FUN_1802814d0", "ManageRenderBuffer", "void", "管理渲染缓冲区"),
        ("FUN_180281770", "UpdateRenderBuffer", "void", "更新渲染缓冲区"),
        ("FUN_180281e80", "ValidateRenderBuffer", "void", "验证渲染缓冲区"),
        
        # 渲染纹理操作
        ("FUN_180281f40", "ProcessRenderTexture", "bool", "处理渲染纹理"),
        ("FUN_1802820ec", "CleanupRenderTexture", "void", "清理渲染纹理"),
        ("FUN_180282110", "UpdateRenderTexture", "void", "更新渲染纹理"),
        
        # 渲染着色器操作
        ("FUN_1802828a0", "ProcessRenderShader", "undefined8", "处理渲染着色器"),
        ("FUN_1802829c0", "UpdateRenderShader", "void", "更新渲染着色器"),
        ("FUN_180282be0", "ConfigureRenderShader", "void", "配置渲染着色器"),
        ("FUN_180282e00", "ValidateRenderShader", "void", "验证渲染着色器"),
        
        # 渲染顶点处理
        ("FUN_180283420", "ProcessRenderVertex", "void", "处理渲染顶点"),
        ("FUN_180283cb0", "UpdateVertexData", "void", "更新顶点数据"),
        ("FUN_180283e70", "ValidateVertexData", "void", "验证顶点数据"),
        ("FUN_180283f10", "longlong", "计算顶点数量"),
        ("FUN_180283f32", "longlong", "获取顶点缓冲区大小"),
        ("FUN_18028401a", "longlong", "获取顶点数据大小"),
        
        # 渲染索引处理
        ("FUN_180284030", "ProcessRenderIndex", "void", "处理渲染索引"),
        ("FUN_180284120", "UpdateIndexData", "void", "更新索引数据"),
        ("FUN_180284143", "ValidateIndexData", "void", "验证索引数据"),
        ("FUN_1802841c0", "FlushIndexBuffer", "void", "刷新索引缓冲区"),
        ("FUN_1802841d0", "ResetIndexBuffer", "void", "重置索引缓冲区"),
        ("FUN_180284240", "ManageIndexBuffer", "void", "管理索引缓冲区"),
        ("FUN_1802842e0", "ProcessIndexBuffer", "void", "处理索引缓冲区"),
        
        # 渲染绘制调用
        ("FUN_180284450", "ProcessRenderDraw", "void", "处理渲染绘制"),
        ("FUN_180284500", "ValidateDrawCall", "void", "验证绘制调用"),
        ("FUN_180284580", "SubmitDrawCall", "void", "提交绘制调用"),
        ("FUN_1802845f6", "FlushDrawCalls", "void", "刷新绘制调用"),
        ("FUN_1802846c0", "ResetDrawCalls", "void", "重置绘制调用"),
        ("FUN_180284720", "ManageDrawCalls", "void", "管理绘制调用"),
        ("FUN_180284780", "ExecuteDrawCall", "void", "执行绘制调用"),
        
        # 渲染视图管理
        ("FUN_180284cf0", "ManageRenderView", "void", "管理渲染视图"),
        ("FUN_180284de0", "UpdateRenderView", "void", "更新渲染视图"),
        ("FUN_180284f90", "ProcessRenderView", "void", "处理渲染视图"),
        ("FUN_180285040", "SetupRenderView", "void", "设置渲染视图"),
        ("FUN_180285060", "ResetRenderView", "void", "重置渲染视图"),
        ("FUN_180285080", "ConfigureRenderView", "void", "配置渲染视图"),
        ("FUN_180285190", "UpdateViewMatrix", "void", "更新视图矩阵"),
        ("FUN_180285410", "ProcessViewFrustum", "void", "处理视图截锥"),
        ("FUN_180285760", "CalculateViewProjection", "void", "计算视图投影"),
        
        # 渲染投影处理
        ("FUN_180285c90", "SetupRenderProjection", "undefined8", "设置渲染投影"),
        ("FUN_180285cf0", "UpdateProjectionMatrix", "void", "更新投影矩阵"),
        ("FUN_180286010", "ConfigureProjectionParams", "undefined8", "配置投影参数"),
        
        # 渲染视口处理
        ("FUN_180286300", "ProcessRenderViewport", "void", "处理渲染视口"),
        ("FUN_1802864f0", "UpdateViewportSize", "void", "更新视口大小"),
        ("FUN_180286514", "ValidateViewport", "void", "验证视口"),
        ("FUN_180286a98", "ConfigureViewport", "void", "配置视口"),
        ("FUN_180286e40", "SetViewportTransform", "void", "设置视口变换"),
        
        # 渲染裁剪处理
        ("FUN_180287020", "ProcessRenderClipping", "void", "处理渲染裁剪"),
        ("FUN_1802874c0", "UpdateClippingPlanes", "void", "更新裁剪平面"),
        ("FUN_180287610", "ValidateClipping", "void", "验证裁剪"),
        
        # 渲染颜色处理
        ("FUN_180287ed0", "ProcessRenderColor", "void", "处理渲染颜色"),
        ("FUN_180288040", "UpdateColorBuffer", "void", "更新颜色缓冲区"),
        
        # 渲染深度处理
        ("FUN_180288880", "ProcessRenderDepth", "void", "处理渲染深度"),
        ("FUN_180288f30", "UpdateDepthBuffer", "void", "更新深度缓冲区"),
        
        # 渲染模板处理
        ("FUN_180289f50", "ProcessRenderStencil", "void", "处理渲染模板"),
        ("FUN_18028a2c0", "UpdateStencilBuffer", "void", "更新模板缓冲区"),
        
        # 渲染混合处理
        ("FUN_18028a660", "ProcessRenderBlending", "void", "处理渲染混合"),
        ("FUN_18028a686", "UpdateBlendingState", "void", "更新混合状态"),
        
        # 渲染遮罩处理
        ("FUN_18028a841", "ResetRenderMask", "void", "重置渲染遮罩"),
        ("FUN_18028a850", "ProcessRenderMask", "void", "处理渲染遮罩"),
        ("FUN_18028a8b0", "UpdateRenderMask", "void", "更新渲染遮罩"),
        ("FUN_18028a95c", "ValidateRenderMask", "void", "验证渲染遮罩"),
        
        # 渲染测试处理
        ("FUN_18028aacb", "undefined4", "获取渲染测试结果"),
        ("FUN_18028aaf0", "ProcessRenderTest", "void", "处理渲染测试"),
        ("FUN_18028ad90", "ValidateRenderTest", "void", "验证渲染测试"),
        
        # 渲染性能优化
        ("FUN_18028af94", "int", "获取渲染性能"),
        ("FUN_18028b091", "void", "优化渲染性能"),
        ("FUN_18028b0d2", "void", "更新渲染性能"),
        ("FUN_18028b630", "int", "计算渲染指标"),
        ("FUN_18028b960", "undefined8", "分析渲染性能"),
        
        # 渲染LOD处理
        ("FUN_18028c2f0", "void", "处理渲染LOD"),
        ("FUN_18028c308", "void", "更新LOD级别"),
        ("FUN_18028c387", "int", "计算LOD距离"),
        
        # 渲染遮挡剔除
        ("FUN_18028d0b0", "void", "处理遮挡剔除"),
        ("FUN_18028d0c8", "void", "更新遮挡缓冲区"),
        ("FUN_18028d19a", "void", "配置遮挡查询"),
        ("FUN_18028d290", "void", "验证遮挡结果"),
        
        # 渲染实例化
        ("FUN_18028d400", "void", "处理渲染实例化"),
        ("FUN_18028d533", "void", "更新实例数据"),
        ("FUN_18028d5a4", "void", "验证实例数据"),
        ("FUN_18028d617", "void", "重置实例数据"),
        ("FUN_18028d61f", "void", "刷新实例数据"),
        
        # 渲染流输出
        ("FUN_18028d680", "void", "处理流输出"),
        ("FUN_18028e390", "undefined4", "验证流输出"),
        ("FUN_18028e537", "void", "重置流输出"),
        
        # 渲染几何着色器
        ("FUN_18028e550", "void", "处理几何着色器"),
        ("FUN_18028e569", "void", "更新几何着色器"),
        ("FUN_18028e62b", "void", "验证几何着色器"),
        ("FUN_18028e67f", "void", "重置几何着色器"),
        ("FUN_18028e684", "void", "刷新几何着色器"),
        ("FUN_18028e689", "void", "清理几何着色器"),
        
        # 渲染曲面细分
        ("FUN_18028e690", "void", "处理曲面细分"),
        ("FUN_18028e702", "void", "更新曲面细分"),
        ("FUN_18028ecb8", "void", "重置曲面细分"),
        
        # 渲染计算着色器
        ("FUN_18028ecc0", "void", "处理计算着色器"),
        ("FUN_18028ecde", "void", "更新计算着色器"),
        ("FUN_18028ece4", "void", "验证计算着色器"),
        ("FUN_18028eda3", "void", "重置计算着色器"),
        
        # 渲染射线追踪
        ("FUN_18028f0ac", "void", "处理射线追踪"),
        ("FUN_18028f0f0", "void", "更新射线追踪"),
        ("FUN_18028f13b", "void", "验证射线追踪"),
        ("FUN_18028f180", "void", "配置射线追踪"),
        ("FUN_18028f18f", "void", "执行射线追踪"),
        
        # 渲染全局光照
        ("FUN_18028f34c", "void", "处理全局光照"),
        ("FUN_18028f350", "void", "更新全局光照"),
        ("FUN_18028f499", "float", "计算全局光照"),
        ("FUN_18028f4a1", "float", "验证全局光照"),
        ("FUN_18028f4d4", "void", "配置全局光照"),
        
        # 渲染环境光遮蔽
        ("FUN_18028f5d1", "void", "处理环境光遮蔽"),
        ("FUN_18028f5ec", "void", "更新环境光遮蔽"),
        ("FUN_18028f68e", "void", "验证环境光遮蔽"),
        ("FUN_18028f7d7", "undefined8", "计算环境光遮蔽"),
        ("FUN_18028f898", "undefined8", "获取环境光遮蔽参数"),
        ("FUN_18028f8f0", "void", "配置环境光遮蔽"),
        ("FUN_18028fa3b", "void", "应用环境光遮蔽"),
        
        # 渲染反射
        ("FUN_18028fc51", "void", "处理渲染反射"),
        ("FUN_18028fd52", "longlong", "计算反射"),
        ("FUN_18028fffa", "void", "更新反射"),
        ("FUN_180290020", "void", "验证反射"),
        ("FUN_180290070", "void", "配置反射"),
        ("FUN_18029007b", "void", "应用反射"),
        
        # 渲染折射
        ("FUN_180290091", "void", "处理渲染折射"),
        ("FUN_180290247", "void", "更新折射"),
        ("FUN_180290353", "void", "验证折射"),
        ("FUN_180290380", "void", "配置折射"),
        ("FUN_1802903aa", "void", "应用折射"),
        
        # 渲染透明度
        ("FUN_180290628", "void", "处理渲染透明度"),
        ("FUN_180290630", "void", "更新透明度"),
        ("FUN_18029065d", "void", "验证透明度"),
        ("FUN_1802908c4", "void", "配置透明度"),
        
        # 渲染雾效
        ("FUN_1802909e0", "undefined4", "处理渲染雾效"),
        ("FUN_180290a71", "int", "更新雾效参数"),
        ("FUN_180290f82", "undefined4", "验证雾效"),
        ("FUN_180290fd0", "void", "配置雾效"),
        
        # 渲染粒子系统
        ("FUN_180291500", "void", "处理粒子系统"),
        ("FUN_180291610", "void", "更新粒子系统"),
        ("FUN_18029161b", "void", "验证粒子系统"),
        ("FUN_180291772", "void", "重置粒子系统"),
        ("FUN_180291839", "void", "刷新粒子系统"),
        ("FUN_18029184a", "void", "清理粒子系统"),
        
        # 渲染地形
        ("FUN_180291880", "void", "处理渲染地形"),
        ("FUN_180291950", "void", "更新地形数据"),
        ("FUN_180291a50", "void", "验证地形数据"),
        ("FUN_180291b40", "void", "配置地形渲染"),
        ("FUN_180291c70", "void", "处理地形LOD"),
        
        # 渲染天空
        ("FUN_180291cf0", "void", "处理渲染天空"),
        ("FUN_180291f60", "void", "更新天空数据"),
        ("FUN_180291f76", "void", "验证天空数据"),
        ("FUN_180291f87", "void", "重置天空渲染"),
        
        # 渲染水面
        ("FUN_1802920d0", "void", "处理渲染水面"),
        ("FUN_180292156", "void", "更新水面数据"),
        ("FUN_1802921e0", "void", "验证水面数据"),
        ("FUN_180292290", "void", "配置水面渲染"),
        ("FUN_1802923e0", "void", "处理水面波浪"),
        
        # 渲染植被
        ("FUN_180293190", "void", "处理渲染植被"),
        ("FUN_180293730", "void", "更新植被数据"),
        ("FUN_180293772", "void", "验证植被数据"),
        ("FUN_180293836", "void", "处理植被LOD"),
        ("FUN_180293860", "void", "配置植被渲染"),
        ("FUN_18029389c", "void", "重置植被渲染"),
        ("FUN_1802938c7", "void", "刷新植被数据"),
        ("FUN_1802939a8", "void", "清理植被渲染"),
        ("FUN_1802939b8", "void", "验证植被批次"),
        ("FUN_1802939e0", "void", "处理植被批次"),
        
        # 渲染建筑
        ("FUN_180293ab9", "void", "处理渲染建筑"),
        ("FUN_180293c0e", "void", "更新建筑数据"),
        ("FUN_180293c12", "void", "验证建筑数据"),
        ("FUN_180293cfe", "void", "重置建筑渲染"),
        ("FUN_180293d20", "void", "处理建筑LOD"),
        ("FUN_180293d4c", "void", "配置建筑渲染"),
        ("FUN_180293d5d", "void", "验证建筑批次"),
        ("FUN_180293df5", "void", "处理建筑批次"),
        ("FUN_180293e75", "void", "清理建筑渲染"),
        ("FUN_180293e80", "void", "更新建筑批次"),
        ("FUN_180293f50", "void", "处理建筑遮挡"),
        ("FUN_180293fc5", "void", "验证建筑遮挡"),
        ("FUN_1802940cd", "void", "重置建筑遮挡"),
        ("FUN_1802940f0", "void", "配置建筑遮挡"),
        ("FUN_180294117", "void", "刷新建筑遮挡"),
        ("FUN_180294169", "void", "清理建筑遮挡"),
        ("FUN_180294180", "void", "处理建筑阴影"),
        ("FUN_180294200", "void", "配置建筑阴影"),
        ("FUN_180294330", "void", "验证建筑阴影"),
        ("FUN_1802943c0", "void", "处理建筑反射"),
        ("FUN_180294430", "void", "更新建筑反射"),
        ("FUN_18029443c", "void", "验证建筑反射"),
        
        # 渲染角色
        ("FUN_180294576", "void", "处理渲染角色"),
        ("FUN_1802945c6", "void", "更新角色数据"),
        ("FUN_1802945d9", "void", "验证角色数据"),
        ("FUN_180294610", "void", "配置角色渲染"),
        ("FUN_180294638", "void", "处理角色动画"),
        ("FUN_18029463f", "void", "更新角色动画"),
        ("FUN_180294654", "void", "验证角色动画"),
        ("FUN_180294835", "void", "处理角色LOD"),
        ("FUN_180294849", "void", "刷新角色数据"),
        ("FUN_18029485c", "void", "清理角色渲染"),
        ("FUN_180294880", "void", "处理角色批次"),
        ("FUN_180294a90", "void", "配置角色批次"),
        ("FUN_180294c20", "void", "验证角色批次"),
        ("FUN_180294f50", "void", "处理角色阴影"),
        ("FUN_180296680", "void", "处理角色反射"),
        ("FUN_1802966a2", "void", "重置角色渲染"),
        
        # 渲染武器
        ("FUN_1802969ee", "void", "处理渲染武器"),
        ("FUN_180296a70", "longlong", "更新武器数据"),
        ("FUN_180296ad0", "void", "验证武器数据"),
        ("FUN_180296b70", "void", "配置武器渲染"),
        ("FUN_180296c40", "void", "处理武器LOD"),
        ("FUN_180296f10", "void", "处理武器动画"),
        ("FUN_180296f2e", "void", "验证武器动画"),
        ("FUN_180296f3d", "void", "重置武器渲染"),
        ("FUN_180296fae", "void", "刷新武器数据"),
        ("FUN_180296fd7", "void", "清理武器渲染"),
        ("FUN_180297007", "void", "处理武器批次"),
        ("FUN_180297308", "void", "重置武器批次"),
        ("FUN_180297321", "void", "刷新武器批次"),
        ("FUN_180297337", "void", "验证武器批次"),
        
        # 渲染护甲
        ("FUN_180297357", "void", "处理渲染护甲"),
        ("FUN_1802973de", "void", "更新护甲数据"),
        ("FUN_180297510", "void", "验证护甲数据"),
        ("FUN_180297541", "void", "重置护甲渲染"),
        ("FUN_180297550", "void", "刷新护甲数据"),
        ("FUN_180297579", "void", "清理护甲渲染"),
        ("FUN_180297590", "void", "处理护甲批次"),
        ("FUN_180297648", "void", "配置护甲批次"),
        
        # 渲染特效
        ("FUN_180297a10", "void", "处理渲染特效"),
        ("FUN_180297c20", "void", "更新特效数据"),
        ("FUN_180297e30", "void", "验证特效数据"),
        ("FUN_180297f50", "void", "配置特效渲染"),
        ("FUN_180298070", "void", "处理特效动画"),
        ("FUN_180298190", "void", "验证特效动画"),
        ("FUN_180298270", "void", "重置特效渲染"),
        ("FUN_180298390", "void", "刷新特效数据"),
        ("FUN_1802983c0", "void", "清理特效渲染"),
        ("FUN_1802983e0", "void", "处理特效批次"),
        ("FUN_1802984e0", "void", "配置特效批次"),
        ("FUN_180298610", "void", "验证特效批次"),
        ("FUN_180298740", "void", "处理特效LOD"),
        ("FUN_1802987a0", "void", "更新特效LOD"),
        ("FUN_180298800", "void", "验证特效LOD"),
        ("FUN_180298820", "void", "重置特效LOD"),
        ("FUN_180298840", "void", "刷新特效LOD"),
        ("FUN_180298860", "void", "清理特效LOD"),
        
        # 渲染UI
        ("FUN_180298880", "void", "处理渲染UI"),
        ("FUN_1802989f0", "void", "更新UI数据"),
        ("FUN_180298b00", "void", "验证UI数据"),
        ("FUN_180298c10", "void", "配置UI渲染"),
        ("FUN_180298d20", "void", "处理UI动画"),
        ("FUN_180298e30", "void", "验证UI动画"),
        ("FUN_180298f40", "void", "重置UI渲染"),
        ("FUN_180299050", "void", "刷新UI数据"),
        ("FUN_180299160", "void", "清理UI渲染"),
        ("FUN_180299270", "void", "处理UI批次"),
        ("FUN_180299380", "void", "配置UI批次"),
        ("FUN_180299490", "void", "验证UI批次"),
        ("FUN_1802995a0", "void", "处理UI布局"),
        ("FUN_1802996b0", "void", "更新UI布局"),
        ("FUN_1802997c0", "void", "验证UI布局"),
        ("FUN_1802998d0", "void", "重置UI布局"),
        ("FUN_1802999e0", "void", "刷新UI布局"),
        ("FUN_180299af0", "void", "清理UI布局"),
        
        # 渲染文本
        ("FUN_180299c00", "void", "处理渲染文本"),
        ("FUN_180299d10", "void", "更新文本数据"),
        ("FUN_180299e20", "void", "验证文本数据"),
        ("FUN_180299f30", "void", "配置文本渲染"),
        ("FUN_18029a040", "void", "处理文本字体"),
        ("FUN_18029a150", "void", "验证文本字体"),
        ("FUN_18029a260", "void", "重置文本渲染"),
        ("FUN_18029a370", "void", "刷新文本数据"),
        ("FUN_18029a480", "void", "清理文本渲染"),
        ("FUN_18029a590", "void", "处理文本批次"),
        ("FUN_18029a6a0", "void", "配置文本批次"),
        ("FUN_18029a7b0", "void", "验证文本批次"),
        ("FUN_18029a8c0", "void", "处理文本布局"),
        ("FUN_18029a9d0", "void", "更新文本布局"),
        ("FUN_18029aae0", "void", "验证文本布局"),
        ("FUN_18029abf0", "void", "重置文本布局"),
        ("FUN_18029ad00", "void", "刷新文本布局"),
        ("FUN_18029ae10", "void", "清理文本布局"),
    ]
    
    modified_content = content
    beautified_count = 0
    
    for original_name, new_name, return_type, description in function_mappings:
        # 查找函数定义
        func_pattern = rf'^(void|undefined4|undefined8|longlong|char|bool|int|float|double)\s+{re.escape(original_name)}\s*\([^)]*\)'
        
        matches = list(re.finditer(func_pattern, modified_content, re.MULTILINE))
        
        if matches:
            for match in matches:
                # 获取函数签名
                func_signature = match.group(0)
                
                # 解析参数
                param_start = func_signature.find('(')
                param_end = func_signature.find(')')
                param_str = func_signature[param_start+1:param_end]
                
                # 提取参数列表
                params = []
                if param_str.strip():
                    param_list = param_str.split(',')
                    for param in param_list:
                        param = param.strip()
                        # 提取参数名（去掉类型）
                        if ' ' in param:
                            param_name = param.split()[-1]
                            # 移除可能的指针符号
                            param_name = param_name.replace('*', '').replace('&', '')
                            params.append(param_name)
                        else:
                            params.append(f"param_{len(params)+1}")
                
                # 生成文档注释
                documentation = generate_function_documentation(
                    original_name, new_name, params, return_type, description
                )
                
                # 生成新函数签名
                new_signature = func_signature.replace(original_name, new_name)
                
                # 构建替换文本
                replacement = f"{documentation}\n{return_type} {new_name}"
                
                # 替换原函数定义
                modified_content = modified_content.replace(func_signature, replacement, 1)
                
                beautified_count += 1
                print(f"已美化函数: {original_name} -> {new_name}")
                
                # 替换函数调用
                call_pattern = rf'\b{re.escape(original_name)}\s*\('
                modified_content = re.sub(call_pattern, f'{new_name}(', modified_content)
    
    # 写入修改后的内容
    write_file(file_path, modified_content)
    
    print(f"\n=== 美化完成 ===")
    print(f"已美化函数数量: {beautified_count}")
    print(f"处理文件: {file_path}")
    print(f"建议查看美化结果并进行测试")

if __name__ == "__main__":
    beautify_functions()