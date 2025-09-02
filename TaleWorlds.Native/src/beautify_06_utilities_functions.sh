#!/bin/bash

# 美化06_utilities.c文件中的函数名
# 将包含十六进制偏移量的函数名改为有意义的名称

echo "开始美化06_utilities.c文件中的函数名..."

# 定义替换规则
# 格式: 原函数名->新函数名

# 系统组件释放相关函数
sed -i 's/ReleaseSystemComponentAtOffset0x70/ReleaseSystemComponentAtExceptionListOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ReleaseSystemComponentAtOffset0xb0/ReleaseSystemComponentAtSecondaryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ReleaseSystemComponentAtOffset0x90/ReleaseSystemComponentAtPrimaryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统资源处理器重置相关函数
sed -i 's/ResetSystemResourceHandlerAtOffset0x1e8/ResetSystemResourceHandlerAtResourcePoolOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ResetSystemResourceHandlerAtOffset0x168/ResetSystemResourceHandlerAtMemoryPoolOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ResetSystemResourceHandlerAtOffset0x1a8/ResetSystemResourceHandlerAtCachePoolOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ResetSystemResourceHandlerAtOffset0x128/ResetSystemResourceHandlerAtBufferPoolOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ResetSystemResourceHandlerAtOffset0xc8/ResetSystemResourceHandlerAtThreadPoolOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ResetSystemResourceHandlerAtOffset0xd0/ResetSystemResourceHandlerAtTaskPoolOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源处理器清理相关函数
sed -i 's/CleanupResourceHandlersAtOffset0x148/CleanupResourceHandlersAtMemoryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/CleanupResourceHandlersAtOffset0x208/CleanupResourceHandlersAtCacheOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/CleanupResourceHandlersAtOffset0x108/CleanupResourceHandlersAtBufferOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统数据结构设置相关函数
sed -i 's/SetSystemDataStructureAtOffset0x278/SetSystemDataStructureAtResourceTableOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SetSystemDataStructureAtOffset0x250/SetSystemDataStructureAtMemoryTableOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源上下文展开相关函数
sed -i 's/UnwindResourceContextAt0xa8/UnwindResourceContextAtValidationOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UnwindResourceValidationAt0xa8/UnwindResourceValidationAtContextOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UnwindReleaseSystemResourceAt0xa8/UnwindReleaseSystemResourceAtMainOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UnwindReleaseSystemResourceAt0x88/UnwindReleaseSystemResourceAtSecondaryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "函数名美化完成！"