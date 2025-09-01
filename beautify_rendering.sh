#!/bin/bash

# 美化03_rendering.c文件中的十六进制常量
# 将魔法数字替换为语义化常量名

sed -i 's/0x73656d5f6174656d/RENDER_MAGIC_STRING_SEM_ATEM/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x5f617465426c6772/RENDER_MAGIC_STRING_BLOGRATIC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x6f74616369646e69/RENDER_MAGIC_STRING_OTACIDNI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbff0000000000000/RENDER_MAGIC_FLOAT_NAN/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbff00000/RENDER_MAGIC_FLOAT_NAN_32/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x41c64e6d/RENDER_TEXTURE_ID_XOR_KEY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xffffffef/RENDER_TEXTURE_FLAG_MASK_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xffffffe7/RENDER_TEXTURE_FLAG_MASK_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xfffffffc/RENDER_TEXTURE_SIZE_ALIGN_MASK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "完成03_rendering.c文件十六进制常量美化工作"