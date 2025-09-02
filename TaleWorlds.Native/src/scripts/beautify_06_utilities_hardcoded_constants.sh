#!/bin/bash

# 美化06_utilities.c中的硬编码常量
# 这个脚本将一些常见的硬编码偏移量替换为语义化的常量名

echo "开始美化06_utilities.c中的硬编码常量..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 定义一些常见的硬编码常量及其替换
# 格式: 常量名=十六进制值

# 替换一些常见的硬编码偏移量
sed -i 's/+ 0x10/+ ObjectContextOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x48/+ RegistrationHandleOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x38/+ RegistrationDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0xe4/+ RegistrationStatusOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x4d8/+ RegistrationArrayOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x4e4/+ RegistrationSizeOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x4e8/+ RegistrationCapacityOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x4e0/+ RegistrationCountOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x368/+ RegistrationValidationDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x18/+ ThreadLocalStorageDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "硬编码常量美化完成"

# 清理备份文件
rm -f /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

echo "美化工作完成"