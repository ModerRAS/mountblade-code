#!/bin/bash

# 美化FUN_1801eae40函数的变量名
# 这是一个临时脚本，用于批量替换变量名

sed -i 's/RightChildIndex/AllocatedMemoryIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/MemoryAllocationResult0/ProcessingResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/bVar3/IsMatchFound/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/pEncodedData2/EncodedDataNode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/pCharacterCode/CharacterCodeNode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/pCharacterCodeByte/CharacterCodeBytePointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/bVar1/CurrentCharacterByte/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/VertexCount/ComparisonCount/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/RegionTotal3/MemoryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "变量名替换完成"