#!/bin/bash

# 批量替换 02_core_engine.c 文件中的 UNK_ 变量为语义化名称

# 系统配置相关变量
sed -i 's/UNK_180a01430/SystemTimerConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01714/SystemTimeConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01460/SystemCounterConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01448/SystemTimeoutTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01478/SystemDataTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01470/SystemDataTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01488/SystemDataTemplateC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a0149c/SystemConfigTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a01494/SystemConfigTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_18009a070/MemoryConfigTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a015b8/SystemVersionTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a015d8/PerformanceConfigA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a015c8/PerformanceConfigB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 渲染系统相关变量
sed -i 's/UNK_18098b928/RenderDefaultTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180bd8990/RenderExceptionTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a062e0/RenderContextTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a02968/RenderConfigTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 网络系统相关变量
sed -i 's/UNK_18098bc00/NetworkEventTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05288/NetworkConfigTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a052b8/NetworkConfigTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a052a0/NetworkConfigTemplateC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 系统功能相关变量
sed -i 's/UNK_18010cb70/SystemFunctionA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_18010cb60/SystemFunctionB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180103b59/SystemDataValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_1809fd878/SystemRuntimeConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_1809fd220/SystemEventTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_1809fd150/SystemEventTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05528/SystemFlagTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05518/SystemTimeoutTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05548/SystemOperationTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05538/SystemOperationTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05570/SystemOperationTemplateC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# UI系统相关变量
sed -i 's/UNK_180a02908/UIConfigTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 渲染配置相关变量
sed -i 's/UNK_180a05558/RenderConfigTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05590/RenderConfigTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05578/RenderConfigTemplateC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a055c8/RenderConfigTemplateD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a055b8/RenderConfigTemplateE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a055f0/RenderConfigTemplateF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a055d8/RenderConfigTemplateG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05610/RenderConfigTemplateH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05600/RenderConfigTemplateI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05638/RenderConfigTemplateJ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05628/RenderConfigTemplateK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05660/RenderConfigTemplateL/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05650/RenderConfigTemplateM/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05680/RenderConfigTemplateN/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05670/RenderConfigTemplateO/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a056a0/RenderConfigTemplateP/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05690/RenderConfigTemplateQ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a056c8/RenderConfigTemplateR/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a056b8/RenderConfigTemplateS/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a056e8/RenderConfigTemplateT/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a056d8/RenderConfigTemplateU/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05710/RenderConfigTemplateV/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05700/RenderConfigTemplateW/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05740/RenderConfigTemplateX/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05728/RenderConfigTemplateY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05768/RenderConfigTemplateZ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05758/RenderConfigTemplateAA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05788/RenderConfigTemplateAB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05778/RenderConfigTemplateAC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a057b0/RenderConfigTemplateAD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05798/RenderConfigTemplateAE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a057d8/RenderConfigTemplateAF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a057c0/RenderConfigTemplateAG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a057f8/RenderConfigTemplateAH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a057e8/RenderConfigTemplateAI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05828/RenderConfigTemplateAJ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05808/RenderConfigTemplateAK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05850/RenderConfigTemplateAL/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05840/RenderConfigTemplateAM/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UNK_180a05878/RenderConfigTemplateAN/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "批量替换完成"