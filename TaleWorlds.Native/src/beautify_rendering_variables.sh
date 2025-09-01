#!/bin/bash

# 美化03_rendering.c文件中的函数和变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 03_rendering.c 03_rendering.c.backup

# 美化顶点缓冲区相关的变量
sed -i 's/UNK_1804519b0/VertexLayoutDescriptor/g' 03_rendering.c
sed -i 's/UNK_180451c70/VertexAttributePointerState/g' 03_rendering.c
sed -i 's/UNK_180451c80/VertexAttributeArrayState/g' 03_rendering.c
sed -i 's/UNK_180451c90/VertexAttributeArrayControl/g' 03_rendering.c
sed -i 's/UNK_180452530/VertexBufferDescriptor/g' 03_rendering.c

# 美化索引缓冲区相关的变量
sed -i 's/UNK_180453480/IndexBufferDescriptor/g' 03_rendering.c
sed -i 's/UNK_180453730/IndexBufferDataPointer/g' 03_rendering.c
sed -i 's/UNK_180453f10/IndexBufferBindingState/g' 03_rendering.c
sed -i 's/UNK_180453f30/IndexBufferControl/g' 03_rendering.c

# 美化常量缓冲区相关的变量
sed -i 's/UNK_180454a80/ConstantBufferDescriptor/g' 03_rendering.c
sed -i 's/UNK_180454b00/ConstantBufferDataPointer/g' 03_rendering.c
sed -i 's/UNK_180455580/ConstantBufferBindingState/g' 03_rendering.c
sed -i 's/UNK_1804555a0/ConstantBufferControl/g' 03_rendering.c

# 美化着色器相关的变量
sed -i 's/UNK_180445340/ShaderCompileState/g' 03_rendering.c
sed -i 's/UNK_180445350/ShaderCacheEntry/g' 03_rendering.c
sed -i 's/UNK_180445360/ShaderLibraryHandle/g' 03_rendering.c
sed -i 's/UNK_180445370/ShaderReflectionData/g' 03_rendering.c
sed -i 's/UNK_180445470/ShaderBindingTable/g' 03_rendering.c
sed -i 's/UNK_1804454d0/ShaderParameterBlock/g' 03_rendering.c

# 美化纹理相关的变量
sed -i 's/UNK_180445550/TextureDescriptor/g' 03_rendering.c
sed -i 's/UNK_1804455b0/TextureCacheEntry/g' 03_rendering.c
sed -i 's/UNK_1804455c0/TextureDataPointer/g' 03_rendering.c
sed -i 's/UNK_1804455d0/TextureSamplerState/g' 03_rendering.c
sed -i 's/UNK_1804455e0/TextureFilterMode/g' 03_rendering.c
sed -i 's/UNK_1804455f0/TextureAddressMode/g' 03_rendering.c
sed -i 's/UNK_180445600/TextureViewHandle/g' 03_rendering.c

# 美化渲染目标相关的变量
sed -i 's/UNK_180445790/RenderTargetDescriptor/g' 03_rendering.c
sed -i 's/UNK_1804457a0/RenderTargetViewHandle/g' 03_rendering.c
sed -i 's/UNK_180445960/RenderTargetTexture/g' 03_rendering.c
sed -i 's/UNK_180445fa0/DepthBufferDescriptor/g' 03_rendering.c
sed -i 's/UNK_180445fb0/DepthBufferView/g' 03_rendering.c
sed -i 's/UNK_180445fc0/StencilBufferState/g' 03_rendering.c
sed -i 's/UNK_180445ff0/RenderPassDescriptor/g' 03_rendering.c

echo "美化完成！"