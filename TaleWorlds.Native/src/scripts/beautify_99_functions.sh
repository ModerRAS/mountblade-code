#!/bin/bash

# 美化99_unmatched_functions.c文件中的函数名和变量名
# 专门处理FUN_函数、iVar、uVar、puVar等变量名

# 处理FUN_函数
sed -i 's/FUN_1800b4810/ProcessSystemCleanupRequest/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4830/ExecuteSystemUpdateOperation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4860/InitializeSystemResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4890/ProcessSystemConfiguration/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b48c0/CleanupSystemResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b48e0/ExecuteSystemMaintenance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4910/HandleResourceAllocation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4a00/ProcessSystemStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4a40/InitializeSystemDataStructures/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 处理iVar变量
sed -i 's/iVar5/ResultCode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/iVar6/StatusCode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/iVar7/ErrorCode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/iVar3/ReturnCode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 处理uVar变量
sed -i 's/uVar4/CharValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uVar1/DataValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uVar18/ProcessedValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uVar16/EscapeChar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 处理puVar变量
sed -i 's/puVar22/DataPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/puVar12/ResourcePointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/puVar20/BufferPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/puVar11/FormatPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/puVar15/ContextPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 处理其他变量
sed -i 's/plVar2/ResourceHandle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/puVar1/SystemPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/presourceHandle/ResourceData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/plStackX_20/StackPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "函数名和变量名美化完成"