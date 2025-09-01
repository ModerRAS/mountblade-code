#!/bin/bash

# 批量替换Unwind_函数的脚本
# 这个脚本将Unwind_函数重命名为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed命令批量替换函数名
sed -i 's/Unwind_180902600/ExceptionResourceCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902690/ResourceTableValidationHandler/g' 06_utilities.c
sed -i 's/Unwind_1809026a0/MemoryPoolCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_1809026b0/ThreadSynchronizationCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902710/ExceptionHandlerStackManager/g' 06_utilities.c
sed -i 's/Unwind_180902720/ResourceLockManager/g' 06_utilities.c
sed -i 's/Unwind_180902730/MemoryAllocationTracker/g' 06_utilities.c
sed -i 's/Unwind_180902740/SystemStateResetHandler/g' 06_utilities.c
sed -i 's/Unwind_180902750/ExceptionContextManager/g' 06_utilities.c
sed -i 's/Unwind_180902760/ResourceDescriptorManager/g' 06_utilities.c
sed -i 's/Unwind_180902770/MemoryPageManager/g' 06_utilities.c
sed -i 's/Unwind_180902780/ThreadContextManager/g' 06_utilities.c
sed -i 's/Unwind_180902790/SystemResourceManager/g' 06_utilities.c
sed -i 's/Unwind_1809027a0/ExceptionFrameManager/g' 06_utilities.c
sed -i 's/Unwind_1809027b0/ResourceCleanupManager/g' 06_utilities.c
sed -i 's/Unwind_1809027c0/MemorySegmentManager/g' 06_utilities.c
sed -i 's/Unwind_1809027d0/ThreadExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_1809027e0/SystemExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_1809027f0/ResourceExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902800/MemoryExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902810/ThreadCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902820/SystemCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902830/ResourceCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902840/MemoryCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902850/ThreadSynchronizationHandler/g' 06_utilities.c
sed -i 's/Unwind_180902860/SystemSynchronizationHandler/g' 06_utilities.c
sed -i 's/Unwind_180902870/ExceptionSynchronizationHandler/g' 06_utilities.c
sed -i 's/Unwind_180902880/ResourceSynchronizationHandler/g' 06_utilities.c
sed -i 's/Unwind_180902890/MemorySynchronizationHandler/g' 06_utilities.c
sed -i 's/Unwind_1809028a0/ThreadResourceHandler/g' 06_utilities.c
sed -i 's/Unwind_1809028c0/SystemResourceHandler/g' 06_utilities.c
sed -i 's/Unwind_1809028d0/ExceptionResourceHandler/g' 06_utilities.c
sed -i 's/Unwind_1809028e0/MemoryResourceHandler/g' 06_utilities.c
sed -i 's/Unwind_1809028f0/ThreadMemoryHandler/g' 06_utilities.c
sed -i 's/Unwind_180902900/SystemMemoryHandler/g' 06_utilities.c
sed -i 's/Unwind_180902930/ExceptionMemoryHandler/g' 06_utilities.c
sed -i 's/Unwind_180902940/ResourceMemoryHandler/g' 06_utilities.c
sed -i 's/Unwind_180902950/ThreadStateManager/g' 06_utilities.c
sed -i 's/Unwind_180902960/SystemStateManager/g' 06_utilities.c
sed -i 's/Unwind_180902970/ExceptionStateManager/g' 06_utilities.c
sed -i 's/Unwind_180902980/ResourceStateManager/g' 06_utilities.c
sed -i 's/Unwind_1809029c0/MemoryStateManager/g' 06_utilities.c
sed -i 's/Unwind_180902a00/ThreadLockManager/g' 06_utilities.c
sed -i 's/Unwind_180902a40/SystemLockManager/g' 06_utilities.c
sed -i 's/Unwind_180902a50/ExceptionLockManager/g' 06_utilities.c
sed -i 's/Unwind_180902a60/ResourceLockManager/g' 06_utilities.c
sed -i 's/Unwind_180902a70/MemoryLockManager/g' 06_utilities.c
sed -i 's/Unwind_180902a80/ThreadExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902a90/SystemExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902aa0/ExceptionFrameHandler/g' 06_utilities.c
sed -i 's/Unwind_180902ab0/ResourceFrameHandler/g' 06_utilities.c
sed -i 's/Unwind_180902ac0/MemoryFrameHandler/g' 06_utilities.c
sed -i 's/Unwind_180902ad0/ThreadFrameHandler/g' 06_utilities.c
sed -i 's/Unwind_180902ae0/SystemFrameHandler/g' 06_utilities.c
sed -i 's/Unwind_180902af0/ExceptionCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b00/ResourceCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b30/MemoryCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b40/ThreadCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b50/SystemCleanupHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b60/ExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b70/ResourceExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b80/MemoryExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902b90/ThreadExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902ba0/SystemExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902bb0/ExceptionManager/g' 06_utilities.c
sed -i 's/Unwind_180902bc0/ResourceManager/g' 06_utilities.c
sed -i 's/Unwind_180902bd0/MemoryManager/g' 06_utilities.c
sed -i 's/Unwind_180902be0/ThreadManager/g' 06_utilities.c
sed -i 's/Unwind_180902bf0/SystemManager/g' 06_utilities.c
sed -i 's/Unwind_180902c00/ExceptionProcessor/g' 06_utilities.c
sed -i 's/Unwind_180902c10/ResourceProcessor/g' 06_utilities.c
sed -i 's/Unwind_180902c20/MemoryProcessor/g' 06_utilities.c
sed -i 's/Unwind_180902c30/ThreadProcessor/g' 06_utilities.c
sed -i 's/Unwind_180902c40/SystemProcessor/g' 06_utilities.c
sed -i 's/Unwind_180902c50/ExceptionHandler/g' 06_utilities.c
sed -i 's/Unwind_180902c60/ResourceHandler/g' 06_utilities.c
sed -i 's/Unwind_180902c70/MemoryHandler/g' 06_utilities.c
sed -i 's/Unwind_180902c80/ThreadHandler/g' 06_utilities.c
sed -i 's/Unwind_180902c90/SystemHandler/g' 06_utilities.c
sed -i 's/Unwind_180902ca0/ExceptionCleanup/g' 06_utilities.c
sed -i 's/Unwind_180902cb0/ResourceCleanup/g' 06_utilities.c
sed -i 's/Unwind_180902cc0/MemoryCleanup/g' 06_utilities.c
sed -i 's/Unwind_180902cd0/ThreadCleanup/g' 06_utilities.c
sed -i 's/Unwind_180902ce0/SystemCleanup/g' 06_utilities.c

echo "批量替换完成"