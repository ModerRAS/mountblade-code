#!/bin/bash

# 批量替换06_utilities.c中的DAT_和UNK_变量为语义化名称
# 基于变量用途分析创建的有意义变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# ===========================================================================
# DAT_ 变量替换（数据表和系统结构）
# ===========================================================================

# 系统数据结构变量
sed -i 's/DAT_180bfaef0/SystemDataStructureA/g' 06_utilities.c
sed -i 's/DAT_180bfaef8/SystemDataStructureB/g' 06_utilities.c
sed -i 's/DAT_180bfaf00/SystemDataStructureC/g' 06_utilities.c
sed -i 's/DAT_180bfaf08/SystemDataStructureD/g' 06_utilities.c

# 系统配置表变量
sed -i 's/DAT_180bfb310/SystemConfigTableA/g' 06_utilities.c
sed -i 's/DAT_180bfb318/SystemConfigTableB/g' 06_utilities.c
sed -i 's/DAT_180bfb320/SystemConfigTableC/g' 06_utilities.c
sed -i 's/DAT_180bfb328/SystemConfigTableD/g' 06_utilities.c

# 系统状态变量
sed -i 's/DAT_180bfb730/SystemStatusTableA/g' 06_utilities.c
sed -i 's/DAT_180bfb738/SystemStatusTableB/g' 06_utilities.c
sed -i 's/DAT_180bfb740/SystemStatusTableC/g' 06_utilities.c
sed -i 's/DAT_180bfb748/SystemStatusTableD/g' 06_utilities.c

# 资源管理变量
sed -i 's/DAT_180c9246c/ResourceManagementFlag/g' 06_utilities.c
sed -i 's/DAT_180c92490/ResourceTablePointer/g' 06_utilities.c
sed -i 's/DAT_180c92480/ResourceCachePointer/g' 06_utilities.c
sed -i 's/DAT_180c924ac/ResourcePoolSize/g' 06_utilities.c
sed -i 's/DAT_180c924b0/ResourcePoolCapacity/g' 06_utilities.c

# 内存管理变量
sed -i 's/DAT_180a2c1d0/MemoryPoolPointer/g' 06_utilities.c
sed -i 's/DAT_180a2c338/MemoryAllocatorPointer/g' 06_utilities.c
sed -i 's/DAT_180a2c510/MemoryCachePointer/g' 06_utilities.c

# 系统控制变量
sed -i 's/DAT_180bf6048/SystemControlFlagA/g' 06_utilities.c
sed -i 's/DAT_180bf6050/SystemControlFlagB/g' 06_utilities.c
sed -i 's/DAT_180bf6058/SystemControlFlagC/g' 06_utilities.c
sed -i 's/DAT_180bf6060/SystemControlFlagD/g' 06_utilities.c

# 验证状态变量
sed -i 's/DAT_180bf6498/ValidationStatusA/g' 06_utilities.c
sed -i 's/DAT_180bf64a0/ValidationStatusB/g' 06_utilities.c
sed -i 's/DAT_180bf64a8/ValidationStatusC/g' 06_utilities.c
sed -i 's/DAT_180bf64b0/ValidationStatusD/g' 06_utilities.c

# 安全相关变量
sed -i 's/DAT_180c967d4/SecurityFlagA/g' 06_utilities.c
sed -i 's/DAT_180c967d8/SecurityFlagB/g' 06_utilities.c
sed -i 's/DAT_180c967e0/SecurityFlagC/g' 06_utilities.c
sed -i 's/DAT_180c967e8/SecurityFlagD/g' 06_utilities.c
sed -i 's/DAT_180c967f0/SecurityChecksumA/g' 06_utilities.c
sed -i 's/DAT_180c967f8/SecurityChecksumB/g' 06_utilities.c

# 缓存和缓冲区变量
sed -i 's/DAT_180c96800/CacheBufferPointer/g' 06_utilities.c
sed -i 's/DAT_180c96808/CacheBufferSize/g' 06_utilities.c
sed -i 's/DAT_180c0c6c0/BufferPoolA/g' 06_utilities.c
sed -i 's/DAT_180be14a0/BufferPoolB/g' 06_utilities.c
sed -i 's/DAT_180be1324/BufferPoolC/g' 06_utilities.c

