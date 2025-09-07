#!/bin/bash

# 批量替换FUN_函数调用为美化后的名称

# 替换FUN_180628040为ProcessSystemDataQueueManagement
sed -i 's/FUN_180628040(/ProcessSystemDataQueueManagement(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换FUN_180627be0为ProcessSystemDataFlowEx
sed -i 's/FUN_180627be0(/ProcessSystemDataFlowEx(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换FUN_1802abc50为ProcessSystemMemoryAllocationEx
sed -i 's/FUN_1802abc50(/ProcessSystemMemoryAllocationEx(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "批量替换完成"