#!/bin/bash

# 批量替换安全相关常量变量名
sed -i 's/_DAT_180bf00a8/SecurityXorConstant/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "安全常量变量名替换完成"