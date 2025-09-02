#!/bin/bash

# UI系统字符串常量美化脚本
# 为逆向工程生成的UNK_180a3e*变量名提供语义化名称

echo "开始美化UI系统字符串常量变量名..."

# 美化主要的字符串常量变量
sed -i 's/&UNK_180a3e1a0/&UISystemConfigStringViewport/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e160/&UISystemConfigStringWindow/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e178/&UISystemConfigStringFullscreen/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e150/&UISystemConfigStringDisplay/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e294/&UISystemConfigStringResolution/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e248/&UISystemConfigStringRenderer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e270/&UISystemConfigStringGraphics/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e280/&UISystemConfigStringShader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e2e8/&UISystemConfigStringTexture/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e260/&UISystemConfigStringBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e224/&UISystemConfigStringMemory/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e300/&UISystemConfigStringPipeline/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e2c8/&UISystemConfigStringVertex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e2d8/&UISystemConfigStringIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e230/&UISystemConfigStringFrame/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a1022c/&UISystemConfigStringSync/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e1e0/&UISystemConfigStringThread/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e148/&UISystemConfigStringLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e310/&UISystemConfigStringEvent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e378/&UISystemConfigStringInput/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e3d8/&UISystemConfigStringKeyboard/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e3f0/&UISystemConfigStringMouse/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3c07c/&UISystemConfigStringController/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e470/&UISystemConfigStringAudio/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e408/&UISystemConfigStringNetwork/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e418/&UISystemConfigStringSteam/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/&UNK_180a3e440/&UISystemConfigStringVideo/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化标签变量
sed -i 's/LAB_180655bdf:/UISystemConfigLabelViewport:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655bea:/UISystemConfigLabelWindow:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655685:/UISystemConfigLabelDisplay:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655761:/UISystemConfigLabelFullscreen:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_1806557d3:/UISystemConfigLabelResolution:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655d38:/UISystemConfigLabelRenderer:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655911:/UISystemConfigLabelGraphics:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_1806559dc:/UISystemConfigLabelShader:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655a80:/UISystemConfigLabelTexture:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180655683:/UISystemConfigLabelBuffer:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统字符串常量变量名美化完成"