#!/bin/bash

# 批量替换99_unmatched_functions.c中的变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 处理带有数字后缀的变量名
sed -i 's/TableEntryLength7/TableEntryLength/g' 99_unmatched_functions.c
sed -i 's/NewBufferPointer6/NewBufferPointer/g' 99_unmatched_functions.c
sed -i 's/SystemTablePointer6/SystemTablePointer/g' 99_unmatched_functions.c
sed -i 's/DataBuffer168/DataBuffer1/g' 99_unmatched_functions.c
sed -i 's/DataBuffer160/DataBuffer2/g' 99_unmatched_functions.c
sed -i 's/DataBuffer158/DataBuffer3/g' 99_unmatched_functions.c
sed -i 's/SourceDataPointer3/SourceDataPointer/g' 99_unmatched_functions.c
sed -i 's/MemoryAllocationResult4/MemoryAllocationResult/g' 99_unmatched_functions.c
sed -i 's/plStack_908/PointerStack2/g' 99_unmatched_functions.c
sed -i 's/ResourceLockIndex2/ResourceLockIndex/g' 99_unmatched_functions.c
sed -i 's/uStack_924/StackVariable2/g' 99_unmatched_functions.c
sed -i 's/uStack_928/StackVariable3/g' 99_unmatched_functions.c

echo "变量名替换完成"