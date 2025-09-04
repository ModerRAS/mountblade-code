#!/bin/bash

# 批量替换UI系统中的UNK_变量名为更有意义的名称
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换UNK_变量名为UIUnknownDataPointer*
sed -i 's/unknown UNK_18094b168;/void* UIUnknownDataPointer168;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b1a0;/void* UIUnknownDataPointer1a0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b130;/void* UIUnknownDataPointer130;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b3d0;/void* UIUnknownDataPointer3d0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b480;/void* UIUnknownDataPointer480;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b208;/void* UIUnknownDataPointer208;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b250;/void* UIUnknownDataPointer250;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b270;/void* UIUnknownDataPointer270;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b290;/void* UIUnknownDataPointer290;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b2b0;/void* UIUnknownDataPointer2b0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b2d0;/void* UIUnknownDataPointer2d0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b418;/void* UIUnknownDataPointer418;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b440;/void* UIUnknownDataPointer440;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b4f8;/void* UIUnknownDataPointer4f8;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b500;/void* UIUnknownDataPointer500;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b508;/void* UIUnknownDataPointer508;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b510;/void* UIUnknownDataPointer510;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b518;/void* UIUnknownDataPointer518;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b528;/void* UIUnknownDataPointer528;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b1d8;/void* UIUnknownDataPointer1d8;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b2e0;/void* UIUnknownDataPointer2e0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b300;/void* UIUnknownDataPointer300;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b358;/void* UIUnknownDataPointer358;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b368;/void* UIUnknownDataPointer368;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b3a0;/void* UIUnknownDataPointer3a0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b3b0;/void* UIUnknownDataPointer3b0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b458;/void* UIUnknownDataPointer458;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b1b8;/void* UIUnknownDataPointer1b8;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b1f8;/void* UIUnknownDataPointer1f8;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b4b0;/void* UIUnknownDataPointer4b0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b540;/void* UIUnknownDataPointer540;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b578;/void* UIUnknownDataPointer578;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b590;/void* UIUnknownDataPointer590;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b5c0;/void* UIUnknownDataPointer5c0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b608;/void* UIUnknownDataPointer608;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b6b0;/void* UIUnknownDataPointer6b0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b930;/void* UIUnknownDataPointer930;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b620;/void* UIUnknownDataPointer620;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b700;/void* UIUnknownDataPointer700;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b750;/void* UIUnknownDataPointer750;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b7b0;/void* UIUnknownDataPointer7b0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b820;/void* UIUnknownDataPointer820;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b8c8;/void* UIUnknownDataPointer8c8;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b8f0;/void* UIUnknownDataPointer8f0;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b7f8;/void* UIUnknownDataPointer7f8;/g' 04_ui_system.c
sed -i 's/unknown UNK_18094b880;/void* UIUnknownDataPointer880;/g' 04_ui_system.c

echo "批量替换完成"