#!/bin/bash

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 批量替换UNK变量为SystemConfigurationBlock
sed -i 's/undefined UNK_180a39f98;/undefined SystemConfigurationBlock4;/g' 06_utilities.c
sed -i 's/undefined UNK_180a39fb0;/undefined SystemConfigurationBlock5;/g' 06_utilities.c
sed -i 's/undefined UNK_180a39fc0;/undefined SystemConfigurationBlock6;/g' 06_utilities.c
sed -i 's/undefined UNK_180a39fe0;/undefined SystemConfigurationBlock7;/g' 06_utilities.c
sed -i 's/undefined UNK_180a39ff8;/undefined SystemConfigurationBlock8;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a018;/undefined SystemConfigurationBlock9;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a038;/undefined SystemConfigurationBlock10;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a048;/undefined SystemConfigurationBlock11;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a058;/undefined SystemConfigurationBlock12;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a068;/undefined SystemConfigurationBlock13;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a078;/undefined SystemConfigurationBlock14;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a098;/undefined SystemConfigurationBlock15;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a0b8;/undefined SystemConfigurationBlock16;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a0d0;/undefined SystemConfigurationBlock17;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a0f0;/undefined SystemConfigurationBlock18;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a118;/undefined SystemConfigurationBlock19;/g' 06_utilities.c
sed -i 's/undefined UNK_180a3a140;/undefined SystemConfigurationBlock20;/g' 06_utilities.c

echo "批量替换完成"