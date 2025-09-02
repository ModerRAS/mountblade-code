#!/usr/bin/env python3
"""
批量重命名04_ui_system.c文件中的FUN_函数
"""

import re
import sys

def analyze_ui_system_functions():
    """分析UI系统函数的功能"""
    
    # 函数映射表：地址 -> 新名称
    function_mappings = {
        # 初始化和系统管理
        "FUN_1807193b0": "InitializeUISystem",  # UI系统初始化
        "FUN_180723131": "ValidateUISystemState",  # 验证UI系统状态
        "FUN_1807234d0": "ProcessUIResources",  # 处理UI资源
        
        # 渲染相关
        "FUN_180738730": "PrepareUIRendering",  # 准备UI渲染
        "FUN_180738d3d": "ValidateUIRenderingContext",  # 验证UI渲染上下文
        "FUN_180738e7f": "SetupUIRenderingParameters",  # 设置UI渲染参数
        "FUN_180738fbf": "ConfigureUIRenderingPipeline",  # 配置UI渲染管线
        "FUN_1807390fd": "ValidateRenderingConfiguration",  # 验证渲染配置
        
        # 资源管理
        "FUN_18073922d": "AllocateUIResourceMemory",  # 分配UI资源内存
        "FUN_1807395df": "ValidateUIResourceAllocation",  # 验证UI资源分配
        "FUN_180739773": "FreeUIResourceMemory",  # 释放UI资源内存
        "FUN_180739b3f": "ManageUIResourcePool",  # 管理UI资源池
        "FUN_180739c7d": "UpdateUIResourceCache",  # 更新UI资源缓存
        
        # 纹理和图像处理
        "FUN_180739dad": "LoadUITexture",  # 加载UI纹理
        "FUN_18073a47d": "ProcessUITextureData",  # 处理UI纹理数据
        "FUN_18073a6c1": "ValidateTextureFormat",  # 验证纹理格式
        "FUN_18073a7fd": "ConvertTextureFormat",  # 转换纹理格式
        "FUN_18073adad": "ApplyTextureFilters",  # 应用纹理过滤器
        "FUN_18073af6d": "GenerateMipmaps",  # 生成Mipmap
        "FUN_18073b13d": "CompressTextureData",  # 压缩纹理数据
        
        # 字体和文本处理
        "FUN_18073b2c4": "LoadUIFont",  # 加载UI字体
        "FUN_18073b4cf": "ProcessFontData",  # 处理字体数据
        "FUN_18073b7af": "RenderTextToTexture",  # 渲染文本到纹理
        "FUN_18073ba9f": "MeasureTextDimensions",  # 测量文本尺寸
        "FUN_18073bbdd": "ValidateFontMetrics",  # 验证字体度量
        
        # 界面元素处理
        "FUN_18073c111": "CreateUIElement",  # 创建UI元素
        "FUN_18073c258": "UpdateUIElementState",  # 更新UI元素状态
        "FUN_18073c471": "DestroyUIElement",  # 销毁UI元素
        "FUN_18073c6e3": "ValidateUIElement",  # 验证UI元素
        "FUN_18073c87f": "PositionUIElement",  # 定位UI元素
        
        # 布局系统
        "FUN_18073cfcb": "CalculateUILayout",  # 计算UI布局
        "FUN_18073d103": "UpdateLayoutConstraints",  # 更新布局约束
        "FUN_18073d372": "ValidateLayoutDimensions",  # 验证布局尺寸
        "FUN_18073d4b8": "ApplyLayoutAlignment",  # 应用布局对齐
        "FUN_18073d683": "OptimizeLayoutPerformance",  # 优化布局性能
        
        # 事件处理
        "FUN_18073db4f": "ProcessUIEvent",  # 处理UI事件
        "FUN_18073e229": "HandleMouseInput",  # 处理鼠标输入
        "FUN_18073e414": "HandleKeyboardInput",  # 处理键盘输入
        "FUN_18073e6ce": "ValidateEventQueue",  # 验证事件队列
        "FUN_18073eb6d": "DispatchUIEvent",  # 分发UI事件
        
        # 动画系统
        "FUN_18073eddb": "CreateUIAnimation",  # 创建UI动画
        "FUN_18073f0d1": "UpdateUIAnimation",  # 更新UI动画
        "FUN_18073f32d": "AnimateUIElement",  # 动画UI元素
        "FUN_18073f45d": "ValidateAnimationState",  # 验证动画状态
        
        # 窗口管理
        "FUN_18073fb64": "CreateUIWindow",  # 创建UI窗口
        "FUN_18073ff1d": "UpdateUIWindow",  # 更新UI窗口
        "FUN_180740283": "MoveUIWindow",  # 移动UI窗口
        "FUN_1807403bf": "ResizeUIWindow",  # 调整UI窗口大小
        "FUN_1807405cf": "CloseUIWindow",  # 关闭UI窗口
        
        # 对话框和面板
        "FUN_1807412d1": "CreateUIDialog",  # 创建UI对话框
        "FUN_180741413": "ShowUIDialog",  # 显示UI对话框
        "FUN_180741b27": "UpdateUIDialog",  # 更新UI对话框
        
        # 控件系统
        "FUN_180742460": "CreateUIWidget",  # 创建UI控件
        "FUN_180742aca": "ConfigureWidgetProperties",  # 配置控件属性
        "FUN_180742cd0": "UpdateWidgetState",  # 更新控件状态
        "FUN_180742e00": "ProcessWidgetEvents",  # 处理控件事件
        
        # 缓冲区管理
        "FUN_180744920": "ManageUIBuffers",  # 管理UI缓冲区
        "FUN_180746460": "InitializeUIBuffers",  # 初始化UI缓冲区
        
        # 着色器程序
        "FUN_180749e0b": "CompileUIShader",  # 编译UI着色器
        "FUN_18074a895": "LinkShaderProgram",  # 链接着色器程序
        "FUN_18074a885": "ValidateShaderProgram",  # 验证着色器程序
        "FUN_18074af10": "SetupShaderUniforms",  # 设置着色器统一变量
        
        # 渲染管线
        "FUN_18074c570": "ConfigureRenderingPipeline",  # 配置渲染管线
        "FUN_18074f89e": "ValidateRenderingState",  # 验证渲染状态
        "FUN_18074f865": "ResetRenderingState",  # 重置渲染状态
        
        # 帧缓冲区
        "FUN_18074fc70": "CreateFrameBuffer",  # 创建帧缓冲区
        "FUN_180750bf2": "BindFrameBuffer",  # 绑定帧缓冲区
        "FUN_180750fa0": "UpdateFrameBuffer",  # 更新帧缓冲区
        
        # 资源调度
        "FUN_1807533c2": "ScheduleResourceUpload",  # 调度资源上传
        "FUN_180754080": "ExecuteResourceTransfer",  # 执行资源传输
        
        # 内存管理
        "FUN_180756a02": "AllocateUIMemory",  # 分配UI内存
        "FUN_180756d8a": "FreeUIMemory",  # 释放UI内存
        
        # 顶点处理
        "FUN_180757a30": "ProcessVertexData",  # 处理顶点数据
        "FUN_180757c93": "ValidateVertexFormat",  # 验证顶点格式
        "FUN_180757cec": "CreateVertexBuffer",  # 创建顶点缓冲区
        
        # 变换矩阵
        "FUN_180759220": "CalculateTransformMatrix",  # 计算变换矩阵
        "FUN_1807593d0": "UpdateProjectionMatrix",  # 更新投影矩阵
        
        # 渲染目标
        "FUN_18075a100": "SetRenderTarget",  # 设置渲染目标
        "FUN_18075a760": "RenderToTexture",  # 渲染到纹理
        
        # 深度和模板测试
        "FUN_18075e660": "ConfigureDepthTest",  # 配置深度测试
        "FUN_18075ece0": "ConfigureStencilTest",  # 配置模板测试
        
        # 混合模式
        "FUN_180760650": "ConfigureBlendingMode",  # 配置混合模式
        "FUN_180760c64": "ValidateBlendingState",  # 验证混合状态
        
        # 裁剪和遮罩
        "FUN_18076203a": "SetupClippingRegion",  # 设置裁剪区域
        "FUN_180762a50": "ApplyScissorTest",  # 应用剪刀测试
        "FUN_180762e40": "CreateStencilMask",  # 创建模板遮罩
        "FUN_180762ee0": "UpdateStencilMask",  # 更新模板遮罩
        
        # 批量渲染
        "FUN_180765a60": "BeginBatchRender",  # 开始批量渲染
        "FUN_180765da0": "EndBatchRender",  # 结束批量渲染
        
        # 渲染统计
        "FUN_180767c00": "CollectRenderingStats",  # 收集渲染统计
        "FUN_1807689d0": "UpdatePerformanceMetrics",  # 更新性能指标
        "FUN_18076bcd0": "CalculateFrameTime",  # 计算帧时间
        
        # 渲染状态
        "FUN_18076ce6f": "SaveRenderingState",  # 保存渲染状态
        "FUN_18076ce64": "RestoreRenderingState",  # 恢复渲染状态
        
        # 视口管理
        "FUN_18076e120": "ConfigureViewport",  # 配置视口
        "FUN_18076faa0": "UpdateViewportTransform",  # 更新视口变换
        
        # UI状态管理
        "FUN_180770229": "SaveUIState",  # 保存UI状态
        "FUN_180770ccf": "RestoreUIState",  # 恢复UI状态
        
        # 界面更新
        "FUN_180771250": "UpdateUIInterface",  # 更新UI界面
        "FUN_180771ed0": "ValidateUIState",  # 验证UI状态
        "FUN_180772160": "SyncUIState",  # 同步UI状态
        
        # 控件更新
        "FUN_180772fe0": "UpdateWidgetPosition",  # 更新控件位置
        "FUN_1807746b0": "UpdateWidgetSize",  # 更新控件大小
        "FUN_180775620": "UpdateWidgetVisibility",  # 更新控件可见性
        
        # 事件队列
        "FUN_1807762e0": "ProcessEventQueue",  # 处理事件队列
        "FUN_180776840": "ValidateEventQueue",  # 验证事件队列
        
        # 布局验证
        "FUN_180778fa0": "ValidateLayoutConstraints",  # 验证布局约束
        "FUN_180779270": "CalculateLayoutBounds",  # 计算布局边界
        
        # 控件渲染
        "FUN_18077a750": "RenderWidget",  # 渲染控件
        "FUN_18077abc6": "ApplyWidgetEffects",  # 应用控件效果
        "FUN_18077b410": "OptimizeWidgetRendering",  # 优化控件渲染
        
        # 窗口渲染
        "FUN_18077cdb0": "RenderWindow",  # 渲染窗口
        "FUN_18077e820": "UpdateWindowZOrder",  # 更新窗口Z顺序
        "FUN_18077e8d8": "ValidateWindowFocus",  # 验证窗口焦点
        "FUN_18077e927": "UpdateWindowOpacity",  # 更新窗口透明度
        
        # 资源验证
        "FUN_18077ef70": "ValidateResourceIntegrity",  # 验证资源完整性
        "FUN_180780d60": "CheckResourceAvailability",  # 检查资源可用性
        
        # 纹理处理
        "FUN_180780eb0": "ProcessTextureStreaming",  # 处理纹理流式传输
        
        # 渲染优化
        "FUN_180782e60": "OptimizeRenderingPerformance",  # 优化渲染性能
        "FUN_1807837e9": "ValidateRenderingOptimization",  # 验证渲染优化
        
        # 场景更新
        "FUN_180784300": "UpdateUIScene",  # 更新UI场景
        
        # 着色器管理
        "FUN_180787940": "ManageShaderPrograms",  # 管理着色器程序
        "FUN_1807897b0": "UpdateShaderParameters",  # 更新着色器参数
        "FUN_180789a00": "ValidateShaderState",  # 验证着色器状态
        
        # 资源调度
        "FUN_18078aa2c": "ScheduleResourceLoading",  # 调度资源加载
        "FUN_18078adbc": "ExecuteResourceLoading",  # 执行资源加载
        
        # 渲染上下文
        "FUN_18078c746": "SetupRenderingContext",  # 设置渲染上下文
        "FUN_18078c72e": "ValidateRenderingContext",  # 验证渲染上下文
        
        # 材质系统
        "FUN_18078d9d0": "ProcessUIMaterial",  # 处理UI材质
        
        # 渲染统计
        "FUN_1807901fa": "UpdateRenderingStatistics",  # 更新渲染统计
        
        # 纹理管理
        "FUN_180790610": "ManageTextureMemory",  # 管理纹理内存
        "FUN_180790680": "OptimizeTextureUsage",  # 优化纹理使用
        
        # 动画状态
        "FUN_1807915fb": "UpdateAnimationState",  # 更新动画状态
        "FUN_1807916e0": "ProcessAnimationFrame",  # 处理动画帧
        
        # 控件动画
        "FUN_180793660": "AnimateWidgetProperties",  # 动画控件属性
        "FUN_180795df0": "InterpolateWidgetValues",  # 插值控件值
        "FUN_180796840": "ApplyWidgetTransforms",  # 应用控件变换
        
        # 布局更新
        "FUN_180796ba0": "UpdateLayoutHierarchy",  # 更新布局层次结构
        
        # 材质更新
        "FUN_180798350": "UpdateMaterialProperties",  # 更新材质属性
        "FUN_1807989b0": "ValidateMaterialState",  # 验证材质状态
        
        # 界面渲染
        "FUN_18079b600": "RenderUserInterface",  # 渲染用户界面
        
        # 纹理更新
        "FUN_18079e1c0": "UpdateTextureData",  # 更新纹理数据
        
        # 内存管理
        "FUN_1808005be": "ManageMemoryPools",  # 管理内存池
        
        # 矩阵运算
        "FUN_180801390": "CalculateMatrixTransform",  # 计算矩阵变换
        "FUN_180801a10": "UpdateMatrixUniforms",  # 更新矩阵统一变量
        
        # 缓冲区更新
        "FUN_1808024a0": "UpdateBufferContents",  # 更新缓冲区内容
        
        # 事件处理
        "FUN_1808027ca": "ProcessInputEvents",  # 处理输入事件
        
        # 控件交互
        "FUN_180802d50": "HandleWidgetInteraction",  # 处理控件交互
        
        # 渲染验证
        "FUN_1808041e8": "ValidateRenderingOperation",  # 验证渲染操作
        
        # 窗口交互
        "FUN_180804740": "HandleWindowInteraction",  # 处理窗口交互
        "FUN_1808048d0": "UpdateWindowState",  # 更新窗口状态
        
        # 资源管理
        "FUN_180804c50": "ManageResourceLifecycle",  # 管理资源生命周期
        
        # 缓冲区管理
        "FUN_1808054c0": "ManageBufferResources",  # 管理缓冲区资源
        
        # 事件系统
        "FUN_180805aea": "UpdateEventSystem",  # 更新事件系统
        
        # 内存分配
        "FUN_1808061c0": "AllocateBufferMemory",  # 分配缓冲区内存
        
        # 传输操作
        "FUN_1808064f0": "ExecuteDataTransfer",  # 执行数据传输
        
        # 资源释放
        "FUN_180806fbb": "ReleaseResourceMemory",  # 释放资源内存
        
        # 纹理更新
        "FUN_180807d00": "UpdateTextureStreaming",  # 更新纹理流式传输
        
        # 缓冲区管理
        "FUN_180808090": "ManageBufferObjects",  # 管理缓冲区对象
        
        # 着色器更新
        "FUN_180809f90": "UpdateShaderPrograms",  # 更新着色器程序
        
        # 资源绑定
        "FUN_18080a240": "BindResourceObjects",  # 绑定资源对象
        
        # 统一变量更新
        "FUN_18080a5d0": "UpdateUniformVariables",  # 更新统一变量
        
        # 资源验证
        "FUN_18080a830": "ValidateResourceBinding",  # 验证资源绑定
        
        # 渲染状态
        "FUN_18080b37e": "ValidateRenderingStatus",  # 验证渲染状态
        
        # 界面系统
        "FUN_180811500": "UpdateInterfaceSystem",  # 更新界面系统
        
        # 着色器编译
        "FUN_180811820": "CompileShaderProgram",  # 编译着色器程序
        
        # 资源加载
        "FUN_180815200": "LoadResourcePackage",  # 加载资源包
        
        # 控件创建
        "FUN_180815ca0": "CreateControlSystem",  # 创建控件系统
        
        # 纹理处理
        "FUN_180815ea0": "ProcessTextureCoordinates",  # 处理纹理坐标
        
        # 界面渲染
        "FUN_180819980": "RenderInterfaceElement",  # 渲染界面元素
        
        # 控件系统
        "FUN_18081a9c0": "UpdateControlSystem",  # 更新控件系统
        
        # 着色器参数
        "FUN_18081b7ac": "UpdateShaderParameters",  # 更新着色器参数
        
        # 颜色处理
        "FUN_18081d600": "ProcessColorValues",  # 处理颜色值
        "FUN_18081d760": "BlendColorValues",  # 混合颜色值
        "FUN_18081d8a0": "ConvertColorSpace",  # 转换色彩空间
        
        # 资源管理
        "FUN_180824b30": "ManageResourceReferences",  # 管理资源引用
        "FUN_180824f70": "UpdateResourceReferences",  # 更新资源引用
        "FUN_180825560": "ValidateResourceReferences",  # 验证资源引用
        
        # 纹理管理
        "FUN_180827240": "ManageTextureStreaming",  # 管理纹理流式传输
        
        # 资源状态
        "FUN_180828129": "UpdateResourceStatus",  # 更新资源状态
        
        # 内存管理
        "FUN_180829a70": "ManageMemoryAllocation",  # 管理内存分配
        
        # 资源加载
        "FUN_18082d8f1": "ProcessResourceLoading",  # 处理资源加载
        
        # 资源分配
        "FUN_18082f0a0": "AllocateResourceMemory",  # 分配资源内存
        
        # 着色器管理
        "FUN_180830e10": "ManageShaderResources",  # 管理着色器资源
        
        # 资源处理
        "FUN_1808399b0": "ProcessResourceData",  # 处理资源数据
        
        # 资源管理
        "FUN_18083ccd0": "ManageResourceCache",  # 管理资源缓存
        "FUN_18083ccea": "ValidateResourceCache",  # 验证资源缓存
        "FUN_18083cd60": "UpdateResourceCache",  # 更新资源缓存
        "FUN_18083cd7a": "OptimizeResourceCache",  # 优化资源缓存
        "FUN_18083cdf0": "ClearResourceCache",  # 清除资源缓存
        
        # 渲染系统
        "FUN_18088f050": "ValidateRenderingSystem",  # 验证渲染系统
        
        # 着色器处理
        "FUN_180848ff1": "ProcessShaderCompilation",  # 处理着色器编译
        
        # 资源处理
        "FUN_180851421": "ProcessResourceUpload",  # 处理资源上传
        
        # 矩阵管理
        "FUN_180851e40": "ManageMatrixOperations",  # 管理矩阵操作
        
        # 资源调度
        "FUN_180852aaa": "ScheduleResourceOperations",  # 调度资源操作
        
        # 资源验证
        "FUN_180852f68": "ValidateResourceOperations",  # 验证资源操作
        
        # 缓冲区管理
        "FUN_180854040": "ManageBufferOperations",  # 管理缓冲区操作
        
        # 资源处理
        "FUN_180854610": "ProcessResourceData",  # 处理资源数据
        
        # 控件处理
        "FUN_180854af0": "HandleWidgetEvents",  # 处理控件事件
        
        # 界面更新
        "FUN_180854ce0": "UpdateInterfaceState",  # 更新界面状态
        
        # 事件处理
        "FUN_180855130": "ProcessInterfaceEvents",  # 处理界面事件
        
        # 资源管理
        "FUN_180855ffc": "ManageResourceObjects",  # 管理资源对象
        
        # 资源状态
        "FUN_18085652b": "UpdateResourceState",  # 更新资源状态
        
        # 事件系统
        "FUN_180856570": "ProcessEventSystem",  # 处理事件系统
        "FUN_180856830": "UpdateEventHandlers",  # 更新事件处理器
        
        # 控件管理
        "FUN_180857c7a": "ManageWidgetSystem",  # 管理控件系统
        
        # 控件更新
        "FUN_18085acd0": "UpdateWidgetSystem",  # 更新控件系统
        
        # 资源绑定
        "FUN_18085b050": "BindResourceTextures",  # 绑定资源纹理
        
        # 控件事件
        "FUN_18085bc30": "HandleWidgetEvents",  # 处理控件事件
        
        # 控件交互
        "FUN_18085c4b0": "ProcessWidgetInteraction",  # 处理控件交互
        
        # 缓冲区管理
        "FUN_18085d860": "ManageBufferData",  # 管理缓冲区数据
        
        # 资源更新
        "FUN_18085e8d0": "UpdateResourceTextures",  # 更新资源纹理
        
        # 纹理管理
        "FUN_18085ed00": "ManageTextureData",  # 管理纹理数据
        
        # 资源处理
        "FUN_18085f5f0": "ProcessResourceUpload",  # 处理资源上传
        
        # 纹理上传
        "FUN_18085f630": "UploadTextureData",  # 上传纹理数据
        
        # 资源管理
        "FUN_18085f790": "ManageResourceUpload",  # 管理资源上传
        
        # 纹理处理
        "FUN_18085f8d0": "ProcessTextureUpload",  # 处理纹理上传
        
        # 资源验证
        "FUN_18085fbb0": "ValidateResourceUpload",  # 验证资源上传
        
        # 系统状态
        "FUN_1808616bc": "UpdateSystemStatus",  # 更新系统状态
        
        # 资源分配
        "FUN_18086247a": "AllocateResourceSpace",  # 分配资源空间
        
        # 纹理管理
        "FUN_180867b40": "ManageTextureMemory",  # 管理纹理内存
        "FUN_180867cf0": "OptimizeTextureMemory",  # 优化纹理内存
        
        # 界面系统
        "FUN_1808690e0": "InitializeInterfaceSystem",  # 初始化界面系统
        "FUN_180869270": "UpdateInterfaceSystem",  # 更新界面系统
        "FUN_180869400": "ValidateInterfaceSystem",  # 验证界面系统
        "FUN_180869590": "ProcessInterfaceEvents",  # 处理界面事件
        "FUN_180869720": "RenderInterfaceElements",  # 渲染界面元素
        "FUN_1808698b0": "OptimizeInterfaceSystem",  # 优化界面系统
        
        # 缓冲区管理
        "FUN_18086d470": "ManageBufferMemory",  # 管理缓冲区内存
        "FUN_18086d620": "OptimizeBufferMemory",  # 优化缓冲区内存
        
        # 资源管理
        "FUN_1808719a0": "ManageResourceData",  # 管理资源数据
        
        # 系统状态
        "FUN_180876d54": "ValidateSystemState",  # 验证系统状态
        "FUN_180876d27": "UpdateSystemState",  # 更新系统状态
        
        # 渲染状态
        "FUN_18087920b": "UpdateRenderingState",  # 更新渲染状态
        
        # 界面状态
        "FUN_18088b503": "UpdateInterfaceStatus",  # 更新界面状态
        
        # 纹理管理
        "FUN_18088ea60": "ManageTextureResources",  # 管理纹理资源
        
        # 资源管理
        "FUN_18088ff94": "ValidateResourceIntegrity",  # 验证资源完整性
        
        # 布局系统
        "FUN_180895b89": "UpdateLayoutSystem",  # 更新布局系统
        
        # 界面尺寸
        "FUN_180895e19": "CalculateInterfaceDimensions",  # 计算界面尺寸
        
        # 控件系统
        "FUN_1808974f4": "UpdateControlSystem",  # 更新控件系统
        "FUN_180897b16": "ValidateControlSystem",  # 验证控件系统
        "FUN_180897b0e": "ProcessControlEvents",  # 处理控件事件
        "FUN_180897afe": "OptimizeControlSystem",  # 优化控件系统
        
        # 界面管理
        "FUN_180898a50": "ManageInterfaceResources",  # 管理界面资源
        "FUN_180898b40": "UpdateInterfaceState",  # 更新界面状态
    }
    
    return function_mappings

def generate_replacement_script():
    """生成替换脚本"""
    mappings = analyze_ui_system_functions()
    
    script_content = """#!/bin/bash
# 批量重命名04_ui_system.c文件中的FUN_函数

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup

# 应用替换
sed -i '"""
    
    for old_name, new_name in mappings.items():
        script_content += f"s/{old_name}/{new_name}/g;"
        
    script_content += """' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "FUN_函数重命名完成"
"""
    
    return script_content

if __name__ == "__main__":
    script_content = generate_replacement_script()
    with open("/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_ui_system_functions.sh", "w") as f:
        f.write(script_content)
    
    print("已生成UI系统函数美化脚本: /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_ui_system_functions.sh")