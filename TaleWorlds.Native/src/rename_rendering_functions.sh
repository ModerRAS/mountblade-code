#!/bin/bash

# 批量重命名03_rendering.c中的FUN_函数
# 这个脚本将对渲染系统中的函数进行语义化重命名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

# 函数重命名映射
declare -A function_mapping=(
    # 渲染对象状态处理函数
    ["FUN_1802719d0"]="ProcessRenderObjectStateData"
    ["FUN_1802719da"]="SerializeRenderObjectState"
    ["FUN_1802719f1"]="ValidateRenderObjectState"
    ["FUN_180271b17"]="InitializeRenderStateManager"
    ["FUN_180271bcb"]="SetupRenderStateTransitions"
    ["FUN_180271c54"]="ProcessRenderStateUpdates"
    ["FUN_180271ca1"]="ValidateRenderStateConsistency"
    ["FUN_180271cc9"]="CommitRenderStateChanges"
    ["FUN_180271cf0"]="ResetRenderStateToDefault"
    
    # 渲染资源管理函数
    ["FUN_1802722e0"]="AllocateRenderResources"
    ["FUN_180272b60"]="ProcessRenderResourceData"
    ["FUN_180272bd0"]="ValidateRenderResourceAllocation"
    ["FUN_180272d60"]="ConfigureRenderResourceLayout"
    ["FUN_180272e40"]="SetupRenderResourceBindings"
    ["FUN_180272ef0"]="UpdateRenderResourceReferences"
    
    # 渲染管线函数
    ["FUN_180273150"]="InitializeRenderPipeline"
    ["FUN_1802732b0"]="ConfigureRenderPipelineStages"
    ["FUN_180273460"]="ValidateRenderPipelineSetup"
    ["FUN_1802734d0"]="ExecuteRenderPipeline"
    ["FUN_180273870"]="ProcessRenderPipelineCommands"
    ["FUN_180273980"]="OptimizeRenderPipelinePerformance"
    
    # 渲染缓冲区管理
    ["FUN_180274220"]="ProcessRenderBufferData"
    ["FUN_180274c70"]="ManageRenderBufferMemory"
    
    # 着色器相关函数
    ["FUN_180275730"]="CompileShaderProgram"
    ["FUN_1802758c0"]="LinkShaderStages"
    ["FUN_1802758eb"]="ValidateShaderProgram"
    ["FUN_180275944"]="InitializeShaderCache"
    ["FUN_180275a60"]="ProcessShaderCompilation"
    ["FUN_180275cf0"]="OptimizeShaderPerformance"
    ["FUN_180275e10"]="ValidateShaderBindings"
    
    # 渲染目标管理
    ["FUN_180276610"]="SetupRenderTargets"
    ["FUN_1802768b0"]="ConfigureRenderTargetViews"
    ["FUN_180276a70"]="ProcessRenderTargetData"
    ["FUN_180276ad4"]="ValidateRenderTargetSetup"
    ["FUN_180276ade"]="UpdateRenderTargetBindings"
    ["FUN_180276d52"]="ManageRenderTargetTransitions"
    ["FUN_180276eef"]="InitializeRenderTargetManager"
    ["FUN_180276f1a"]="CleanupRenderTargetResources"
    
    # 渲染设备管理
    ["FUN_180276f30"]="InitializeRenderDevice"
    ["FUN_180276f8c"]="ConfigureRenderDeviceSettings"
    ["FUN_180276fad"]="ValidateRenderDeviceState"
    ["FUN_180277019"]="ProcessRenderDeviceCommands"
    ["FUN_180277036"]="ManageRenderDeviceMemory"
    ["FUN_180277068"]="SynchronizeRenderDeviceOperations"
    ["FUN_18027708e"]="ExecuteRenderDeviceTasks"
    ["FUN_180277326"]="OptimizeRenderDevicePerformance"
    ["FUN_18027733a"]="ValidateRenderDeviceCapabilities"
    ["FUN_180277360"]="ProcessRenderDeviceEvents"
    
    # 纹理管理函数
    ["FUN_180277690"]="ProcessTextureData"
    ["FUN_1802776ad"]="InitializeTextureManager"
    ["FUN_1802777dd"]="ValidateTextureFormat"
    ["FUN_1802777f0"]="LoadTextureResources"
    ["FUN_180277a20"]="ConfigureTextureSettings"
    ["FUN_180277b50"]="OptimizeTextureMemory"
    ["FUN_180277e30"]="ProcessTextureMipmaps"
    ["FUN_180277e52"]="ValidateTextureBindings"
    ["FUN_180277f3a"]="CleanupTextureResources"
    ["FUN_180277f50"]="ManageTextureStreaming"
)

# 执行函数重命名
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    
    # 使用sed进行替换，只替换函数定义
    sed -i "s/^void $old_name(/void $new_name(/g" 03_rendering.c
    
    # 替换函数调用
    sed -i "s/$old_name(/$new_name(/g" 03_rendering.c
    
    echo "重命名: $old_name -> $new_name"
done

echo "函数重命名完成"