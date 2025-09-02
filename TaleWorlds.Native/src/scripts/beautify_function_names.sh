#!/bin/bash

# 美化函数名脚本
# 用于将十六进制函数名替换为语义化的函数名

sed -i 's/func_0x00018064e870/ProcessNetworkRequestData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x00018076a7d0/CalculateMemoryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x000180856540/CalculateBufferSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808cf230/SetMemoryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f62c0/InitializeMemoryManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f62a0/FreeExternalReference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f6640/ProcessStringResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f6ce0/ClearSystemBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f0200/GetStringIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f0760/CalculateLoopValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f2030/GetCharacterValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f6f90/ProcessCharacterData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f6f70/ProcessStringData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f6f80/ProcessMemoryData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f0dd0/GetMemoryIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/func_0x0001808f0e30/GetNetworkStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

echo "函数名美化完成"