#!/bin/bash

# 批量重命名UNK_变量为语义化名称
# 06_utilities.c文件美化脚本

# 定义输入文件
INPUT_FILE="TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理资源管理相关的UNK_变量
sed -i 's/UNK_180a30dc0/ResourcePoolManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a30e10/ResourceCacheManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a30e38/ResourceBufferManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a30e60/ResourceStreamManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a2fca0/ResourceNetworkManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a2fcd8/ResourceDatabaseManager/g' "$INPUT_FILE"

# 处理系统配置相关的UNK_变量
sed -i 's/UNK_1809f89f8/SystemConfigTable/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a08/SystemMemoryConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a18/SystemThreadConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a28/SystemProcessConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a38/SystemEventConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a48/SystemTimerConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a58/SystemSyncConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a68/SystemLockConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a78/SystemSemaphoreConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a88/SystemMutexConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8a98/SystemConditionConfig/g' "$INPUT_FILE"
sed -i 's/UNK_1809f8aa8/SystemBarrierConfig/g' "$INPUT_FILE"

# 处理数据结构相关的UNK_变量
sed -i 's/UNK_180a30ee8/DataStructurePool/g' "$INPUT_FILE"
sed -i 's/UNK_180a30ef8/DataStructureCache/g' "$INPUT_FILE"
sed -i 's/UNK_180a30ec8/DataStructureBuffer/g' "$INPUT_FILE"
sed -i 's/UNK_180a30ed8/DataStructureStream/g' "$INPUT_FILE"
sed -i 's/UNK_180a30f00/DataStructureManager/g' "$INPUT_FILE"

# 处理验证和检查相关的UNK_变量
sed -i 's/UNK_180943060/ValidationEngine/g' "$INPUT_FILE"
sed -i 's/UNK_1809fa490/IntegrityChecker/g' "$INPUT_FILE"

# 处理内存管理相关的UNK_变量
sed -i 's/UNK_180a30280/MemoryAllocator/g' "$INPUT_FILE"
sed -i 's/UNK_180a302c0/MemoryDeallocator/g' "$INPUT_FILE"
sed -i 's/UNK_180a301c8/MemoryPool/g' "$INPUT_FILE"
sed -i 's/UNK_180a301f8/MemoryCache/g' "$INPUT_FILE"
sed -i 's/UNK_180a30230/MemoryBuffer/g' "$INPUT_FILE"
sed -i 's/UNK_180a30378/MemoryManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a303f8/MemoryOptimizer/g' "$INPUT_FILE"
sed -i 's/UNK_180a303c8/MemoryCompactor/g' "$INPUT_FILE"
sed -i 's/UNK_180a30330/MemoryValidator/g' "$INPUT_FILE"
sed -i 's/UNK_180a30368/MemoryAuditor/g' "$INPUT_FILE"

# 处理线程管理相关的UNK_变量
sed -i 's/UNK_1809fa470/ThreadPoolManager/g' "$INPUT_FILE"
sed -i 's/UNK_1809fa480/ThreadScheduler/g' "$INPUT_FILE"
sed -i 's/UNK_1809fa360/ThreadSyncObject/g' "$INPUT_FILE"
sed -i 's/UNK_1809fa370/ThreadLockObject/g' "$INPUT_FILE"

# 处理文件系统相关的UNK_变量
sed -i 's/UNK_180a30568/FileSystemManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a305a0/FileCacheManager/g' "$INPUT_FILE"
sed -i 's/UNK_1809fa350/FileBufferManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a305f8/FileStreamManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a30638/FileAccessManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a30660/FilePermissionManager/g' "$INPUT_FILE"
sed -i 's/UNK_180a306a8/FileSecurityManager/g' "$INPUT_FILE"
sed -i 's/UNK_1809fa550/FileMetadataManager/g' "$INPUT_FILE"

echo "UNK_变量重命名完成"