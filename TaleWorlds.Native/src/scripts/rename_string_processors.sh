#!/bin/bash

# 批量重命名字符串处理器函数
sed -i 's/InitializeStringProcessorD/InitializeOptimizedStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorE/InitializeExtendedStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorF/InitializeSpecializedStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorG/InitializePerformanceStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorH/InitializeSecureStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorI/InitializeBufferedStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorJ/InitializeCachedStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorK/InitializeThreadedStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/InitializeStringProcessorL/InitializeParallelStringProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

echo "字符串处理器函数重命名完成"