#!/bin/bash

# 美化02_core_engine.c文件中的变量名

# 替换UNK_18098bc48为CoreEngineGlobalMemoryBuffer
sed -i 's/UNK_18098bc48/CoreEngineGlobalMemoryBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_18098bc00为CoreEnginePrimaryMemoryBuffer
sed -i 's/UNK_18098bc00/CoreEnginePrimaryMemoryBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_1809fe608为CoreEngineEventQueueBuffer
sed -i 's/UNK_1809fe608/CoreEngineEventQueueBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_1809ffae0为CoreEngineSecondaryMemoryBuffer
sed -i 's/UNK_1809ffae0/CoreEngineSecondaryMemoryBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_180a005f8为CoreEngineTertiaryMemoryBuffer
sed -i 's/UNK_180a005f8/CoreEngineTertiaryMemoryBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_180a00688为CoreEngineDataBuffer
sed -i 's/UNK_180a00688/CoreEngineDataBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_180a006b0为CoreEngineCommandBuffer
sed -i 's/UNK_180a006b0/CoreEngineCommandBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_180a006f0为CoreEngineRenderBuffer
sed -i 's/UNK_180a006f0/CoreEngineRenderBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换UNK_180a014c0为CoreEngineNetworkBuffer
sed -i 's/UNK_180a014c0/CoreEngineNetworkBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "变量名美化完成"