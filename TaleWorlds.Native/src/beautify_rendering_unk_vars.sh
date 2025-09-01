#!/bin/bash

# 批量替换渲染文件中的UNK变量
# 简化实现：使用sed命令进行变量名替换

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换材质相关的UNK变量
sed -i 's/UNK_180445550/MaterialPropertyManager/g' 03_rendering.c
sed -i 's/UNK_1804455b0/MaterialCacheManager/g' 03_rendering.c
sed -i 's/UNK_1804455c0/TextureDataProcessor/g' 03_rendering.c

# 替换采样器相关的UNK变量
sed -i 's/UNK_1804455d0/SamplerFilterMode/g' 03_rendering.c
sed -i 's/UNK_1804455e0/SamplerAddressMode/g' 03_rendering.c
sed -i 's/UNK_1804455f0/SamplerMipmapMode/g' 03_rendering.c

# 替换纹理视图相关的UNK变量
sed -i 's/UNK_180445600/TextureViewManager/g' 03_rendering.c
sed -i 's/UNK_180445790/MipmapUpdateManager/g' 03_rendering.c
sed -i 's/UNK_1804457a0/TextureBindingManager/g' 03_rendering.c

# 替换纹理过滤相关的UNK变量
sed -i 's/UNK_180445960/FilterModeManager/g' 03_rendering.c
sed -i 's/UNK_180445fa0/AddressModeManager/g' 03_rendering.c
sed -i 's/UNK_180445fb0/MipmapGenerator/g' 03_rendering.c
sed -i 's/UNK_180445fc0/TextureCompressor/g' 03_rendering.c
sed -i 's/UNK_180445ff0/TextureDecompressor/g' 03_rendering.c

echo "UNK变量替换完成"