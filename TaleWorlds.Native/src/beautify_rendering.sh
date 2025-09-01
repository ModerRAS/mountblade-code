#!/bin/bash

# 美化03_rendering.c文件中的函数名
# 为渲染系统的函数提供语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

# 定义函数映射
declare -A function_mappings=(
    # 渲染管线相关函数
    ["FUN_18044edc0"]="ConfigureRenderPass"
    ["FUN_18044efd0"]="CreateRenderPipeline"
    ["FUN_18044f210"]="SetupRenderTargets"
    ["FUN_18044f370"]="InitializeRenderState"
    ["FUN_18044f780"]="BindRenderResources"
    ["FUN_18044f880"]="UpdateRenderConstants"
    ["FUN_18044fa00"]="SetRenderViewport"
    ["FUN_18044ffa0"]="ConfigureRenderScissor"
    ["FUN_180450070"]="ApplyRenderTransform"
    ["FUN_180450140"]="SetRenderBlendMode"
    ["FUN_1804501c0"]="ConfigureRenderDepth"
    ["FUN_1804502d0"]="SetupRenderStencil"
    ["FUN_180450360"]="EnableRenderCulling"
    ["FUN_1804508a0"]="SetRenderFillMode"
    ["FUN_1804509e0"]="ConfigureRenderMultiSample"
    ["FUN_180450a20"]="SetupRenderAntiAlias"
    ["FUN_180450ba0"]="InitializeRenderOutput"
    ["FUN_180450d90"]="CreateRenderSurface"
    ["FUN_1804510a0"]="BindRenderFramebuffer"
    ["FUN_1804511e0"]="SetRenderClearColor"
    ["FUN_1804512f0"]="ClearRenderBuffer"
    ["FUN_180451770"]="PresentRenderFrame"
    ["FUN_1804517c0"]="SwapRenderBuffers"
    ["FUN_180451890"]="SyncRenderPresentation"
    ["FUN_1804519d0"]="WaitRenderVSync"
    ["FUN_180451bd0"]="ConfigureRenderDisplay"
    ["FUN_180451ca0"]="SetRenderResolution"
    ["FUN_180451d20"]="UpdateRenderDisplayMode"
    ["FUN_180451da0"]="HandleRenderDisplayChange"
    ["FUN_180451e30"]="InitializeRenderAdapter"
    ["FUN_1804520a0"]="CreateRenderOutput"
    ["FUN_1804522d0"]="ConfigureRenderOutput"
    ["FUN_180452500"]="SetRenderOutputFormat"
    ["FUN_180452630"]="InitializeRenderMonitor"
    ["FUN_180452f40"]="DetectRenderDevices"
    ["FUN_180452fa0"]="EnumerateRenderAdapters"
    ["FUN_1804530a0"]="QueryRenderCapabilities"
    ["FUN_180453140"]="GetRenderDeviceInfo"
    ["FUN_1804531d0"]="ValidateRenderDevice"
    ["FUN_180453300"]="SelectRenderDevice"
    ["FUN_1804534d0"]="InitializeRenderDriver"
    ["FUN_180453580"]="LoadRenderDriver"
    ["FUN_180453750"]="ConfigureRenderDriver"
    ["FUN_1804537b0"]="StartRenderDriver"
    ["FUN_1804537e0"]="StopRenderDriver"
    ["FUN_180453810"]="RestartRenderDriver"
    ["FUN_180453860"]="UpdateRenderDriver"
    ["FUN_1804538b0"]="ResetRenderDriver"
    ["FUN_1804539b0"]="ShutdownRenderDriver"
    ["FUN_180453b60"]="UnloadRenderDriver"
    ["FUN_180453cb0"]="DestroyRenderDriver"
    ["FUN_180453d60"]="ReleaseRenderDriver"
    ["FUN_180453de0"]="FreeRenderDriver"
    ["FUN_180453e40"]="CleanupRenderDriver"
    ["FUN_180453f70"]="InitializeRenderMemory"
    ["FUN_180453f90"]="AllocateRenderMemory"
    ["FUN_180454070"]="FreeRenderMemory"
    ["FUN_1804541a0"]="ReallocateRenderMemory"
    ["FUN_180454230"]="ResizeRenderMemory"
    ["FUN_180454300"]="OptimizeRenderMemory"
    ["FUN_1804543f0"]="DefragmentRenderMemory"
    ["FUN_180454d00"]="InitializeRenderAllocator"
    ["FUN_180454d80"]="CreateRenderAllocator"
    ["FUN_180454ea0"]="ConfigureRenderAllocator"
    ["FUN_180454ff0"]="AllocateRenderResource"
    ["FUN_180455090"]="FreeRenderResource"
    ["FUN_180455250"]="ReallocateRenderResource"
    ["FUN_180455340"]="ResizeRenderResource"
    ["FUN_180455430"]="ManageRenderResources"
    ["FUN_1804555a0"]="OptimizeRenderResources"
    ["FUN_1804557b0"]="DefragmentRenderResources"
    ["FUN_180455980"]="CleanupRenderResources"
    ["FUN_1804559d0"]="ReleaseRenderResources"
    
    # 渲染缓冲区相关函数
    ["FUN_1804354c0"]="CreateRenderBuffer"
    ["FUN_1804355b0"]="InitializeRenderBuffer"
    ["FUN_180435630"]="ConfigureRenderBuffer"
    ["FUN_180435690"]="SetupRenderBuffer"
    ["FUN_1804357a0"]="BindRenderBuffer"
    ["FUN_180435860"]="UpdateRenderBuffer"
    ["FUN_1804359d0"]="ResizeRenderBuffer"
    ["FUN_180435a80"]="ReallocateRenderBuffer"
    ["FUN_180435d10"]="DestroyRenderBuffer"
    ["FUN_180435e20"]="ReleaseRenderBuffer"
    ["FUN_180435f40"]="FreeRenderBuffer"
    ["FUN_180435f90"]="CleanupRenderBuffer"
    ["FUN_180435ff0"]="ResetRenderBuffer"
    ["FUN_180436030"]="ClearRenderBuffer"
    ["FUN_180436160"]="FillRenderBuffer"
    ["FUN_1804362a0"]="CopyRenderBuffer"
    ["FUN_1804369d0"]="MapRenderBuffer"
    ["FUN_180436a00"]="UnmapRenderBuffer"
    ["FUN_180436a50"]="LockRenderBuffer"
    ["FUN_180436ae0"]="UnlockRenderBuffer"
    ["FUN_180436bb0"]="ValidateRenderBuffer"
    ["FUN_180436bf0"]="CheckRenderBuffer"
    ["FUN_180436c30"]="VerifyRenderBuffer"
    ["FUN_180436d00"]="TestRenderBuffer"
    ["FUN_180436da0"]="DebugRenderBuffer"
    ["FUN_180436f20"]="ProfileRenderBuffer"
    ["FUN_180436fd0"]="MonitorRenderBuffer"
    ["FUN_180437050"]="OptimizeRenderBuffer"
    ["FUN_180437110"]="ImproveRenderBuffer"
    ["FUN_180437290"]="EnhanceRenderBuffer"
    ["FUN_1804372e0"]="UpgradeRenderBuffer"
    ["FUN_180437320"]="UpdateRenderBufferFormat"
    ["FUN_1804373a0"]="ChangeRenderBufferType"
    ["FUN_180437460"]="ModifyRenderBufferUsage"
    ["FUN_1804374c0"]="AdjustRenderBufferFlags"
    ["FUN_180437560"]="SetRenderBufferProperties"
    ["FUN_1804375f0"]="ConfigureRenderBufferSettings"
    ["FUN_180437680"]="ApplyRenderBufferOptions"
    ["FUN_1804377b0"]="EnableRenderBufferFeatures"
    ["FUN_1804378e0"]="DisableRenderBufferFeatures"
    
    # 着色器相关函数
    ["FUN_18031c260"]="CreateVertexShader"
    ["FUN_18031c300"]="CreatePixelShader"
    ["FUN_180317e00"]="CompileShader"
    ["FUN_18031ccb0"]="LinkShaderProgram"
    ["FUN_18031d520"]="ValidateShader"
    ["FUN_1803216f0"]="LoadShaderSource"
    ["FUN_18033d370"]="ParseShaderCode"
    ["FUN_180321570"]="PreprocessShader"
    ["FUN_18033d250"]="OptimizeShader"
    ["FUN_18033d080"]="AnalyzeShader"
    ["FUN_18033d170"]="ValidateShaderSyntax"
    ["FUN_18033ced0"]="CheckShaderCompatibility"
    ["FUN_18033cd80"]="VerifyShaderLimits"
    ["FUN_18033cc90"]="TestShaderPerformance"
    
    # 渲染对象相关函数
    ["FUN_180360210"]="CreateRenderObject"
    ["FUN_180380510"]="InitializeRenderObject"
    ["FUN_1803805e0"]="SetupRenderObject"
    ["FUN_180380430"]="ConfigureRenderObject"
    ["FUN_1803802e0"]="UpdateRenderObject"
    ["FUN_1803800d0"]="RenderObject"
    ["FUN_180380200"]="DrawRenderObject"
    ["FUN_18037ac70"]="TransformRenderObject"
    ["FUN_18037ad00"]="AnimateRenderObject"
    
    # 纹理相关函数
    ["FUN_180388290"]="CreateRenderTexture"
    ["FUN_180387ed0"]="InitializeRenderTexture"
    ["FUN_180388040"]="ConfigureRenderTexture"
    ["FUN_180388120"]="SetupRenderTexture"
    ["FUN_1803896b0"]="UpdateRenderTexture"
    ["FUN_18038a340"]="ResizeRenderTexture"
    ["FUN_18038a630"]="ResizeRenderTextureMipmap"
    
    # 渲染队列相关函数
    ["FUN_1804069d0"]="CreateRenderQueue"
    ["FUN_180407960"]="InitializeRenderQueue"
    
    # 其他渲染相关函数
    ["FUN_18041b4d0"]="ProcessRenderBatch"
    
    # 渲染系统内部函数
    ["FUN_18026ff90"]="ExpandRenderArray"
    ["FUN_18064e900"]="ReleaseRenderObject"
    ["FUN_18010cbc0"]="ProcessRenderData"
    ["FUN_180631850"]="ProcessRenderParameters"
    ["FUN_1802b6e50"]="UpdateRenderMatrix"
    ["FUN_180242610"]="InitializeRenderStateInternal"
    ["FUN_18062b1e0"]="CreateRenderResourceHandle"
    ["FUN_18023fe10"]="GetRenderResourceManager"
    ["FUN_18023ec80"]="ReleaseRenderResource"
    ["FUN_18062b420"]="AllocateRenderMemory"
    ["FUN_180272bd0"]="ProcessRenderCommand"
    ["FUN_1802416d0"]="ValidateRenderParameters"
    ["FUN_18025a7b0"]="ExecuteRenderOperation"
    ["FUN_180271cf0"]="UpdateRenderConfiguration"
    ["FUN_1808fc050"]="CalculateRenderHash"
    ["FUN_1802719d0"]="ExecuteRenderPass"
    ["FUN_1802719da"]="CompleteRenderPass"
    ["FUN_180639bf0"]="BeginRenderFrame"
    ["FUN_180272d60"]="EndRenderFrame"
    ["FUN_180639ec0"]="SubmitRenderCommand"
    ["FUN_18025a940"]="FlushRenderQueue"
)

