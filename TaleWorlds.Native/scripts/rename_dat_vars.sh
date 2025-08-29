#!/bin/bash

# 脚本：批量替换DAT_变量名为有意义的名称
# 注意：这是一个简化实现，用于提高代码可读性

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 06_utilities.c 06_utilities.c.backup

# 定义DAT_变量的替换映射
# 基于变量在文件中的位置和上下文进行分类命名

# 配置系统相关变量 (265-300行)
sed -i 's/DAT_180bf6cd0;/configCacheData;/g' 06_utilities.c
sed -i 's/DAT_180bf6cd8;/configBufferPointer;/g' 06_utilities.c
sed -i 's/DAT_180bf6ce0;/configMemoryBlock;/g' 06_utilities.c
sed -i 's/DAT_180bf6ce8;/configStorageArea;/g' 06_utilities.c
sed -i 's/DAT_180bf6d28;/configAllocationSize;/g' 06_utilities.c
sed -i 's/DAT_180bf6d30;/configFreeSpace;/g' 06_utilities.c
sed -i 's/DAT_180bf6d38;/configUsedSpace;/g' 06_utilities.c
sed -i 's/DAT_180bf6d40;/configTotalSize;/g' 06_utilities.c
sed -i 's/DAT_180bf6d80;/configAlignment;/g' 06_utilities.c
sed -i 's/DAT_180bf6d88;/configPadding;/g' 06_utilities.c

# 缓冲区管理相关变量 (300-350行)
sed -i 's/DAT_180bf6dc8;/bufferStartAddress;/g' 06_utilities.c
sed -i 's/DAT_180bf6dd0;/bufferEndAddress;/g' 06_utilities.c
sed -i 's/DAT_180bf6e10;/bufferCurrentPosition;/g' 06_utilities.c
sed -i 's/DAT_180bf6e18;/bufferSize;/g' 06_utilities.c
sed -i 's/DAT_180bf6e20;/bufferCapacity;/g' 06_utilities.c
sed -i 's/DAT_180bf6e28;/bufferFlags;/g' 06_utilities.c
sed -i 's/DAT_180bf6e68;/bufferLockCount;/g' 06_utilities.c
sed -i 's/DAT_180bf6e70;/bufferRefCount;/g' 06_utilities.c
sed -i 's/DAT_180bf6e78;/bufferState;/g' 06_utilities.c
sed -i 's/DAT_180bf6eb8;/bufferType;/g' 06_utilities.c

# 内存管理相关变量 (350-400行)
sed -i 's/DAT_180bf6ec0;/memoryPoolId;/g' 06_utilities.c
sed -i 's/DAT_180bf6ec8;/memoryChunkSize;/g' 06_utilities.c
sed -i 's/DAT_180bf6ed0;/memoryBlockSize;/g' 06_utilities.c
sed -i 's/DAT_180bf6ed8;/memoryPageSize;/g' 06_utilities.c
sed -i 's/DAT_180bf6f18;/memoryAlignment;/g' 06_utilities.c
sed -i 's/DAT_180bf6f20;/memoryAttributes;/g' 06_utilities.c
sed -i 's/DAT_180bf6f28;/memoryPermissions;/g' 06_utilities.c
sed -i 's/DAT_180bf6f30;/memoryFlags;/g' 06_utilities.c
sed -i 's/DAT_180bf6f70;/memoryHeapId;/g' 06_utilities.c
sed -i 's/DAT_180bf6f78;/memoryAllocatorId;/g' 06_utilities.c

echo "DAT_变量批量替换完成"