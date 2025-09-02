#!/bin/bash

# UI系统函数美化脚本 - 简化版本
# 用于重命名04_ui_system.c中的FUN_函数为语义化名称

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup

# 定义关键函数映射
declare -A function_mappings=(
    # 主要初始化函数
    ["FUN_1807193b0"]="InitializeUISystem"
    ["FUN_180723131"]="ValidateUISystemState"
    ["FUN_1807234d0"]="ProcessUIResources"
    
    # 渲染相关函数
    ["FUN_180738730"]="PrepareUIRendering"
    ["FUN_180738d3d"]="ValidateUIRenderingContext"
    ["FUN_180738e7f"]="SetupUIRenderingParameters"
    ["FUN_180738fbf"]="ConfigureUIRenderingPipeline"
    ["FUN_1807390fd"]="ValidateRenderingConfiguration"
    
    # 资源管理函数
    ["FUN_18073922d"]="AllocateUIResourceMemory"
    ["FUN_1807395df"]="ValidateUIResourceAllocation"
    ["FUN_180739773"]="FreeUIResourceMemory"
    ["FUN_180739b3f"]="ManageUIResourcePool"
    ["FUN_180739c7d"]="UpdateUIResourceCache"
    
    # 纹理处理函数
    ["FUN_180739dad"]="LoadUITexture"
    ["FUN_18073a47d"]="ProcessUITextureData"
    ["FUN_18073a6c1"]="ValidateTextureFormat"
    ["FUN_18073a7fd"]="ConvertTextureFormat"
    ["FUN_18073adad"]="ApplyTextureFilters"
    ["FUN_18073af6d"]="GenerateMipmaps"
    ["FUN_18073b13d"]="CompressTextureData"
    
    # 字体处理函数
    ["FUN_18073b2c4"]="LoadUIFont"
    ["FUN_18073b4cf"]="ProcessFontData"
    ["FUN_18073b7af"]="RenderTextToTexture"
    ["FUN_18073ba9f"]="MeasureTextDimensions"
    ["FUN_18073bbdd"]="ValidateFontMetrics"
    
    # UI元素处理函数
    ["FUN_18073c111"]="CreateUIElement"
    ["FUN_18073c258"]="UpdateUIElementState"
    ["FUN_18073c471"]="DestroyUIElement"
    ["FUN_18073c6e3"]="ValidateUIElement"
    ["FUN_18073c87f"]="PositionUIElement"
    
    # 布局系统函数
    ["FUN_18073cfcb"]="CalculateUILayout"
    ["FUN_18073d103"]="UpdateLayoutConstraints"
    ["FUN_18073d372"]="ValidateLayoutDimensions"
    ["FUN_18073d4b8"]="ApplyLayoutAlignment"
    ["FUN_18073d683"]="OptimizeLayoutPerformance"
    
    # 事件处理函数
    ["FUN_18073db4f"]="ProcessUIEvent"
    ["FUN_18073e229"]="HandleMouseInput"
    ["FUN_18073e414"]="HandleKeyboardInput"
    ["FUN_18073e6ce"]="ValidateEventQueue"
    ["FUN_18073eb6d"]="DispatchUIEvent"
    
    # 动画系统函数
    ["FUN_18073eddb"]="CreateUIAnimation"
    ["FUN_18073f0d1"]="UpdateUIAnimation"
    ["FUN_18073f32d"]="AnimateUIElement"
    ["FUN_18073f45d"]="ValidateAnimationState"
    
    # 窗口管理函数
    ["FUN_18073fb64"]="CreateUIWindow"
    ["FUN_18073ff1d"]="UpdateUIWindow"
    ["FUN_180740283"]="MoveUIWindow"
    ["FUN_1807403bf"]="ResizeUIWindow"
    ["FUN_1807405cf"]="CloseUIWindow"
    
    # 对话框函数
    ["FUN_1807412d1"]="CreateUIDialog"
    ["FUN_180741413"]="ShowUIDialog"
    ["FUN_180741b27"]="UpdateUIDialog"
    
    # 控件系统函数
    ["FUN_180742460"]="CreateUIWidget"
    ["FUN_180742aca"]="ConfigureWidgetProperties"
    ["FUN_180742cd0"]="UpdateWidgetState"
    ["FUN_180742e00"]="ProcessWidgetEvents"
    
    # 缓冲区管理函数
    ["FUN_180744920"]="ManageUIBuffers"
    ["FUN_180746460"]="InitializeUIBuffers"
    
    # 渲染相关函数
    ["FUN_18075a760"]="RenderToTexture"
    ["FUN_18075e660"]="ConfigureDepthTest"
    ["FUN_18075ece0"]="ConfigureStencilTest"
    ["FUN_180760650"]="ConfigureBlendingMode"
    ["FUN_180760c64"]="ValidateBlendingState"
    
    # 渲染状态函数
    ["FUN_18076203a"]="SetupClippingRegion"
    ["FUN_180762a50"]="ApplyScissorTest"
    ["FUN_180762e40"]="CreateStencilMask"
    ["FUN_180762ee0"]="UpdateStencilMask"
    
    # 批量渲染函数
    ["FUN_180765a60"]="BeginBatchRender"
    ["FUN_180765da0"]="EndBatchRender"
    
    # 性能统计函数
    ["FUN_180767c00"]="CollectRenderingStats"
    ["FUN_1807689d0"]="UpdatePerformanceMetrics"
    ["FUN_18076bcd0"]="CalculateFrameTime"
    
    # 渲染状态管理
    ["FUN_18076ce6f"]="SaveRenderingState"
    ["FUN_18076ce64"]="RestoreRenderingState"
    ["FUN_18076e120"]="ConfigureViewport"
    ["FUN_18076faa0"]="UpdateViewportTransform"
    
    # UI状态管理
    ["FUN_180770229"]="SaveUIState"
    ["FUN_180770ccf"]="RestoreUIState"
    ["FUN_180771250"]="UpdateUIInterface"
    ["FUN_180771ed0"]="ValidateUIState"
    ["FUN_180772160"]="SyncUIState"
    
    # 控件更新函数
    ["FUN_180772fe0"]="UpdateWidgetPosition"
    ["FUN_1807746b0"]="UpdateWidgetSize"
    ["FUN_180775620"]="UpdateWidgetVisibility"
    
    # 事件处理函数
    ["FUN_1807762e0"]="ProcessEventQueue"
    ["FUN_180776840"]="ValidateEventQueue"
    ["FUN_180778fa0"]="ValidateLayoutConstraints"
    ["FUN_180779270"]="CalculateLayoutBounds"
    
    # 控件渲染函数
    ["FUN_18077a750"]="RenderWidget"
    ["FUN_18077abc6"]="ApplyWidgetEffects"
    ["FUN_18077b410"]="OptimizeWidgetRendering"
    
    # 窗口渲染函数
    ["FUN_18077cdb0"]="RenderWindow"
    ["FUN_18077e820"]="UpdateWindowZOrder"
    ["FUN_18077e8d8"]="ValidateWindowFocus"
    ["FUN_18077e927"]="UpdateWindowOpacity"
    
    # 资源验证函数
    ["FUN_18077ef70"]="ValidateResourceIntegrity"
    ["FUN_180780d60"]="CheckResourceAvailability"
    ["FUN_180780eb0"]="ProcessTextureStreaming"
    
    # 性能优化函数
    ["FUN_180782e60"]="OptimizeRenderingPerformance"
    ["FUN_1807837e9"]="ValidateRenderingOptimization"
    ["FUN_180784300"]="UpdateUIScene"
    
    # 着色器管理函数
    ["FUN_180787940"]="ManageShaderPrograms"
    ["FUN_1807897b0"]="UpdateShaderParameters"
    ["FUN_180789a00"]="ValidateShaderState"
    
    # 资源管理函数
    ["FUN_18078aa2c"]="ScheduleResourceLoading"
    ["FUN_18078adbc"]="ExecuteResourceLoading"
    ["FUN_18078c746"]="SetupRenderingContext"
    ["FUN_18078c72e"]="ValidateRenderingContext"
    ["FUN_18078d9d0"]="ProcessUIMaterial"
    
    # 渲染统计函数
    ["FUN_1807901fa"]="UpdateRenderingStatistics"
    ["FUN_180790610"]="ManageTextureMemory"
    ["FUN_180790680"]="OptimizeTextureUsage"
    
    # 动画相关函数
    ["FUN_1807915fb"]="UpdateAnimationState"
    ["FUN_1807916e0"]="ProcessAnimationFrame"
    ["FUN_180793660"]="AnimateWidgetProperties"
    ["FUN_180795df0"]="InterpolateWidgetValues"
    ["FUN_180796840"]="ApplyWidgetTransforms"
    ["FUN_180796ba0"]="UpdateLayoutHierarchy"
    
    # 材质相关函数
    ["FUN_180798350"]="UpdateMaterialProperties"
    ["FUN_1807989b0"]="ValidateMaterialState"
    ["FUN_18079b600"]="RenderUserInterface"
    ["FUN_18079e1c0"]="UpdateTextureData"
    
    # 内存管理函数
    ["FUN_1808005be"]="ManageMemoryPools"
    ["FUN_180801390"]="CalculateMatrixTransform"
    ["FUN_180801a10"]="UpdateMatrixUniforms"
    ["FUN_1808024a0"]="UpdateBufferContents"
    
    # 输入处理函数
    ["FUN_1808027ca"]="ProcessInputEvents"
    ["FUN_180802d50"]="HandleWidgetInteraction"
    ["FUN_1808041e8"]="ValidateRenderingOperation"
    ["FUN_180804740"]="HandleWindowInteraction"
    ["FUN_1808048d0"]="UpdateWindowState"
    
    # 资源生命周期管理
    ["FUN_180804c50"]="ManageResourceLifecycle"
    ["FUN_1808054c0"]="ManageBufferResources"
    ["FUN_180805aea"]="UpdateEventSystem"
    ["FUN_1808061c0"]="AllocateBufferMemory"
    ["FUN_1808064f0"]="ExecuteDataTransfer"
    ["FUN_180806fbb"]="ReleaseResourceMemory"
    
    # 纹理和缓冲区管理
    ["FUN_180807d00"]="UpdateTextureStreaming"
    ["FUN_180808090"]="ManageBufferObjects"
    ["FUN_180809f90"]="UpdateShaderPrograms"
    ["FUN_18080a240"]="BindResourceObjects"
    ["FUN_18080a5d0"]="UpdateUniformVariables"
    ["FUN_18080a830"]="ValidateResourceBinding"
    ["FUN_18080b37e"]="ValidateRenderingStatus"
    
    # 界面系统函数
    ["FUN_180811500"]="UpdateInterfaceSystem"
    ["FUN_180811820"]="CompileShaderProgram"
    ["FUN_180815200"]="LoadResourcePackage"
    ["FUN_180815ca0"]="CreateControlSystem"
    ["FUN_180815ea0"]="ProcessTextureCoordinates"
    ["FUN_180819980"]="RenderInterfaceElement"
    ["FUN_18081a9c0"]="UpdateControlSystem"
    ["FUN_18081b7ac"]="UpdateShaderParameters"
    
    # 颜色处理函数
    ["FUN_18081d600"]="ProcessColorValues"
    ["FUN_18081d760"]="BlendColorValues"
    ["FUN_18081d8a0"]="ConvertColorSpace"
    
    # 资源管理函数
    ["FUN_180824b30"]="ManageResourceReferences"
    ["FUN_180824f70"]="UpdateResourceReferences"
    ["FUN_180825560"]="ValidateResourceReferences"
    ["FUN_180827240"]="ManageTextureStreaming"
    ["FUN_180828129"]="UpdateResourceStatus"
    ["FUN_180829a70"]="ManageMemoryAllocation"
    ["FUN_18082d8f1"]="ProcessResourceLoading"
    ["FUN_18082f0a0"]="AllocateResourceMemory"
    ["FUN_180830e10"]="ManageShaderResources"
    ["FUN_1808399b0"]="ProcessResourceData"
    
    # 资源缓存管理
    ["FUN_18083ccd0"]="ManageResourceCache"
    ["FUN_18083ccea"]="ValidateResourceCache"
    ["FUN_18083cd60"]="UpdateResourceCache"
    ["FUN_18083cd7a"]="OptimizeResourceCache"
    ["FUN_18083cdf0"]="ClearResourceCache"
    
    # 系统验证函数
    ["FUN_18088f050"]="ValidateRenderingSystem"
    ["FUN_180848ff1"]="ProcessShaderCompilation"
    ["FUN_180851421"]="ProcessResourceUpload"
    ["FUN_180851e40"]="ManageMatrixOperations"
    ["FUN_180852aaa"]="ScheduleResourceOperations"
    ["FUN_180852f68"]="ValidateResourceOperations"
    ["FUN_180854040"]="ManageBufferOperations"
    ["FUN_180854610"]="ProcessResourceData"
    
    # 控件和界面处理
    ["FUN_180854af0"]="HandleWidgetEvents"
    ["FUN_180854ce0"]="UpdateInterfaceState"
    ["FUN_180855130"]="ProcessInterfaceEvents"
    ["FUN_180855ffc"]="ManageResourceObjects"
    ["FUN_18085652b"]="UpdateResourceState"
    ["FUN_180856570"]="ProcessEventSystem"
    ["FUN_180856830"]="UpdateEventHandlers"
    ["FUN_180857c7a"]="ManageWidgetSystem"
    ["FUN_18085acd0"]="UpdateWidgetSystem"
    ["FUN_18085b050"]="BindResourceTextures"
    ["FUN_18085bc30"]="HandleWidgetEvents"
    ["FUN_18085c4b0"]="ProcessWidgetInteraction"
    ["FUN_18085d860"]="ManageBufferData"
    ["FUN_18085e8d0"]="UpdateResourceTextures"
    ["FUN_18085ed00"]="ManageTextureData"
    
    # 资源上传和管理
    ["FUN_18085f5f0"]="ProcessResourceUpload"
    ["FUN_18085f630"]="UploadTextureData"
    ["FUN_18085f790"]="ManageResourceUpload"
    ["FUN_18085f8d0"]="ProcessTextureUpload"
    ["FUN_18085fbb0"]="ValidateResourceUpload"
    
    # 系统状态管理
    ["FUN_1808616bc"]="UpdateSystemStatus"
    ["FUN_18086247a"]="AllocateResourceSpace"
    ["FUN_180867b40"]="ManageTextureMemory"
    ["FUN_180867cf0"]="OptimizeTextureMemory"
    
    # 界面系统管理
    ["FUN_1808690e0"]="InitializeInterfaceSystem"
    ["FUN_180869270"]="UpdateInterfaceSystem"
    ["FUN_180869400"]="ValidateInterfaceSystem"
    ["FUN_180869590"]="ProcessInterfaceEvents"
    ["FUN_180869720"]="RenderInterfaceElements"
    ["FUN_1808698b0"]="OptimizeInterfaceSystem"
    
    # 缓冲区和内存管理
    ["FUN_18086d470"]="ManageBufferMemory"
    ["FUN_18086d620"]="OptimizeBufferMemory"
    ["FUN_1808719a0"]="ManageResourceData"
    ["FUN_180876d54"]="ValidateSystemState"
    ["FUN_180876d27"]="UpdateSystemState"
    ["FUN_18087920b"]="UpdateRenderingState"
    ["FUN_18088b503"]="UpdateInterfaceStatus"
    ["FUN_18088ea60"]="ManageTextureResources"
    ["FUN_18088ff94"]="ValidateResourceIntegrity"
    
    # 布局和控件系统
    ["FUN_180895b89"]="UpdateLayoutSystem"
    ["FUN_180895e19"]="CalculateInterfaceDimensions"
    ["FUN_1808974f4"]="UpdateControlSystem"
    ["FUN_180897b16"]="ValidateControlSystem"
    ["FUN_180897b0e"]="ProcessControlEvents"
    ["FUN_180897afe"]="OptimizeControlSystem"
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

echo "UI系统函数重命名完成"