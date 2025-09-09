#!/bin/bash

# 美化06_utilities.c文件中的常量定义
# 这个脚本会替换一些具有特定地址的常量为更具语义的名称

echo "正在美化06_utilities.c文件中的常量定义..."

# 备份原文件
cp TaleWorlds.Native/src/06_utilities.c TaleWorlds.Native/src/06_utilities.c.backup

# 美化一些特定的地址常量
sed -i 's/0x180c4f450/ThreadLocalStorageBaseAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180c919f0/SystemMutexCleanupBaseAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180d497e0/SystemExceptionInitializerA0BaseAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180d498a0/SystemExceptionInitializerB0BaseAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180985054/FloatValidationDataAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180c91970/SystemMutexObjectAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180c82210/ExceptionCriticalSectionAddress/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x180c91f70/SystemMutexObjectSecondaryAddress/g' TaleWorlds.Native/src/06_utilities.c

# 美化一些魔法数字
sed -i 's/0x1d/IsOffset1cInfinityValue/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xfbffffff/MemoryAlignmentMask/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x6000000/OperationFlagMask/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xfffffffe/SystemCleanupFlag/g' TaleWorlds.Native/src/06_utilities.c

echo "常量美化完成"

# 清理备份文件
rm -f TaleWorlds.Native/src/06_utilities.c.backup