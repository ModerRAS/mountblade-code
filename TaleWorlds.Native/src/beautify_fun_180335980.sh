#!/bin/bash

# 美化03_rendering.c中的FUN_180335980函数变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 03_rendering.c 03_rendering.c.backup.$$

# 替换变量名
sed -i 's/UnsignedVariable2/CurveDataSignature/g' 03_rendering.c
sed -i 's/ArraySize/BufferSize/g' 03_rendering.c
sed -i 's/PropertyUnsignedValue/PropertyDataSize/g' 03_rendering.c
sed -i 's/PropertySourceNode/PropertySourcePointer/g' 03_rendering.c
sed -i 's/lStackX_18/CurveDataLength/g' 03_rendering.c
sed -i 's/lStackX_20/PropertyStartAddress/g' 03_rendering.c
sed -i 's/lStack_70/TotalDataSize/g' 03_rendering.c
sed -i 's/pCurveKeyIndex/CurveKeyBuffer/g' 03_rendering.c
sed -i 's/lStack_60/DataBufferSize/g' 03_rendering.c
sed -i 's/uStack_56/ProcessingFlags/g' 03_rendering.c

echo "变量名替换完成"