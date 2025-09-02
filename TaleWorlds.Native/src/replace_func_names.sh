#!/bin/bash

# 批量替换 02_core_engine.c 文件中的 func_0x 函数调用
# 使用 sed 命令进行批量替换

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 系统初始化和配置相关
sed -i 's/func_0x000180084e80/InitializeSystemEventTemplate/g' 02_core_engine.c
sed -i 's/func_0x000180086150/ValidateSystemConfiguration/g' 02_core_engine.c
sed -i 's/func_0x00018005c480/InitializeTimeManager/g' 02_core_engine.c
sed -i 's/func_0x0001800e7950/ConfigureSystemEvent/g' 02_core_engine.c
sed -i 's/func_0x000180074f10/InitializeSystemMemory/g' 02_core_engine.c
sed -i 's/func_0x000180112210/InitializeCoreEngine/g' 02_core_engine.c
sed -i 's/func_0x000180119790/InitializeSystemContext/g' 02_core_engine.c
sed -i 's/func_0x000180095340/InitializeStatusBuffer/g' 02_core_engine.c

# 内存管理和资源分配相关
sed -i 's/func_0x000180639d60/GetSystemDataTablePointer/g' 02_core_engine.c
sed -i 's/func_0x00018024c420/AllocateMemoryBuffer/g' 02_core_engine.c
sed -i 's/func_0x000180220c90/GetMemoryAllocationIndex/g' 02_core_engine.c
sed -i 's/func_0x00018010cbb0/GetStatusBuffer/g' 02_core_engine.c
sed -i 's/func_0x0001800a1680/AllocateTargetDataStructure/g' 02_core_engine.c

# 渲染系统和图形处理相关
sed -i 's/func_0x00018010bf60/InitializeRenderer/g' 02_core_engine.c
sed -i 's/func_0x00018010bf80/ConfigureRenderer/g' 02_core_engine.c
sed -i 's/func_0x00018010bfa0/SetupRenderer/g' 02_core_engine.c
sed -i 's/func_0x00018010bfc0/SetupRendererDepth/g' 02_core_engine.c
sed -i 's/func_0x00018010bfe0/SetupRendererStencil/g' 02_core_engine.c
sed -i 's/func_0x00018010c000/SetupRendererBlend/g' 02_core_engine.c
sed -i 's/func_0x00018010c020/SetupRendererTexture/g' 02_core_engine.c
sed -i 's/func_0x00018010c040/SetupRendererShader/g' 02_core_engine.c
sed -i 's/func_0x00018010c060/SetupRendererLighting/g' 02_core_engine.c
sed -i 's/func_0x00018010c080/SetupRendererMaterial/g' 02_core_engine.c
sed -i 's/func_0x00018010c0a0/SetupRendererGeometry/g' 02_core_engine.c
sed -i 's/func_0x00018010c0c0/SetupRendererViewport/g' 02_core_engine.c
sed -i 's/func_0x00018010c0e0/SetupRendererCamera/g' 02_core_engine.c
sed -i 's/func_0x00018010c100/SetupRendererTransform/g' 02_core_engine.c
sed -i 's/func_0x00018010c120/SetupRendererAnimation/g' 02_core_engine.c
sed -i 's/func_0x00018010c140/SetupRendererParticle/g' 02_core_engine.c
sed -i 's/func_0x00018010c160/SetupRendererPostProcess/g' 02_core_engine.c
sed -i 's/func_0x00018010c180/SetupRendererShadow/g' 02_core_engine.c
sed -i 's/func_0x00018010c1a0/SetupRendererReflection/g' 02_core_engine.c
sed -i 's/func_0x00018010c1c0/SetupRendererOcclusion/g' 02_core_engine.c
sed -i 's/func_0x00018010c1e0/SetupRendererTessellation/g' 02_core_engine.c
sed -i 's/func_0x00018010c200/SetupRendererCompute/g' 02_core_engine.c
sed -i 's/func_0x00018010c220/SetupRendererRaytracing/g' 02_core_engine.c
sed -i 's/func_0x00018010c240/SetupRendererVR/g' 02_core_engine.c
sed -i 's/func_0x00018010c260/SetupRendererMSAA/g' 02_core_engine.c
sed -i 's/func_0x00018010c280/SetupRendererHDR/g' 02_core_engine.c
sed -i 's/func_0x00018010c2a0/SetupRendererDLSS/g' 02_core_engine.c
sed -i 's/func_0x00018010c2c0/SetupRendererFSR/g' 02_core_engine.c
sed -i 's/func_0x00018010c2e0/SetupRendererUpscaling/g' 02_core_engine.c
sed -i 's/func_0x00018010bc90/SetRendererParameter/g' 02_core_engine.c

# 网络通信和事件处理相关
sed -i 's/func_0x00018012e760/ProcessSystemEvent/g' 02_core_engine.c
sed -i 's/func_0x000180124080/ConfigureSystemEvent/g' 02_core_engine.c
sed -i 's/func_0x000180121e20/GetDataSize/g' 02_core_engine.c
sed -i 's/func_0x00018012d6a0/GetSystemData/g' 02_core_engine.c
sed -i 's/func_0x00018012d470/SetSystemData/g' 02_core_engine.c
sed -i 's/func_0x00018012d640/FlushSystemData/g' 02_core_engine.c
sed -i 's/func_0x00018010e7a0/GetMemoryBaseAddress/g' 02_core_engine.c
sed -i 's/func_0x000180112960/GetReturnValue/g' 02_core_engine.c
sed -i 's/func_0x000180113330/ProcessCharacterData/g' 02_core_engine.c
sed -i 's/func_0x000180113830/ProcessIntegerData/g' 02_core_engine.c
sed -i 's/func_0x000180114060/ProcessCharacterString/g' 02_core_engine.c
sed -i 's/func_0x000180114b50/CalculateDistance/g' 02_core_engine.c
sed -i 's/func_0x0001801153c0/ProcessTransformData/g' 02_core_engine.c
sed -i 's/func_0x000180115530/ProcessMatrixData/g' 02_core_engine.c
sed -i 's/func_0x00018010e570/AllocateRenderBuffer/g' 02_core_engine.c
sed -i 's/func_0x000180297170/InitializeRenderBuffer/g' 02_core_engine.c
sed -i 's/func_0x000180123d50/ProcessRenderData/g' 02_core_engine.c
sed -i 's/func_0x000180123e90/ProcessRenderTarget/g' 02_core_engine.c
sed -i 's/func_0x00018010e6d0/ConfigureRenderSettings/g' 02_core_engine.c
sed -i 's/func_0x00018010e700/ApplyRenderSettings/g' 02_core_engine.c
sed -i 's/func_0x0001801281d0/ValidateRenderConfig/g' 02_core_engine.c
sed -i 's/func_0x00018012dd90/SetRenderParameter/g' 02_core_engine.c
sed -i 's/func_0x00018012e030/GetRenderValue/g' 02_core_engine.c
sed -i 's/func_0x000180126de0/GetSystemContext/g' 02_core_engine.c
sed -i 's/func_0x00018011fc50/ProcessSystemBuffer/g' 02_core_engine.c
sed -i 's/func_0x00018022d2c0/ValidateTargetData/g' 02_core_engine.c
sed -i 's/func_0x00018008d310/CalculateSystemValue/g' 02_core_engine.c
sed -i 's/func_0x00018008d2b0/ProcessTargetData/g' 02_core_engine.c
sed -i 's/func_0x00018008d250/ProcessSourceData/g' 02_core_engine.c
sed -i 's/func_0x000180128180/CalculateFloatValue/g' 02_core_engine.c

echo "批量替换完成"