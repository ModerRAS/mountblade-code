#!/bin/bash

# UI系统函数美化脚本
# 用于重命名04_ui_system.c中的FUN_函数为语义化名称

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup

# 定义函数映射
declare -A function_mappings=(
    # 初始化和系统管理
    ["FUN_1807193b0"]="InitializeUISystem"
    ["FUN_180723131"]="ValidateUISystemState"
    ["FUN_1807234d0"]="ProcessUIResources"
    
    # 渲染相关
    ["FUN_180738730"]="PrepareUIRendering"
    ["FUN_180738d3d"]="ValidateUIRenderingContext"
    ["FUN_180738e7f"]="SetupUIRenderingParameters"
    ["FUN_180738fbf"]="ConfigureUIRenderingPipeline"
    ["FUN_1807390fd"]="ValidateRenderingConfiguration"
    
    # 资源管理
    ["FUN_18073922d"]="AllocateUIResourceMemory"
    ["FUN_1807395df"]="ValidateUIResourceAllocation"
    ["FUN_180739773"]="FreeUIResourceMemory"
    ["FUN_180739b3f"]="ManageUIResourcePool"
    ["FUN_180739c7d"]="UpdateUIResourceCache"
    
    # 纹理和图像处理
    ["FUN_180739dad"]="LoadUITexture"
    ["FUN_18073a47d"]="ProcessUITextureData"
    ["FUN_18073a6c1"]="ValidateTextureFormat"
    ["FUN_18073a7fd"]="ConvertTextureFormat"
    ["FUN_18073adad"]="ApplyTextureFilters"
    ["FUN_18073af6d"]="GenerateMipmaps"
    ["FUN_18073b13d"]="CompressTextureData"
    
    # 字体和文本处理
    ["FUN_18073b2c4"]="LoadUIFont"
    ["FUN_18073b4cf"]="ProcessFontData"
    ["FUN_18073b7af"]="RenderTextToTexture"
    ["FUN_18073ba9f"]="MeasureTextDimensions"
    ["FUN_18073bbdd"]="ValidateFontMetrics"
    
    # 界面元素处理
    ["FUN_18073c111"]="CreateUIElement"
    ["FUN_18073c258"]="UpdateUIElementState"
    ["FUN_18073c471"]="DestroyUIElement"
    ["FUN_18073c6e3"]="ValidateUIElement"
    ["FUN_18073c87f"]="PositionUIElement"
    
    # 布局系统
    ["FUN_18073cfcb"]="CalculateUILayout"
    ["FUN_18073d103"]="UpdateLayoutConstraints"
    ["FUN_18073d372"]="ValidateLayoutDimensions"
    ["FUN_18073d4b8"]="ApplyLayoutAlignment"
    ["FUN_18073d683"]="OptimizeLayoutPerformance"
    
    # 事件处理
    ["FUN_18073db4f"]="ProcessUIEvent"
    ["FUN_18073e229"]="HandleMouseInput"
    ["FUN_18073e414"]="HandleKeyboardInput"
    ["FUN_18073e6ce"]="ValidateEventQueue"
    ["FUN_18073eb6d"]="DispatchUIEvent"
    
    # 动画系统
    ["FUN_18073eddb"]="CreateUIAnimation"
    ["FUN_18073f0d1"]="UpdateUIAnimation"
    ["FUN_18073f32d"]="AnimateUIElement"
    ["FUN_18073f45d"]="ValidateAnimationState"
    
    # 窗口管理
    ["FUN_18073fb64"]="CreateUIWindow"
    ["FUN_18073ff1d"]="UpdateUIWindow"
    ["FUN_180740283"]="MoveUIWindow"
    ["FUN_1807403bf"]="ResizeUIWindow"
    ["FUN_1807405cf"]="CloseUIWindow"
    
    # 对话框和面板
    ["FUN_1807412d1"]="CreateUIDialog"
    ["FUN_180741413"]="ShowUIDialog"
    ["FUN_180741b27"]="UpdateUIDialog"
    
    # 控件系统
    ["FUN_180742460"]="CreateUIWidget"
    ["FUN_180742aca"]="ConfigureWidgetProperties"
    ["FUN_180742cd0"]="UpdateWidgetState"
    ["FUN_180742e00"]="ProcessWidgetEvents"
    
    # 缓冲区管理
    ["FUN_180744920"]="ManageUIBuffers"
    ["FUN_180746460"]="InitializeUIBuffers"
    
    # 着色器程序
    ["FUN_180749e0b"]="CompileUIShader"
    ["FUN_18074a895"]="LinkShaderProgram"
    ["FUN_18074a885"]="ValidateShaderProgram"
    ["FUN_18074af10"]="SetupShaderUniforms"
    
    # 渲染管线
    ["FUN_18074c570"]="ConfigureRenderingPipeline"
    ["FUN_18074f89e"]="ValidateRenderingState"
    ["FUN_18074f865"]="ResetRenderingState"
    
    # 帧缓冲区
    ["FUN_18074fc70"]="CreateFrameBuffer"
    ["FUN_180750bf2"]="BindFrameBuffer"
    ["FUN_180750fa0"]="UpdateFrameBuffer"
    
    # 资源调度
    ["FUN_1807533c2"]="ScheduleResourceUpload"
    ["FUN_180754080"]="ExecuteResourceTransfer"
    
    # 内存管理
    ["FUN_180756a02"]="AllocateUIMemory"
    ["FUN_180756d8a"]="FreeUIMemory"
    
    # 顶点处理
    ["FUN_180757a30"]="ProcessVertexData"
    ["FUN_180757c93"]="ValidateVertexFormat"
    ["FUN_180757cec"]="CreateVertexBuffer"
    
    # 变换矩阵
    ["FUN_180759220"]="CalculateTransformMatrix"
    ["FUN_1807593d0"]="UpdateProjectionMatrix"
    
    # 渲染目标
    ["FUN_18075a100"]="SetRenderTarget"
    ["FUN_18075a760"]="RenderToTexture"
    
    # 深度和模板测试
    ["FUN_18075e660"]="ConfigureDepthTest"
    ["FUN_18075ece0"]="ConfigureStencilTest"
    
    # 混合模式
    ["FUN_180760650"]="ConfigureBlendingMode"
    ["FUN_180760c64"]="ValidateBlendingState"
    
    # 裁剪和遮罩
    ["FUN_18076203a"]="SetupClippingRegion"
    ["FUN_180762a50"]="ApplyScissorTest"
    ["FUN_180762e40"]="CreateStencilMask"
    ["FUN_180762ee0"]="UpdateStencilMask"
    
    # 批量渲染
    ["FUN_180765a60"]="BeginBatchRender"
    ["FUN_180765da0"]="EndBatchRender"
    
    # 渲染统计
    ["FUN_180767c00"]="CollectRenderingStats"
    ["FUN_1807689d0"]="UpdatePerformanceMetrics"
    ["FUN_18076bcd0"]="CalculateFrameTime"
    
    # 渲染状态
    ["FUN_18076ce6f"]="SaveRenderingState"
    ["FUN_18076ce64"]="RestoreRenderingState"
    
    # 视口管理
    ["FUN_18076e120"]="ConfigureViewport"
    ["FUN_18076faa0"]="UpdateViewportTransform"
    
    # UI状态管理
    ["FUN_180770229"]="SaveUIState"
    ["FUN_180770ccf"]="RestoreUIState"
    
    # 界面更新
    ["FUN_180771250"]="UpdateUIInterface"
    ["FUN_180771ed0"]="ValidateUIState"
    ["FUN_180772160"]="SyncUIState"
    
    # 控件更新
    ["FUN_180772fe0"]="UpdateWidgetPosition"
    ["FUN_1807746b0"]="UpdateWidgetSize"
    ["FUN_180775620"]="UpdateWidgetVisibility"
    
    # 事件队列
    ["FUN_1807762e0"]="ProcessEventQueue"
    ["FUN_180776840"]="ValidateEventQueue"
    
    # 布局验证
    ["FUN_180778fa0"]="ValidateLayoutConstraints"
    ["FUN_180779270"]="CalculateLayoutBounds"
    
    # 控件渲染
    ["FUN_18077a750"]="RenderWidget"
    ["FUN_18077abc6"]="ApplyWidgetEffects"
    ["FUN_18077b410"]="OptimizeWidgetRendering"
    
    # 窗口渲染
    ["FUN_18077cdb0"]="RenderWindow"
    ["FUN_18077e820"]="UpdateWindowZOrder"
    ["FUN_18077e8d8"]="ValidateWindowFocus"
    ["FUN_18077e927"]="UpdateWindowOpacity"
    
    # 资源验证
    ["FUN_18077ef70"]="ValidateResourceIntegrity"
    ["FUN_180780d60"]="CheckResourceAvailability"
    
    # 纹理处理
    ["FUN_180780eb0"]="ProcessTextureStreaming"
    
    # 渲染优化
    ["FUN_180782e60"]="OptimizeRenderingPerformance"
    ["FUN_1807837e9"]="ValidateRenderingOptimization"
    
    # 场景更新
    ["FUN_180784300"]="UpdateUIScene"
    
    # 着色器管理
    ["FUN_180787940"]="ManageShaderPrograms"
    ["FUN_1807897b0"]="UpdateShaderParameters"
    ["FUN_180789a00"]="ValidateShaderState"
    
    # 资源调度
    ["FUN_18078aa2c"]="ScheduleResourceLoading"
    ["FUN_18078adbc"]="ExecuteResourceLoading"
    
    # 渲染上下文
    ["FUN_18078c746"]="SetupRenderingContext"
    ["FUN_18078c72e"]="ValidateRenderingContext"
    
    # 材质系统
    ["FUN_18078d9d0"]="ProcessUIMaterial"
    
    # 渲染统计
    ["FUN_1807901fa"]="UpdateRenderingStatistics"
    
    # 纹理管理
    ["FUN_180790610"]="ManageTextureMemory"
    ["FUN_180790680"]="OptimizeTextureUsage"
    
    # 动画状态
    ["FUN_1807915fb"]="UpdateAnimationState"
    ["FUN_1807916e0"]="ProcessAnimationFrame"
    
    # 控件动画
    ["FUN_180793660"]="AnimateWidgetProperties"
    ["FUN_180795df0"]="InterpolateWidgetValues"
    ["FUN_180796840"]="ApplyWidgetTransforms"
    
    # 布局更新
    ["FUN_180796ba0"]="UpdateLayoutHierarchy"
    
    # 材质更新
    ["FUN_180798350"]="UpdateMaterialProperties"
    ["FUN_1807989b0"]="ValidateMaterialState"
    
    # 界面渲染
    ["FUN_18079b600"]="RenderUserInterface"
    
    # 纹理更新
    ["FUN_18079e1c0"]="UpdateTextureData"
    
    # 内存管理
    ["FUN_1808005be"]="ManageMemoryPools"
    
    # 矩阵运算
    ["FUN_180801390"]="CalculateMatrixTransform"
    ["FUN_180801a10"]="UpdateMatrixUniforms"
    
    # 缓冲区更新
    ["FUN_1808024a0"]="UpdateBufferContents"
    
    # 事件处理
    ["FUN_1808027ca"]="ProcessInputEvents"
    
    # 控件交互
    ["FUN_180802d50"]="HandleWidgetInteraction"
    
    # 渲染验证
    ["FUN_1808041e8"]="ValidateRenderingOperation"
    
    # 窗口交互
    ["FUN_180804740"]="HandleWindowInteraction"
    ["FUN_1808048d0"]="UpdateWindowState"
    
    # 资源管理
    ["FUN_180804c50"]="ManageResourceLifecycle"
    
    # 缓冲区管理
    ["FUN_1808054c0"]="ManageBufferResources"
    
    # 事件系统
    ["FUN_180805aea"]="UpdateEventSystem"
    
    # 内存分配
    ["FUN_1808061c0"]="AllocateBufferMemory"
    
    # 传输操作
    ["FUN_1808064f0"]="ExecuteDataTransfer"
    
    # 资源释放
    ["FUN_180806fbb"]="ReleaseResourceMemory"
    
    # 纹理更新
    ["FUN_180807d00"]="UpdateTextureStreaming"
    
    # 缓冲区管理
    ["FUN_180808090"]="ManageBufferObjects"
    
    # 着色器更新
    ["FUN_180809f90"]="UpdateShaderPrograms"
    
    # 资源绑定
    ["FUN_18080a240"]="BindResourceObjects"
    
    # 统一变量更新
    ["FUN_18080a5d0"]="UpdateUniformVariables"
    
    # 资源验证
    ["FUN_18080a830"]="ValidateResourceBinding"
    
    # 渲染状态
    ["FUN_18080b37e"]="ValidateRenderingStatus"
    
    # 界面系统
    ["FUN_180811500"]="UpdateInterfaceSystem"
    
    # 着色器编译
    ["FUN_180811820"]="CompileShaderProgram"
    
    # 资源加载
    ["FUN_180815200"]="LoadResourcePackage"
    
    # 控件创建
    ["FUN_180815ca0"]="CreateControlSystem"
    
    # 纹理处理
    ["FUN_180815ea0"]="ProcessTextureCoordinates"
    
    # 界面渲染
    ["FUN_180819980"]="RenderInterfaceElement"
    
    # 控件系统
    ["FUN_18081a9c0"]="UpdateControlSystem"
    
    # 着色器参数
    ["FUN_18081b7ac"]="UpdateShaderParameters"
    
    # 颜色处理
    ["FUN_18081d600"]="ProcessColorValues"
    ["FUN_18081d760"]="BlendColorValues"
    ["FUN_18081d8a0"]="ConvertColorSpace"
    
    # 资源管理
    ["FUN_180824b30"]="ManageResourceReferences"
    ["FUN_180824f70"]="UpdateResourceReferences"
    ["FUN_180825560"]="ValidateResourceReferences"
    
    # 纹理管理
    ["FUN_180827240"]="ManageTextureStreaming"
    
    # 资源状态
    ["FUN_180828129"]="UpdateResourceStatus"
    
    # 内存管理
    ["FUN_180829a70"]="ManageMemoryAllocation"
    
    # 资源加载
    ["FUN_18082d8f1"]="ProcessResourceLoading"
    
    # 资源分配
    ["FUN_18082f0a0"]="AllocateResourceMemory"
    
    # 着色器管理
    ["FUN_180830e10"]="ManageShaderResources"
    
    # 资源处理
    ["FUN_1808399b0"]="ProcessResourceData"
    
    # 资源管理
    ["FUN_18083ccd0"]="ManageResourceCache"
    ["FUN_18083ccea"]="ValidateResourceCache"
    ["FUN_18083cd60"]="UpdateResourceCache"
    ["FUN_18083cd7a"]="OptimizeResourceCache"
    ["FUN_18083cdf0"]="ClearResourceCache"
    
    # 渲染系统
    ["FUN_18088f050"]="ValidateRenderingSystem"
    
    # 着色器处理
    ["FUN_180848ff1"]="ProcessShaderCompilation"
    
    # 资源处理
    ["FUN_180851421"]="ProcessResourceUpload"
    
    # 矩阵管理
    ["FUN_180851e40"]="ManageMatrixOperations"
    
    # 资源调度
    ["FUN_180852aaa"]="ScheduleResourceOperations"
    
    # 资源验证
    ["FUN_180852f68"]="ValidateResourceOperations"
    
    # 缓冲区管理
    ["FUN_180854040"]="ManageBufferOperations"
    
    # 资源处理
    ["FUN_180854610"]="ProcessResourceData"
    
    # 控件处理
    ["FUN_180854af0"]="HandleWidgetEvents"
    
    # 界面更新
    ["FUN_180854ce0"]="UpdateInterfaceState"
    
    # 事件处理
    ["FUN_180855130"]="ProcessInterfaceEvents"
    
    # 资源管理
    ["FUN_180855ffc"]="ManageResourceObjects"
    
    # 资源状态
    ["FUN_18085652b"]="UpdateResourceState"
    
    # 事件系统
    ["FUN_180856570"]="ProcessEventSystem"
    ["FUN_180856830"]="UpdateEventHandlers"
    
    # 控件管理
    ["FUN_180857c7a"]="ManageWidgetSystem"
    
    # 控件更新
    ["FUN_18085acd0"]="UpdateWidgetSystem"
    
    # 资源绑定
    ["FUN_18085b050"]="BindResourceTextures"
    
    # 控件事件
    ["FUN_18085bc30"]="HandleWidgetEvents"
    
    # 控件交互
    ["FUN_18085c4b0"]="ProcessWidgetInteraction"
    
    # 缓冲区管理
    ["FUN_18085d860"]="ManageBufferData"
    
    # 资源更新
    ["FUN_18085e8d0"]="UpdateResourceTextures"
    
    # 纹理管理
    ["FUN_18085ed00"]="ManageTextureData"
    
    # 资源处理
    ["FUN_18085f5f0"]="ProcessResourceUpload"
    
    # 纹理上传
    ["FUN_18085f630"]="UploadTextureData"
    
    # 资源管理
    ["FUN_18085f790"]="ManageResourceUpload"
    
    # 纹理处理
    ["FUN_18085f8d0"]="ProcessTextureUpload"
    
    # 资源验证
    ["FUN_18085fbb0"]="ValidateResourceUpload"
    
    # 系统状态
    ["FUN_1808616bc"]="UpdateSystemStatus"
    
    # 资源分配
    ["FUN_18086247a"]="AllocateResourceSpace"
    
    # 纹理管理
    ["FUN_180867b40"]="ManageTextureMemory"
    ["FUN_180867cf0"]="OptimizeTextureMemory"
    
    # 界面系统
    ["FUN_1808690e0"]="InitializeInterfaceSystem"
    ["FUN_180869270"]="UpdateInterfaceSystem"
    ["FUN_180869400"]="ValidateInterfaceSystem"
    ["FUN_180869590"]="ProcessInterfaceEvents"
    ["FUN_180869720"]="RenderInterfaceElements"
    ["FUN_1808698b0"]="OptimizeInterfaceSystem"
    
    # 缓冲区管理
    ["FUN_18086d470"]="ManageBufferMemory"
    ["FUN_18086d620"]="OptimizeBufferMemory"
    
    # 资源管理
    ["FUN_1808719a0"]="ManageResourceData"
    
    # 系统状态
    ["FUN_180876d54"]="ValidateSystemState"
    ["FUN_180876d27"]="UpdateSystemState"
    
    # 渲染状态
    ["FUN_18087920b"]="UpdateRenderingState"
    
    # 界面状态
    ["FUN_18088b503"]="UpdateInterfaceStatus"
    
    # 纹理管理
    ["FUN_18088ea60"]="ManageTextureResources"
    
    # 资源管理
    ["FUN_18088ff94"]="ValidateResourceIntegrity"
    
    # 布局系统
    ["FUN_180895b89"]="UpdateLayoutSystem"
    
    # 界面尺寸
    ["FUN_180895e19"]="CalculateInterfaceDimensions"
    
    # 控件系统
    ["FUN_1808974f4"]="UpdateControlSystem"
    ["FUN_180897b16"]="ValidateControlSystem"
    ["FUN_180897b0e"]="ProcessControlEvents"
    ["FUN_180897afe"]="OptimizeControlSystem"
    
    # 界面管理
    ["FUN_180898a50"]="ManageInterfaceResources"
    ["FUN_180898b40"]="UpdateInterfaceState"
)

# 遍历所有函数映射并执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 执行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
    
    echo "已替换: $old_name -> $new_name"
done

echo "UI系统函数美化完成"