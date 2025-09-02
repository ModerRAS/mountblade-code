#!/bin/bash

# 批量替换UI系统函数中的剩余变量名
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

sed -i 's/asemaphoreArrayIndex4\[/SemaphoreArrayIndex4[/g; s/intVariable8/TemporaryUInt8/g; s/auiDataSize0/UiDataSize0/g; s/aAnimationFrameIndex0/AnimationFrameIndex0/g; s/aAnimationFrameIndex2/AnimationFrameIndex2/g; s/aAnimationFrameIndex3/AnimationFrameIndex3/g; s/asemaphoreArrayIndex4/SemaphoreArrayIndex4/g' 04_ui_system.c

echo "变量名替换完成"