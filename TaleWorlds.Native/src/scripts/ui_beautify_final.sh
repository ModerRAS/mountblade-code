#!/bin/bash

# UI系统变量美化脚本 - 精确替换版本
# 用于替换04_ui_system.c文件中的逆向工程变量名

echo "开始美化UI系统变量名..."

# 执行主要变量替换
sed -i 's/UNK_1803f60a0/UiSystemData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180655e50/UiWindowData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180084650/UiWidgetData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180655f30/UiControlData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1806561b0/UiEventData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1806561c0/UiRenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180150380/UiTextureData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180656100/UiFontData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180656330/UiShaderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180656320/UiMaterialData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180656700/UiAnimationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180046680/UiLayoutData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180046230/UiStyleData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a16f70/UiResourceTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1809fe62c/UiValidationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3ddc0/UiSystemConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/DAT_180a3dda8/UiDefaultConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3deb8/UiSystemConfig2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3c07c/UiSystemName/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e030/UiSystemInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e180/UiFontName/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e230/UiFontName2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1f8/UiFontName3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e210/UiFontName4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1b0/UiFontName5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1c8/UiFontName6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1a0/UiFontName7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e160/UiFontName8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e178/UiFontTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e150/UiFontName9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e248/UiFontName10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统变量名美化完成"