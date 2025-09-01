#!/bin/bash

# 渲染系统函数重命名脚本
# 用于批量重命名03_rendering.c中的FUN_函数为语义化名称

# 渲染核心函数映射
sed -i 's/FUN_18044e0d0/InitializeRenderContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e180/CreateRenderDevice/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e2b0/SetupRenderPipeline/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e3b0/CreateSwapChain/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e4f0/InitializeCommandList/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e590/CreateRenderTargets/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e620/SetupDepthStencil/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e650/CreateVertexBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044e890/CreateIndexBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044ead0/CreateConstantBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044ed20/CreateShaderProgram/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044edc0/CompileVertexShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044efd0/CompilePixelShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044f210/LinkShaderProgram/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044f370/CreateTexture2D/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044f780/CreateSamplerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044f880/CreateRasterizerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044fa00/CreateBlendState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18044ffa0/CreateDepthStencilState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180450070/BeginRenderPass/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180450140/EndRenderPass/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804501c0/SetViewport/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804502d0/SetScissorRect/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180450360/DrawIndexed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804508a0/DrawInstanced/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804509e0/DispatchCompute/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180450a20/CopyResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180450ba0/UpdateSubresource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180450d90/MapResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804510a0/UnmapResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804511e0/GenerateMipmaps/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804512f0/ResolveSubresource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451770/CreateQueryHeap/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804517c0/BeginQuery/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451890/EndQuery/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804519d0/ResolveQueryData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451bd0/CreateFence/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451ca0/SignalFence/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451d20/WaitForFence/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451da0/SetMarker/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180451e30/BeginEvent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804520a0/EndEvent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统函数重命名完成"