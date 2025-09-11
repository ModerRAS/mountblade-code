#!/bin/bash

# 美化渲染系统中的变量名

# 替换一些常见的渲染系统变量
sed -i 's/UNK_180a2a43c/RenderSystemStringDelimiter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a063b8/RenderSystemChecksumDataTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a36d78/RenderMaterialConfigurationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a1a278/RenderMaterialObjectDefaultConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a1a2f0/RenderMaterialObjectEmptyConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a1b470/RenderMaterialObjectBaseConfigA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a1b4b0/RenderMaterialObjectBaseConfigB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a1b430/RenderMaterialObjectInitialConfig/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/UNK_180a1ab48/RenderSystemDefaultIndexTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "变量美化完成"