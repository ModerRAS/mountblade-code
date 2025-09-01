#!/bin/bash

# 简化的Unwind函数替换脚本
echo "开始替换Unwind函数..."

# 使用sed进行替换
sed -i 's/Unwind_180902750/CleanupResourceManagerLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902760/ReleaseResourceAllocationLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902770/ResetResourceOperationState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902780/ClearResourceValidationFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902790/ResetResourceHashState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809027a0/ReleaseGraphicsResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809027b0/ReleaseTextureResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809027e0/ProcessAdvancedDataCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809027f0/HandleMemoryResourceCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902800/HandleBufferResourceCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902810/ReleaseShaderResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902820/ResetGraphicsPipelineState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902830/ClearRenderQueueState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902840/ResetFrameBufferState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902850/ClearTextureCacheState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902860/ReleaseVertexBufferLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902890/ReleaseIndexBufferLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809028c0/ResetConstantBufferState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809028d0/ClearShaderProgramState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UnwindResourceLockHandler/ReleaseGeneralResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902930/ResetResourcePoolState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902940/ClearMemoryPoolFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902aa0/ReleaseAudioResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902ac0/ReleaseSoundBufferLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902ad0/ResetAudioChannelState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902ae0/ClearAudioMixerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902b40/ReleaseNetworkResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902b50/ResetNetworkConnectionState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902c60/ProcessResourceHashCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902c70/ReleaseSystemResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902c80/ReleaseKernelResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902f00/ReleaseFileSystemLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902f20/ProcessFileHandleCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902f40/ProcessDirectoryHandleCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902f80/ReleaseStreamResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902fc0/HandleFileStreamCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180902fe0/HandleMemoryStreamCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903000/HandleSystemMemoryCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903010/HandleUserMemoryCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903020/ResetMemoryAllocatorState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903030/ClearGarbageCollectorFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903040/ReleaseMemoryPoolLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903050/ResetHeapManagerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903060/ClearStackAllocatorFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903070/ReleaseVirtualMemoryLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903080/HandlePhysicalMemoryCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903090/HandleSharedMemoryCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809030a0/ProcessResourceValidationCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903100/ProcessResourceOperationCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809031e0/ProcessResourceOperationFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903220/ResetThreadingPoolState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903230/ReleaseThreadResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903240/ReleaseMutexResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903250/ReleaseSemaphoreResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903270/ReleaseEventResourceLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903290/ReleaseCriticalSectionLock/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809032d0/ResetThreadPoolState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809032e0/ClearThreadQueueFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_1809032f0/ResetTaskSchedulerState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903300/ClearJobQueueFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903330/HandleGraphicsResourceFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903340/HandleAudioResourceFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903350/HandleNetworkResourceFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903430/HandleSystemResourceFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903610/ProcessResourceValidationFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903620/ProcessResourceOperationFinalRelease/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_180903640/HandleThreadResourceFinalCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "Unwind函数替换完成"