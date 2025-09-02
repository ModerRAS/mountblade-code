#!/bin/bash

# 批量重命名02_core_engine.c中的UNK_变量

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 系统事件队列相关变量
sed -i 's/UNK_180a0b3c0/SystemEventQueueDataBufferA/g' "$FILE_PATH"
sed -i 's/UNK_180a0b3e0/SystemEventQueueDataBufferB/g' "$FILE_PATH"
sed -i 's/UNK_180a0b3f0/SystemEventQueueDataBufferC/g' "$FILE_PATH"
sed -i 's/UNK_180a0b408/SystemEventQueueDataBufferD/g' "$FILE_PATH"
sed -i 's/UNK_180a0b420/SystemEventQueueDataBufferE/g' "$FILE_PATH"
sed -i 's/UNK_180a0b438/SystemEventQueueDataBufferF/g' "$FILE_PATH"
sed -i 's/UNK_180a0b450/SystemEventQueueDataBufferG/g' "$FILE_PATH"
sed -i 's/UNK_180a0b498/SystemEventQueueDataBufferH/g' "$FILE_PATH"

# 内存管理相关变量
sed -i 's/UNK_1809ffe90/MemoryPoolManagerAVX/g' "$FILE_PATH"
sed -i 's/UNK_1809ffc88/MemoryPoolManagerSecondary/g' "$FILE_PATH"
sed -i 's/UNK_1809ffcf0/MemoryPoolManagerTertiary/g' "$FILE_PATH"
sed -i 's/UNK_1809ffd58/MemoryPoolManagerQuaternary/g' "$FILE_PATH"
sed -i 's/UNK_1809ffdc0/MemoryPoolManagerQuinary/g' "$FILE_PATH"

# 数据结构相关变量
sed -i 's/UNK_180a001e8/CoreEngineDataStructure/g' "$FILE_PATH"
sed -i 's/UNK_180a07805/SystemStringConstant/g' "$FILE_PATH"
sed -i 's/UNK_180a0888c/SystemConfigurationData/g' "$FILE_PATH"
sed -i 's/UNK_180a0f0b8/ValidationStringConstant/g' "$FILE_PATH"
sed -i 's/UNK_180a10500/MemoryBoundaryBuffer/g' "$FILE_PATH"
sed -i 's/UNK_180a10698/SystemPriorityLevelData/g' "$FILE_PATH"
sed -i 's/UNK_18098bc74/SystemCharacterBuffer/g' "$FILE_PATH"

echo "变量重命名完成"