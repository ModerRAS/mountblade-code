#!/bin/bash

# 美化函数 ProcessSystemConfigurationAndMemoryManagement 的变量名

sed -i '141062s/uStack_e8/StackGuard/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141063s/StackValue28/StackProtectionValue/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141063s/auStack_108/ContextBuffer1/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141064s/bVar5/ProcessingStatus/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

sed -i '141066s/auStack_d8/ContextBuffer2/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141067s/auStack_78/ContextBuffer3/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141068s/auStack_58/ContextBuffer4/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141069s/FunctionParameter2/ConfigurationFlags/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141070s/uStack_30/StatusFlags/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141071s/DoublePrecisionValue1/ProcessingMode/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141072s/cVar2/ProcessingResult/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141073s/bVar5/ProcessingStatus/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141074s/auStack_d8/ContextBuffer2/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i '141075s/bVar5/ProcessingStatus/' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "函数变量名美化完成"