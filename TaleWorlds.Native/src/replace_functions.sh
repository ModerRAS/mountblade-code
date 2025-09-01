#!/bin/bash

# 批量重命名渲染系统中的FUN_180函数
# 使用sed命令进行替换

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 基础渲染函数
sed -i 's/FUN_180440e00/BindShaderProgram/g' 03_rendering.c
sed -i 's/FUN_180440e70/SetRenderState/g' 03_rendering.c
sed -i 's/FUN_180440f30/CreateIndexBuffer/g' 03_rendering.c
sed -i 's/FUN_180441070/DrawPrimitives/g' 03_rendering.c
sed -i 's/FUN_1804410a0/ClearRenderTarget/g' 03_rendering.c
sed -i 's/FUN_180441110/SetViewport/g' 03_rendering.c
sed -i 's/FUN_180441180/CreateTexture/g' 03_rendering.c
sed -i 's/FUN_180441260/BindTexture/g' 03_rendering.c
sed -i 's/FUN_180441420/CreateShader/g' 03_rendering.c
sed -i 's/FUN_1804414d0/CompileShader/g' 03_rendering.c
sed -i 's/FUN_1804415d0/LinkShaderProgram/g' 03_rendering.c
sed -i 's/FUN_180441640/SetDepthTest/g' 03_rendering.c
sed -i 's/FUN_180441730/SetBlendMode/g' 03_rendering.c
sed -i 's/FUN_1804417b0/SetStencilTest/g' 03_rendering.c
sed -i 's/FUN_180441830/CreateFramebuffer/g' 03_rendering.c
sed -i 's/FUN_180441890/BindFramebuffer/g' 03_rendering.c
sed -i 's/FUN_1804418e0/CreateRenderbuffer/g' 03_rendering.c
sed -i 's/FUN_180441910/CreateSampler/g' 03_rendering.c
sed -i 's/FUN_180441950/BindSampler/g' 03_rendering.c
sed -i 's/FUN_180441a00/CreateConstantBuffer/g' 03_rendering.c
sed -i 's/FUN_180441c50/UpdateConstantBuffer/g' 03_rendering.c
sed -i 's/FUN_180441cc0/CreateVertexArray/g' 03_rendering.c
sed -i 's/FUN_180441dd0/BindVertexArray/g' 03_rendering.c
sed -i 's/FUN_180441e10/EnableVertexAttribute/g' 03_rendering.c
sed -i 's/FUN_180441e50/DisableVertexAttribute/g' 03_rendering.c
sed -i 's/FUN_180441e90/SetVertexAttributePointer/g' 03_rendering.c
sed -i 's/FUN_180441f60/CreateUniformBuffer/g' 03_rendering.c
sed -i 's/FUN_180441fc0/BindUniformBuffer/g' 03_rendering.c
sed -i 's/FUN_180442020/SetUniformValue/g' 03_rendering.c
sed -i 's/FUN_1804420c0/CreateShaderStorageBuffer/g' 03_rendering.c
sed -i 's/FUN_180442180/BindShaderStorageBuffer/g' 03_rendering.c
sed -i 's/FUN_1804422a0/CreateAtomicCounterBuffer/g' 03_rendering.c
sed -i 's/FUN_180442370/BindAtomicCounterBuffer/g' 03_rendering.c
sed -i 's/FUN_180442450/CreateTransformFeedbackBuffer/g' 03_rendering.c
sed -i 's/FUN_1804424d0/BindTransformFeedbackBuffer/g' 03_rendering.c
sed -i 's/FUN_180442560/BeginTransformFeedback/g' 03_rendering.c
sed -i 's/FUN_180442670/EndTransformFeedback/g' 03_rendering.c
sed -i 's/FUN_180442720/PauseTransformFeedback/g' 03_rendering.c
sed -i 's/FUN_180442860/ResumeTransformFeedback/g' 03_rendering.c
sed -i 's/FUN_180442950/CreateQuery/g' 03_rendering.c
sed -i 's/FUN_1804429f0/BeginQuery/g' 03_rendering.c
sed -i 's/FUN_180442b30/EndQuery/g' 03_rendering.c
sed -i 's/FUN_180442d10/GetQueryResult/g' 03_rendering.c
sed -i 's/FUN_180442e00/CreateSync/g' 03_rendering.c
sed -i 's/FUN_180443000/WaitSync/g' 03_rendering.c
sed -i 's/FUN_180443080/SignalSync/g' 03_rendering.c
sed -i 's/FUN_1804431c0/CreateFence/g' 03_rendering.c
sed -i 's/FUN_180443320/WaitFence/g' 03_rendering.c
sed -i 's/FUN_180443510/SignalFence/g' 03_rendering.c
sed -i 's/FUN_180443630/CreateEvent/g' 03_rendering.c
sed -i 's/FUN_180443680/TriggerEvent/g' 03_rendering.c
sed -i 's/FUN_180443700/WaitEvent/g' 03_rendering.c
sed -i 's/FUN_180443770/CreateSemaphore/g' 03_rendering.c
sed -i 's/FUN_180443820/WaitSemaphore/g' 03_rendering.c
sed -i 's/FUN_180443930/SignalSemaphore/g' 03_rendering.c
sed -i 's/FUN_180443a40/CreateTimerQuery/g' 03_rendering.c
sed -i 's/FUN_180443aa0/BeginTimerQuery/g' 03_rendering.c
sed -i 's/FUN_180443b00/EndTimerQuery/g' 03_rendering.c
sed -i 's/FUN_180443b40/GetTimerQueryResult/g' 03_rendering.c
sed -i 's/FUN_180443b80/CreateOcclusionQuery/g' 03_rendering.c
sed -i 's/FUN_180443d10/BeginOcclusionQuery/g' 03_rendering.c
sed -i 's/FUN_180443d70/EndOcclusionQuery/g' 03_rendering.c
sed -i 's/FUN_180443df0/GetOcclusionQueryResult/g' 03_rendering.c
sed -i 's/FUN_180443f80/CreatePipelineStatisticsQuery/g' 03_rendering.c
sed -i 's/FUN_180443ff0/BeginPipelineStatisticsQuery/g' 03_rendering.c
sed -i 's/FUN_180444030/EndPipelineStatisticsQuery/g' 03_rendering.c
sed -i 's/FUN_180444070/GetPipelineStatisticsQueryResult/g' 03_rendering.c
sed -i 's/FUN_180444100/CreateConditionalRender/g' 03_rendering.c
sed -i 's/FUN_180444200/BeginConditionalRender/g' 03_rendering.c
sed -i 's/FUN_180444280/EndConditionalRender/g' 03_rendering.c
sed -i 's/FUN_1804442c0/CreateMemoryBarrier/g' 03_rendering.c
sed -i 's/FUN_1804442e0/ExecuteMemoryBarrier/g' 03_rendering.c
sed -i 's/FUN_180444370/CreateTextureBarrier/g' 03_rendering.c
sed -i 's/FUN_1804443c0/CreateBufferBarrier/g' 03_rendering.c
sed -i 's/FUN_180444410/CreateImageBarrier/g' 03_rendering.c
sed -i 's/FUN_1804445b0/CreateComputeShader/g' 03_rendering.c
sed -i 's/FUN_180444600/DispatchComputeShader/g' 03_rendering.c
sed -i 's/FUN_180444700/CreateGeometryShader/g' 03_rendering.c
sed -i 's/FUN_1804447c0/CreateHullShader/g' 03_rendering.c
sed -i 's/FUN_1804448a0/CreateDomainShader/g' 03_rendering.c
sed -i 's/FUN_1804449a0/CreateTessellationControl/g' 03_rendering.c
sed -i 's/FUN_180444a20/CreateTessellationEvaluation/g' 03_rendering.c
sed -i 's/FUN_180444b70/CreateFeedbackBuffer/g' 03_rendering.c
sed -i 's/FUN_180444dd0/CreateIndirectDrawBuffer/g' 03_rendering.c
sed -i 's/FUN_180444e90/ExecuteIndirectDraw/g' 03_rendering.c

echo "基础渲染函数重命名完成"