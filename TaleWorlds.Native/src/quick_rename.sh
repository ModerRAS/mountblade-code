#!/bin/bash

# 高效批量重命名06_utilities.c文件中的UNK_变量
# 使用sed命令进行批量替换

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "开始批量重命名UNK_变量..."

# 内存管理相关变量 (180a18xxx系列)
sed -i 's/UNK_180a18af8/MemoryFreeList/g' "$FILE_PATH"
sed -i 's/UNK_180a18b10/MemoryPageTable/g' "$FILE_PATH"
sed -i 's/UNK_180a18b40/MemorySegmentHeader/g' "$FILE_PATH"
sed -i 's/UNK_180a18b50/MemoryChunkHeader/g' "$FILE_PATH"
sed -i 's/UNK_180a18b68/MemoryAllocationFlag2/g' "$FILE_PATH"
sed -i 's/UNK_180a18b6c/MemoryProtectionFlag/g' "$FILE_PATH"
sed -i 's/UNK_180a18b88/MemoryAlignmentMask/g' "$FILE_PATH"
sed -i 's/UNK_180a18ba0/MemorySizeCalculator/g' "$FILE_PATH"
sed -i 's/UNK_180a18bb0/MemoryAddressValidator/g' "$FILE_PATH"
sed -i 's/UNK_180a18bc4/MemoryBoundsChecker/g' "$FILE_PATH"
sed -i 's/UNK_180a18bc8/MemoryAccessLogger/g' "$FILE_PATH"
sed -i 's/UNK_180a18c08/MemoryHeapManager/g' "$FILE_PATH"
sed -i 's/UNK_180a18c20/MemoryStackManager/g' "$FILE_PATH"
sed -i 's/UNK_180a18c78/MemoryCacheManager/g' "$FILE_PATH"
sed -i 's/UNK_180a18ca0/MemoryVirtualAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18cd8/MemoryPhysicalAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18d20/MemorySharedAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18d48/MemoryDedicatedAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18d00/MemoryCompressedAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18d10/MemoryEncryptedAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18d68/MemorySecureAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18e08/MemoryFastAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18de8/MemoryEfficientAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18df8/MemoryOptimizedAllocator/g' "$FILE_PATH"
sed -i 's/UNK_180a18e20/MemorySmartAllocator/g' "$FILE_PATH"

# 内存释放相关变量 (180a19xxx系列)
sed -i 's/UNK_180a19fd8/MemoryFreeQueue/g' "$FILE_PATH"
sed -i 's/UNK_180a19eb0/MemoryFreeStack/g' "$FILE_PATH"
sed -i 's/UNK_180a19e28/MemoryFreePool/g' "$FILE_PATH"
sed -i 's/UNK_180a19e38/MemoryFreeCache/g' "$FILE_PATH"
sed -i 's/UNK_180a19e88/MemoryFreeBuffer/g' "$FILE_PATH"

# 系统内存变量 (18030xxxx系列)
sed -i 's/UNK_180302310/SystemMemoryConfig/g' "$FILE_PATH"
sed -i 's/UNK_1803048b0/SystemMemoryStatus/g' "$FILE_PATH"

echo "第一组变量重命名完成！"

# 检查剩余的UNK_变量数量
REMAINING=$(grep -c "UNK_" "$FILE_PATH")
echo "剩余UNK_变量数量: $REMAINING"