# 系统配置数据
sed -i 's/DAT_180c0c6d0/SystemConfigDataA/g' 06_utilities.c
sed -i 's/DAT_180c0c6d8/SystemConfigDataB/g' 06_utilities.c
sed -i 's/DAT_180c0d100/SystemConfigDataC/g' 06_utilities.c
sed -i 's/DAT_180c0e170/SystemConfigDataD/g' 06_utilities.c
sed -i 's/DAT_180c108d0/SystemConfigDataE/g' 06_utilities.c

# 线程管理变量
sed -i 's/DAT_180c2bca0/ThreadControlFlag/g' 06_utilities.c
sed -i 's/DAT_180c31148/ThreadSyncObject/g' 06_utilities.c

# 错误处理变量
sed -i 's/DAT_180c4ea58/ErrorHandlerA/g' 06_utilities.c
sed -i 's/DAT_180c4ea60/ErrorHandlerB/g' 06_utilities.c

# 状态标志变量
sed -i 's/DAT_180c82841/StatusFlagA/g' 06_utilities.c
sed -i 's/DAT_180c82840/StatusFlagB/g' 06_utilities.c
sed -i 's/DAT_180c82864/StatusFlagC/g' 06_utilities.c
sed -i 's/DAT_180c91048/StatusFlagD/g' 06_utilities.c

# 数据表指针
sed -i 's/DAT_180c86948/DataTablePointerA/g' 06_utilities.c
sed -i 's/DAT_180c86870/DataTablePointerB/g' 06_utilities.c
sed -i 's/DAT_180c82868/DataTablePointerC/g' 06_utilities.c
sed -i 's/DAT_180c86928/DataTablePointerD/g' 06_utilities.c

# 资源处理变量
sed -i 's/DAT_180c8ed10/ResourceHandlerA/g' 06_utilities.c
sed -i 's/DAT_180c8ed08/ResourceHandlerB/g' 06_utilities.c
sed -i 's/DAT_180c8ed68/ResourceHandlerC/g' 06_utilities.c
sed -i 's/DAT_180c8ed00/ResourceHandlerD/g' 06_utilities.c
sed -i 's/DAT_180c8ed50/ResourceHandlerE/g' 06_utilities.c

# 字符和数据变量
sed -i 's/DAT_180bf0102/SystemCharFlag/g' 06_utilities.c
sed -i 's/DAT_180c8ed58/ResourceDataA/g' 06_utilities.c
sed -i 's/DAT_180c8ed48/ResourceDataB/g' 06_utilities.c
sed -i 's/DAT_180c8ed40/ResourceDataC/g' 06_utilities.c
sed -i 's/DAT_180c86940/ResourceDataD/g' 06_utilities.c

# 缓存管理变量
sed -i 's/DAT_180c82854/CacheManagerA/g' 06_utilities.c
sed -i 's/DAT_180c82860/CacheManagerB/g' 06_utilities.c
sed -i 's/DAT_180c86920/CacheManagerC/g' 06_utilities.c
sed -i 's/DAT_180c86960/CacheManagerD/g' 06_utilities.c

# 系统句柄变量
sed -i 's/DAT_180bf52b8/SystemHandleA/g' 06_utilities.c
sed -i 's/DAT_180bf52bc/SystemHandleB/g' 06_utilities.c
sed -i 's/DAT_180bf5248/SystemHandleC/g' 06_utilities.c
sed -i 's/DAT_180bf5240/SystemHandleD/g' 06_utilities.c

# 系统表变量
sed -i 's/DAT_1809fc7ec/SystemTableA/g' 06_utilities.c

# ===========================================================================
# UNK_ 变量替换（未知用途变量）
# ===========================================================================

# 控制标志
sed -i 's/UNK_180a18870/UnknownControlFlagA/g' 06_utilities.c
sed -i 's/UNK_180a18898/UnknownControlFlagB/g' 06_utilities.c
sed -i 's/UNK_180a06b98/UnknownControlFlagC/g' 06_utilities.c
sed -i 's/UNK_180a18880/UnknownControlFlagD/g' 06_utilities.c
sed -i 's/UNK_180a188a8/UnknownControlFlagE/g' 06_utilities.c

