#!/bin/bash

# 美化03_rendering.c文件中的变量名
# 这个脚本将批量替换非语义化的变量名为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

# 替换变量名
sed -i 's/longlong unaff_RSI;/longlong sourceBufferIndex;/g' 03_rendering.c
sed -i 's/longlong unaff_RDI;/longlong elementCount;/g' 03_rendering.c
sed -i 's/ulonglong uVar6;/ulonglong dataLength;/g' 03_rendering.c
sed -i 's/longlong lVar8;/longlong bufferOffset;/g' 03_rendering.c
sed -i 's/longlong lVar9;/longlong loopCounter;/g' 03_rendering.c

# 替换变量使用
sed -i 's/unaff_RSI/sourceBufferIndex/g' 03_rendering.c
sed -i 's/unaff_RDI/elementCount/g' 03_rendering.c
sed -i 's/uVar6/dataLength/g' 03_rendering.c
sed -i 's/lVar8/bufferOffset/g' 03_rendering.c
sed -i 's/lVar9/loopCounter/g' 03_rendering.c

# 替换其他常见非语义化变量
sed -i 's/undefined UNK_/static const RenderFunctionPtr /g' 03_rendering.c

echo "变量名美化完成"