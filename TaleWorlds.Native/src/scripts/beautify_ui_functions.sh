#!/bin/bash

# 美化04_ui_system.c文件中的FUN_函数调用
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed命令批量替换FUN_函数调用
sed -i 's/FUN_1801c0fb0/GetUIResourcePointer/g' 04_ui_system.c
sed -i 's/FUN_1801c10f0/GetUIResourceIndex/g' 04_ui_system.c
sed -i 's/FUN_180300b10/ProcessUIResourceData/g' 04_ui_system.c
sed -i 's/FUN_180285c90/ProcessUITextureData/g' 04_ui_system.c
sed -i 's/FUN_1801503e0/GetUISemaphoreCount/g' 04_ui_system.c
sed -i 's/FUN_1801c1690/GetUIAnimationData/g' 04_ui_system.c
sed -i 's/FUN_18063b720/ProcessUIShaderParameters/g' 04_ui_system.c
sed -i 's/FUN_18022b240/ProcessUIVertexBuffer/g' 04_ui_system.c
sed -i 's/FUN_180300bf0/ProcessUIBufferOperation/g' 04_ui_system.c
sed -i 's/FUN_18065f210/InitializeUIComponent/g' 04_ui_system.c
sed -i 's/FUN_1801aa0f0/ProcessUIRenderData/g' 04_ui_system.c
sed -i 's/FUN_1802e9180/ProcessUIRenderQueue/g' 04_ui_system.c
sed -i 's/FUN_18066d310/UpdateUIContext/g' 04_ui_system.c
sed -i 's/FUN_18066e8f0/AllocateUIMemory/g' 04_ui_system.c
sed -i 's/FUN_18066ef00/ProcessUIEvent/g' 04_ui_system.c
sed -i 's/FUN_18066d210/GetUIEventStatus/g' 04_ui_system.c
sed -i 's/FUN_18066d130/ProcessUIEventQueue/g' 04_ui_system.c
sed -i 's/FUN_18066eea0/GetUIEventData/g' 04_ui_system.c
sed -i 's/FUN_18066d370/SetUIProperty/g' 04_ui_system.c
sed -i 's/FUN_18066e500/ProcessUIAnimation/g' 04_ui_system.c
sed -i 's/FUN_18066f080/CreateUISemaphore/g' 04_ui_system.c
sed -i 's/FUN_18066ef60/GetUIElementInfo/g' 04_ui_system.c
sed -i 's/FUN_18066efd0/GetUIElementSize/g' 04_ui_system.c
sed -i 's/FUN_18066e7a0/InitializeUISystem/g' 04_ui_system.c
sed -i 's/FUN_180697e60/CreateUIBuffer/g' 04_ui_system.c
sed -i 's/FUN_180697ed0/ReleaseUIBuffer/g' 04_ui_system.c
sed -i 's/FUN_18069c540/CopyUIBufferData/g' 04_ui_system.c
sed -i 's/FUN_18066e960/AllocateUIPool/g' 04_ui_system.c
sed -i 's/FUN_180671080/ProcessUIRenderOperation/g' 04_ui_system.c
sed -i 's/FUN_180698e20/ProcessUIRenderContext/g' 04_ui_system.c
sed -i 's/FUN_18066e9b0/GetUICurrentSemaphore/g' 04_ui_system.c
sed -i 's/FUN_18069a490/GetUIResourceCount/g' 04_ui_system.c
sed -i 's/FUN_18069cf80/GetUIResourceStatus/g' 04_ui_system.c
sed -i 's/FUN_18069d280/ProcessUITransformOperation/g' 04_ui_system.c
sed -i 's/FUN_18069c200/ProcessUIRenderState/g' 04_ui_system.c
sed -i 's/FUN_18069de90/UpdateUIRenderState/g' 04_ui_system.c
sed -i 's/FUN_18069c820/ProcessUIVertexData/g' 04_ui_system.c
sed -i 's/FUN_18069c710/ProcessUIIndexData/g' 04_ui_system.c
sed -i 's/FUN_18066f3e0/ProcessUIMatrixOperation/g' 04_ui_system.c
sed -i 's/FUN_18069cb40/ProcessUIScaleOperation/g' 04_ui_system.c
sed -i 's/FUN_18069ca00/ProcessUIRotationOperation/g' 04_ui_system.c
sed -i 's/FUN_18069cad0/ProcessUITranslationOperation/g' 04_ui_system.c
sed -i 's/FUN_18069c900/ProcessUIProjectionOperation/g' 04_ui_system.c
sed -i 's/FUN_18069ca80/ProcessUIColorOperation/g' 04_ui_system.c
sed -i 's/FUN_18069c990/ProcessUITextureOperation/g' 04_ui_system.c

echo "FUN_函数调用替换完成"