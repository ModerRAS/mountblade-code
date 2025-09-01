#!/bin/bash

# 美化99_unmatched_functions.c文件中的函数调用
# 这个脚本将批量重命名FUN_函数调用为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换常见的FUN_函数调用为语义化名称
sed -i 's/FUN_1808fc050/ValidateSecurityKey/g' 99_unmatched_functions.c
sed -i 's/FUN_1808fd200/ReleaseSystemResources/g' 99_unmatched_functions.c
sed -i 's/FUN_180220810/ReportSystemStatus/g' 99_unmatched_functions.c
sed -i 's/FUN_1800adb30/CleanupResourcePointer/g' 99_unmatched_functions.c
sed -i 's/FUN_1800adba0/InitializeEventHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_18005c650/ProcessEventStack/g' 99_unmatched_functions.c
sed -i 's/FUN_18062b1e0/AllocateSystemResource/g' 99_unmatched_functions.c
sed -i 's/FUN_18023a2e0/CreateResourceHandle/g' 99_unmatched_functions.c
sed -i 's/FUN_18023ce10/ReleaseResourceHandle/g' 99_unmatched_functions.c
sed -i 's/FUN_18023a940/ValidateResourceAccess/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a1850/GetSystemStatus/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a1a70/InitializeSecurityContext/g' 99_unmatched_functions.c
sed -i 's/FUN_18009ec20/InitializeSecurityBuffer/g' 99_unmatched_functions.c
sed -i 's/FUN_18009ec80/ConfigureSecurityParameters/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a19c0/ValidateSecurityConfiguration/g' 99_unmatched_functions.c
sed -i 's/FUN_18009fb60/ReleaseSecurityBuffer/g' 99_unmatched_functions.c
sed -i 's/FUN_18004a180/InitializeEventSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae430/ProcessResourceHandle/g' 99_unmatched_functions.c
sed -i 's/FUN_18064e990/ValidateResourceData/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ab420/AccessSystemResource/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ac700/ReleaseSystemMemory/g' 99_unmatched_functions.c
sed -i 's/FUN_1800acb60/CleanupSystemMemory/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad2a0/FreeSystemResources/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad510/InitializeMemoryManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad52d/ConfigureMemoryManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad59f/ValidateMemoryAccess/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad6b2/ResetMemoryManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad6bc/InitializeMemoryAllocator/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad760/CalculateMemoryOffset/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad7c0/InitializeMemoryPool/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad820/InitializeCoreSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ad8c0/ConfigureSystemParameters/g' 99_unmatched_functions.c
sed -i 's/FUN_1800adfe0/ExecuteSystemCommand/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae01b/ProcessSystemByte/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae16b/ResetSystemState/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae1b0/InitializeSystemBuffer/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae230/ProcessSystemParameters/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae2c0/InitializeSystemContext/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae370/InitializeEngineSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae390/InitializeRenderSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae3c0/InitializeAudioSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae3f0/ValidateSystemHandle/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae600/AllocateSystemMemory/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae640/InitializeMemorySystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ae730/ConfigureResourceSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800aec40/ProcessResourceData/g' 99_unmatched_functions.c
sed -i 's/FUN_1800aecf0/ResetResourceSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800aeef0/InitializeResourceContext/g' 99_unmatched_functions.c
sed -i 's/FUN_1800af2c0/ValidateResourceAccess/g' 99_unmatched_functions.c
sed -i 's/FUN_1800af9f0/InitializeResourceManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800b01b0/ConfigureResourceParameters/g' 99_unmatched_functions.c
sed -i 's/FUN_1800b01cf/InitializeResourceCache/g' 99_unmatched_functions.c
sed -i 's/FUN_1800b030f/ResetResourceCache/g' 99_unmatched_functions.c
sed -i 's/FUN_1800b0380/InitializeResourceLoader/g' 99_unmatched_functions.c
sed -i 's/FUN_1800b039e/ConfigureResourceLoader/g' 99_unmatched_functions.c
sed -i 's/FUN_1800b0890/InitializeSystemModule/g' 99_unmatched_functions.c

echo "函数调用替换完成"