#!/bin/bash

# 美化ProcessRenderData函数中的变量名
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换ProcessRenderData函数中的变量名
sed -i 's/ThirdValue/transformData/g' 03_rendering.c
sed -i 's/LoopCounter/loopCounter/g' 03_rendering.c
sed -i 's/ContextOffsetPointer/contextOffsetPointer/g' 03_rendering.c
sed -i 's/ScaleFactor/scaleFactor/g' 03_rendering.c

echo "变量名美化完成"