#!/bin/bash

# 批量替换02_core_engine.c中的变量名
sed -i 's/ContextHandle = (long long \*)OperationBufferSize\[/CurrentContextHandle = (long long *)OperationBufferSize[/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/if (ContextHandle != (long long \*)0x0)/if (CurrentContextHandle != (long long *)0x0)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/(\*\*(code \*\*)(\*ContextHandle + 0x28))(ContextHandle)/(**(code **)(*CurrentContextHandle + 0x28))(CurrentContextHandle)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/BufferAllocationState = (long long \*)ContextHandle\[/BufferCleanupState = (long long *)CurrentContextHandle[/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/ContextHandle\[.*\] = (long long)ContextHandle/CurrentContextHandle[&] = (long long)CurrentContextHandle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/if (BufferAllocationState != (long long \*)0x0)/if (BufferCleanupState != (long long *)0x0)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/(\*\*(code \*\*)(\*BufferAllocationState + 0x38))()/(**(code **)(*BufferCleanupState + 0x38))()/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c