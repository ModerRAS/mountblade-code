#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 将通用变量名替换为语义化名称

echo "开始美化99_unmatched_functions.c文件中的变量名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

# 定义变量替换规则
# 通用计数器变量
sed -i 's/\bQueueItemCount\b/QueueItemCount/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bCounter\b/LoopCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bRequiredSpace\b/RequiredSpace/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\buVar[0-9]\+\b/UnsignedVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bAllocationSize\b/AllocationSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bEncodedDataValue\b/EncodedDataValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bVertexCount\b/VertexCount/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bDataValue[0-9]*\b/DataValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bProcessingFlags\b/ProcessingFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bMemoryAllocationResult[0-9]*\b/MemoryAllocationResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bSourceDataPointer[0-9]*\b/SourceDataPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bResourceDataPointer\b/ResourceDataPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bRegisterRBX\b/RegisterRBX/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bTargetStringLength[0-9]*\b/TargetStringLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bCurrentChar[0-9]*\b/CurrentChar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bSystemContext[0-9]*\b/SystemContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bDestinationPointer\b/DestinationPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bpMaxBoundX[0-9]*\b/MaxBoundXPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bfVar[0-9]\+\b/FloatVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\biStack[0-9]\+\b/IntegerStackVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bin_stack_[0-9]\+\b/InputStackVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\b_fStack[0-9]\+\b/FloatStackVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bResourceLockPointerVar\b/ResourceLockPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bRegisterR[0-9]\+\b/RegisterVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bextraout_XMM0_Da\b/ExtraXMM0Var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bunaff_R[ABCD][SX]\b/UnaffectedRegister/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bstack0x[0-9a-f]\+\b/StackVar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "变量名美化完成！"
echo "原文件已备份为99_unmatched_functions.c.backup"