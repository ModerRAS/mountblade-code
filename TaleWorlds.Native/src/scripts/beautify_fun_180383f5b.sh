#!/bin/bash

# 美化FUN_180383f5b函数的变量名

# 变量名替换映射
sed -i 's/MaterialHeapSize/MaterialMemoryHeapSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/MaterialPropertyArrayBase/MaterialPropertyArrayPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/MaterialRenderBufferPointer/RenderBufferPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/DataOffset/DataTableOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/MaterialPropertyBaseOffset/MaterialPropertyStructureOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/PropertyIndex/CurrentPropertyIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/ParentIndexPointer/ParentArrayPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/PropertyArrayIndex/ArrayElementIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/ShaderStateValue/ShaderStateData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/BasePropertyOffset/PropertyDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/PropertyUnsignedValue/UnsignedPropertyValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RenderStateByte/MaterialStateFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/PropertyCounter/PropertyProcessingCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/ResultIndex/CalculationResultIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "变量名美化完成"