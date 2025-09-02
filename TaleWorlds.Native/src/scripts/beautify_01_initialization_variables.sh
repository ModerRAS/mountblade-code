#!/bin/bash

# 美化01_initialization.c文件中的变量名

# 首先备份文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c.backup

# 美化音频相关变量名
sed -i 's/AudioChannelCoefficient1/AudioChannelCoefficientPrimary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/AudioChannelCoefficient2/AudioChannelCoefficientSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/AudioChannelCoefficient3/AudioChannelCoefficientTertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/AudioChannelCoefficient4/AudioChannelCoefficientQuaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 美化unaff变量名
sed -i 's/unaff_XMM12_Da/AudioProcessingCoefficientA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/unaff_XMM12_Db/AudioProcessingCoefficientB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/unaff_XMM12_Dc/AudioProcessingCoefficientC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/unaff_XMM12_Dd/AudioProcessingCoefficientD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 美化系统内存分配表条目
sed -i 's/SystemMemoryAllocationTableEntry009/SystemMemoryAllocationTableEntryNinth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry010/SystemMemoryAllocationTableEntryTenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry011/SystemMemoryAllocationTableEntryEleventh/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry012/SystemMemoryAllocationTableEntryTwelfth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry013/SystemMemoryAllocationTableEntryThirteenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry014/SystemMemoryAllocationTableEntryFourteenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry015/SystemMemoryAllocationTableEntryFifteenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry016/SystemMemoryAllocationTableEntrySixteenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry017/SystemMemoryAllocationTableEntrySeventeenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemMemoryAllocationTableEntry018/SystemMemoryAllocationTableEntryEighteenth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 美化系统资源计数器
sed -i 's/SystemResourceCounter118/SystemResourceCounterPrimary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounter110/SystemResourceCounterSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounterC0/SystemResourceCounterTertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounterB0/SystemResourceCounterQuaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounterA8/SystemResourceCounterQuinary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounterA0/SystemResourceCounterSenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounter88/SystemResourceCounterSeptenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounter80/SystemResourceCounterOctonary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceCounter78/SystemResourceCounterNonary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 美化系统指针变量
sed -i 's/SystemGlobalDataReferencePtr2/SystemGlobalDataReferencePtrSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemStringTemplatePtr2/SystemStringTemplatePtrSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemResourceTriplePointer2/SystemResourceTriplePointerSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/SystemEncryptionPointer60/SystemEncryptionPointerPrimary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 美化其他变量名
sed -i 's/floatValue24/ProcessedFloatValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/pfloatValue4/FloatValuePointerPrimary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/pfloatValue6/FloatValuePointerSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/in_R9/FunctionParameterArray/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/in_R10/LoopCounterVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "变量名美化完成"