#!/bin/bash

# 批量替换03_rendering.c中的函数名
sed -i 's/FUN_18062b420/AllocateRenderMemory/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18064e900/ReleaseRenderResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180631850/ProcessRenderQueue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18064d630/ValidateRenderState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639bf0/SerializeRenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639ec0/DeserializeRenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639de0/ProcessRenderProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 美化180445开头的函数
sed -i 's/FUN_180445390/InitializeRenderPipeline/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180445970/SetupRenderState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180445a80/CreateRenderTargetView/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180445cd0/BindShaderResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180445dc0/SetVertexBufferData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180445eb0/UpdateIndexBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180445fd0/ConfigureRasterizerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446010/SetBlendState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446080/ConfigureDepthStencil/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804460c0/SetupViewport/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804460f0/SetScissorRect/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446120/DrawIndexedPrimitive/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446160/ExecuteCommandList/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804461b0/PresentFrame/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804462a0/ClearRenderTarget/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804462e0/ClearDepthStencil/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446320/SetShaderConstants/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446370/BindTextureResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446430/CreateSamplerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446480/SetupInputLayout/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446610/CompileShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446650/LinkShaderProgram/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446690/ValidateShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446760/OptimizeShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180446810/CacheShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 添加func_开头的函数替换
sed -i 's/func_0x000180079240()/GetLoopIterationCounter()/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180285f10/CalculateHashValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180285980/GetStringStatusFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018023a100/CalculateStringLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180274d30/AllocateMemoryBlock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180645570/InitializeRenderBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001800e2bf0/GetPropertyLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018024c420/GetContextPropertyLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018066bd70/GetNextMemoryBlock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018028afe0/CheckRenderStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018028b140/AllocateRenderContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018028c210/GetRenderObjectIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180120ce0/CalculateDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018028d1e0/ReleaseRenderContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018028d360/FreeRenderResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180292160/ResetRenderState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018005d390/ApplyRenderTransform/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180298bc0/ProcessRenderBatch/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018012d6a0/GetRenderTime/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180124080/SetupRenderMatrix/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180121e20/CalculateMatrixValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180074f10/SubmitRenderCommand/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180225d90/GetRenderIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018066b9a0/GetPreviousMemoryBlock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180632b30/SetupRenderPass/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001801be000/ProcessRenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x00018030a230/ExecuteRenderPass/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180282950/GetRenderObjectPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001801be740/ValidateRenderObject/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001801c2440/GetRenderObjectData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001800ba3b0/CalculateContextOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180329130/ProcessNodeData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001800773c0/ProcessRenderQueue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x000180365340/InitializeRenderQueue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001803723f0/GetCharacterValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001800adf40/ConvertToFloatValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001800840d0/GetPropertyValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/func_0x0001800a1de0/ProcessMemoryOperation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 变量名替换 - 基于使用模式分析
sed -i 's/_DAT_180c86890/g_PropertyLengthTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/_DAT_180c8a9a8/g_DataOffsetTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/_DAT_180c96850/g_RenderDataTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 临时变量名美化
sed -i 's/\bcVar[0-9]\+\b/CalculatedValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\biVar[0-9]\+\b/IndexValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\buVar[0-9]\+\b/UnsignedValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bbVar[0-9]\+\b/BooleanValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bfVar[0-9]\+\b/FloatValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bsVar[0-9]\+\b/StringValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bdVar[0-9]\+\b/DoubleValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 栈变量名美化
sed -i 's/\blStack_[0-9a-fA-F]\+\b/LocalStackVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\buStack_[0-9a-fA-F]\+\b/UnsignedStackVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bpStack_[0-9a-fA-F]\+\b/PointerStackVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\biStack_[0-9a-fA-F]\+\b/IndexStackVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 指针变量名美化
sed -i 's/\bpuStack_[0-9a-fA-F]\+\b/UnsignedPointerStackVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bppropertyLength\b/PropertyLengthPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/\bpdataSize\b/DataSizePointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "函数名和变量名美化完成"