# 状态变量
sed -i 's/UNK_180a188c0/UnknownStatusA/g' 06_utilities.c
sed -i 's/UNK_180a188d8/UnknownStatusB/g' 06_utilities.c
sed -i 's/UNK_180a188e0/UnknownStatusC/g' 06_utilities.c
sed -i 's/UNK_180a188f8/UnknownStatusD/g' 06_utilities.c
sed -i 's/UNK_180a18908/UnknownStatusE/g' 06_utilities.c

# 配置变量
sed -i 's/UNK_180a18918/UnknownConfigA/g' 06_utilities.c
sed -i 's/UNK_180a1892c/UnknownConfigB/g' 06_utilities.c
sed -i 's/UNK_180a18938/UnknownConfigC/g' 06_utilities.c
sed -i 's/UNK_180a18980/UnknownConfigD/g' 06_utilities.c
sed -i 's/UNK_180a18998/UnknownConfigE/g' 06_utilities.c

# 处理器变量
sed -i 's/UNK_180a18968/UnknownProcessorA/g' 06_utilities.c
sed -i 's/UNK_180a189b8/UnknownProcessorB/g' 06_utilities.c
sed -i 's/UNK_180a189f8/UnknownProcessorC/g' 06_utilities.c

# 管理器变量
sed -i 's/UNK_180a18a98/UnknownManagerA/g' 06_utilities.c
sed -i 's/UNK_180a18aa8/UnknownManagerB/g' 06_utilities.c
sed -i 's/UNK_180a18ab8/UnknownManagerC/g' 06_utilities.c
sed -i 's/UNK_180a18ad0/UnknownManagerD/g' 06_utilities.c
sed -i 's/UNK_180a18ae8/UnknownManagerE/g' 06_utilities.c

# 操作变量
sed -i 's/UNK_180a18af8/UnknownOperationA/g' 06_utilities.c
sed -i 's/UNK_180a18b10/UnknownOperationB/g' 06_utilities.c
sed -i 's/UNK_180a18b40/UnknownOperationC/g' 06_utilities.c
sed -i 's/UNK_180a18b50/UnknownOperationD/g' 06_utilities.c
sed -i 's/UNK_180a18b68/UnknownOperationE/g' 06_utilities.c

# 缓冲区变量
sed -i 's/UNK_180a18b6c/UnknownBufferA/g' 06_utilities.c
sed -i 's/UNK_180a18b88/UnknownBufferB/g' 06_utilities.c
sed -i 's/UNK_180a18ba0/UnknownBufferC/g' 06_utilities.c
sed -i 's/UNK_180a18bb0/UnknownBufferD/g' 06_utilities.c

# 验证变量
sed -i 's/UNK_180a18bc4/UnknownValidatorA/g' 06_utilities.c
sed -i 's/UNK_180a18bc8/UnknownValidatorB/g' 06_utilities.c
sed -i 's/UNK_180a18c08/UnknownValidatorC/g' 06_utilities.c
sed -i 's/UNK_180a18c20/UnknownValidatorD/g' 06_utilities.c

# 处理变量
sed -i 's/UNK_180a18c78/UnknownProcessorE/g' 06_utilities.c
sed -i 's/UNK_180a18ca0/UnknownProcessorF/g' 06_utilities.c
sed -i 's/UNK_180a18cd8/UnknownProcessorG/g' 06_utilities.c
sed -i 's/UNK_180a18d20/UnknownProcessorH/g' 06_utilities.c
sed -i 's/UNK_180a18d48/UnknownProcessorI/g' 06_utilities.c

# 上下文变量
sed -i 's/UNK_180a18d00/UnknownContextA/g' 06_utilities.c
sed -i 's/UNK_180a18d10/UnknownContextB/g' 06_utilities.c
sed -i 's/UNK_180a18d68/UnknownContextC/g' 06_utilities.c
sed -i 's/UNK_180a18e08/UnknownContextD/g' 06_utilities.c
sed -i 's/UNK_180a18de8/UnknownContextE/g' 06_utilities.c

# 环境变量
sed -i 's/UNK_180a18df8/UnknownEnvironmentA/g' 06_utilities.c
sed -i 's/UNK_180a18e20/UnknownEnvironmentB/g' 06_utilities.c

echo "06_utilities.c变量美化完成！"