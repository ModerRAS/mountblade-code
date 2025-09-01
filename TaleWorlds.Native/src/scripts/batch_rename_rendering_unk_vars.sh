#!/bin/bash

# 渲染系统UNK_变量重命名脚本
# 该脚本用于将03_rendering.c文件中的UNK_变量重命名为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原文件
cp "$FILE" "$FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 根据上下文重命名UNK_变量
# 渲染对象状态相关
sed -i 's/undefined UNK_180446530;/undefined RenderObjectStateData;/g' "$FILE"
sed -i 's/undefined UNK_180446550;/undefined RenderObjectContextData;/g' "$FILE"
sed -i 's/undefined UNK_180446560;/undefined RenderMaterialPropertiesData;/g' "$FILE"
sed -i 's/undefined UNK_1804465b0;/undefined RenderTransformData;/g' "$FILE"
sed -i 's/undefined UNK_180446600;/undefined RenderTransformMatrixData;/g' "$FILE"
sed -i 's/undefined UNK_180446900;/undefined RenderTransformQuaternionData;/g' "$FILE"

# 光照系统相关
sed -i 's/undefined UNK_180446940;/undefined RenderLightingData;/g' "$FILE"
sed -i 's/undefined UNK_180446950;/undefined RenderCameraData;/g' "$FILE"

# 视口和裁剪相关
sed -i 's/undefined UNK_1804469d0;/undefined RenderViewportData;/g' "$FILE"
sed -i 's/undefined UNK_1804469e0;/undefined RenderScissorData;/g' "$FILE"

# 混合和深度相关
sed -i 's/undefined UNK_180446a20;/undefined RenderBlendingData;/g' "$FILE"
sed -i 's/undefined UNK_180446a40;/undefined RenderDepthData;/g' "$FILE"
sed -i 's/undefined UNK_180446b10;/undefined RenderStencilData;/g' "$FILE"

# 剔除和着色器相关
sed -i 's/undefined UNK_180446e00;/undefined RenderCullingData;/g' "$FILE"
sed -i 's/undefined UNK_180446e10;/undefined RenderShaderData;/g' "$FILE"
sed -i 's/undefined UNK_180446e20;/undefined RenderResourceData;/g' "$FILE"
sed -i 's/undefined UNK_180446e30;/undefined RenderDeviceData;/g' "$FILE"
sed -i 's/undefined UNK_180446e50;/undefined RenderContextData;/g' "$FILE"
sed -i 's/undefined UNK_180446e60;/undefined ShaderSystemData;/g' "$FILE"
sed -i 's/undefined UNK_180446f90;/undefined VertexBufferData;/g' "$FILE"

# 管线状态相关
sed -i 's/undefined UNK_180447010;/undefined RenderPipelineStateData;/g' "$FILE"
sed -i 's/undefined UNK_180447020;/undefined VertexShaderData;/g' "$FILE"
sed -i 's/undefined UNK_1804470c0;/undefined VertexShaderCompiledData;/g' "$FILE"
sed -i 's/undefined UNK_180447110;/undefined VertexShaderCompiledCode;/g' "$FILE"

# 纹理和材质相关
sed -i 's/undefined UNK_1804473a0;/undefined TextureData;/g' "$FILE"
sed -i 's/undefined UNK_1804475b0;/undefined MaterialData;/g' "$FILE"

# 缓冲区管理相关
sed -i 's/undefined UNK_180447c80;/undefined BufferManagerData;/g' "$FILE"
sed -i 's/undefined UNK_180447c90;/undefined BufferPoolData;/g' "$FILE"
sed -i 's/undefined UNK_180447d20;/undefined BufferAllocationData;/g' "$FILE"
sed -i 's/undefined UNK_180447d30;/undefined BufferDescriptorData;/g' "$FILE"
sed -i 's/undefined UNK_180447dc0;/undefined BufferMemoryData;/g' "$FILE"

# 渲染目标相关
sed -i 's/undefined UNK_1804482a0;/undefined RenderTargetData;/g' "$FILE"
sed -i 's/undefined UNK_1804482b0;/undefined RenderTargetViewData;/g' "$FILE"
sed -i 's/undefined UNK_1804482e0;/undefined RenderTargetDescriptorData;/g' "$FILE"
sed -i 's/undefined UNK_180448370;/undefined RenderTargetConfigData;/g' "$FILE"

# 深度模板相关
sed -i 's/undefined UNK_180448400;/undefined DepthStencilData;/g' "$FILE"
sed -i 's/undefined UNK_180448410;/undefined DepthStencilViewData;/g' "$FILE"

# 常量缓冲区相关
sed -i 's/undefined UNK_1804497e0;/undefined ConstantBufferData;/g' "$FILE"
sed -i 's/undefined UNK_180449820;/undefined ConstantBufferViewData;/g' "$FILE"
sed -i 's/undefined UNK_180449830;/undefined ConstantBufferDescriptorData;/g' "$FILE"
sed -i 's/undefined UNK_180449840;/undefined ConstantBufferConfigData;/g' "$FILE"

# 采样器相关
sed -i 's/undefined UNK_180449920;/undefined SamplerData;/g' "$FILE"
sed -i 's/undefined UNK_180449be0;/undefined SamplerStateData;/g' "$FILE"
sed -i 's/undefined UNK_180449bf0;/undefined SamplerDescriptorData;/g' "$FILE"

# 输入装配相关
sed -i 's/undefined UNK_18044a390;/undefined InputAssemblyData;/g' "$FILE"
sed -i 's/undefined UNK_18044a7c0;/undefined InputLayoutData;/g' "$FILE"
sed -i 's/undefined UNK_18044a7d0;/undefined InputLayoutDescriptorData;/g' "$FILE"
sed -i 's/undefined UNK_18044a7e0;/undefined InputLayoutConfigData;/g' "$FILE"
sed -i 's/undefined UNK_18044a7f0;/undefined InputLayoutElementData;/g' "$FILE"
sed -i 's/undefined UNK_18044a800;/undefined InputLayoutAttributeData;/g' "$FILE"

echo "渲染系统UNK_变量重命名完成"