#!/bin/bash

# 美化03_rendering.c文件中的DAT_变量名
# 将DAT_变量替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

# 替换DAT_变量名为有意义的名称
sed -i 's/DAT_180a16c38/RenderSystemDefaultNameString/g' 03_rendering.c
sed -i 's/DAT_180a1cf50/RenderSystemContextNameString/g' 03_rendering.c
sed -i 's/DAT_180a1cf38/RenderSystemStencilNameString/g' 03_rendering.c
sed -i 's/DAT_180a1d218/RenderSystemDepthNameString/g' 03_rendering.c
sed -i 's/DAT_180a1d220/RenderSystemBufferNameString/g' 03_rendering.c
sed -i 's/DAT_180a1d578/RenderSystemTextureNameString/g' 03_rendering.c
sed -i 's/DAT_180a1d570/RenderSystemShaderNameString/g' 03_rendering.c

echo "DAT_变量美化完成"