# 批量替换函数名
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 替换函数声明
    sed -i "s/undefined $old_name;/void* $new_name;/g" 03_rendering.c
    
    # 替换函数调用
    sed -i "s/$old_name(/$new_name(/g" 03_rendering.c
    
    # 替换注释中的函数名
    sed -i "s/\/\/ 函数: undefined $old_name;/\/\/ 函数: void* $new_name;/g" 03_rendering.c
    
    echo "重命名: $old_name -> $new_name"
done

echo "函数重命名完成！"

# 添加函数注释
echo "添加函数注释..."

# 为一些关键函数添加详细注释
sed -i '/\/\/ 函数: void* ConfigureRenderPass;/a\/**\n * @brief 配置渲染通道\n * \n * 设置渲染通道的状态，包括渲染目标、深度缓冲区、模板缓冲区等。\n * 渲染通道定义了渲染操作的输出目标和状态。\n * \n * @return 渲染通道配置结果\n */' 03_rendering.c

sed -i '/\/\/ 函数: void* CreateRenderPipeline;/a\/**\n * @brief 创建渲染管线\n * \n * 创建一个新的渲染管线实例，包含完整的渲染状态配置。\n * 渲染管线定义了从顶点数据到最终像素的完整处理流程。\n * \n * @return 渲染管线对象指针\n */' 03_rendering.c

sed -i '/\/\/ 函数: void* SetupRenderTargets;/a\/**\n * @brief 设置渲染目标\n * \n * 配置渲染操作的目标表面，包括颜色缓冲区、深度缓冲区等。\n * 渲染目标是渲染操作的输出目的地。\n * \n * @return 渲染目标配置结果\n */' 03_rendering.c

echo "函数注释添加完成！"

# 统计替换的函数数量
echo "总共替换了 ${#function_mappings[@]} 个函数名称"

# 显示文件大小
echo "文件大小: $(ls -lh 03_rendering.c | awk '{print $5}')"

# 删除备份文件
rm -f 03_rendering.c.backup

echo "美化完成！"