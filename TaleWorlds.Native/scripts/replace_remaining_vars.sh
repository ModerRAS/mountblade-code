#!/bin/bash

# 批量替换剩余的变量名
sed -i 's/undefined1 audio_system_initialized;/undefined audioSystemInitialized;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined1 physics_system_initialized;/undefined physicsSystemInitialized;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined1 unknown_data_180c91238;/undefined saveSystemFlag;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined1 unknown_data_180c912d8;/undefined loadSystemFlag;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_1809fd0d8;/undefined inputSystemHandler;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_1809ff9e8;/undefined objectCreationData1;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_1809ff978;/undefined objectCreationData2;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_1809ff9c0;/undefined objectCreationData3;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_1809ff990;/undefined objectCreationData4;/g' TaleWorlds.Native.dll.c

# 替换UNK_变量
sed -i 's/undefined UNK_180941b70;/undefined gameSystemData1;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined DAT_18098bc73;/undefined gameSystemData2;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a05740;/undefined networkSystemData5;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cb48;/undefined networkSystemData6;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cb60;/undefined networkSystemData7;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cb70;/undefined networkSystemData8;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cb80;/undefined networkSystemData9;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cb90;/undefined networkSystemData10;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cba8;/undefined networkSystemData11;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cbc8;/undefined networkSystemData12;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cbe0;/undefined networkSystemData13;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cbf0;/undefined networkSystemData14;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cc08;/undefined networkSystemData15;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cc10;/undefined networkSystemData16;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cc30;/undefined networkSystemData17;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cc48;/undefined networkSystemData18;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cc68;/undefined networkSystemData19;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cc88;/undefined networkSystemData20;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cca0;/undefined networkSystemData21;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0ccb8;/undefined networkSystemData22;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0ccd0;/undefined networkSystemData23;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0ccf0;/undefined networkSystemData24;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd08;/undefined networkSystemData25;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd28;/undefined networkSystemData26;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd40;/undefined networkSystemData27;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd58;/undefined networkSystemData28;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd70;/undefined networkSystemData29;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd88;/undefined networkSystemData30;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cd98;/undefined networkSystemData31;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cdb0;/undefined networkSystemData32;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cdc8;/undefined networkSystemData33;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0cde0;/undefined networkSystemData34;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined UNK_180a0ce40;/undefined networkSystemData35;/g' TaleWorlds.Native.dll.c

echo "变量名替换完成"