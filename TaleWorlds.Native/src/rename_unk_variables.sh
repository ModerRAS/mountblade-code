#!/bin/bash

# 批量重命名06_utilities.c中的UNK_变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 06_utilities.c 06_utilities.c.backup_unk_rename

# 系统配置缓冲区变量
sed -i 's/uint8_t UNK_180a331c0;/uint8_t SystemConfigurationBufferD0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33200;/uint8_t SystemConfigurationBufferE0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33250;/uint8_t SystemConfigurationBufferF0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33280;/uint8_t SystemConfigurationBufferG0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a332c8;/uint8_t SystemConfigurationBufferH0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a332f8;/uint8_t SystemConfigurationBufferI0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33330;/uint8_t SystemConfigurationBufferJ0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33370;/uint8_t SystemConfigurationBufferK0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a333c0;/uint8_t SystemConfigurationBufferL0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33400;/uint8_t SystemConfigurationBufferM0;/g' 06_utilities.c

# 系统状态变量
sed -i 's/uint8_t UNK_180a33450;/uint8_t SystemStatusIndicatorA0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a334a0;/uint8_t SystemStatusIndicatorB0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a334f0;/uint8_t SystemStatusIndicatorC0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33540;/uint8_t SystemStatusIndicatorD0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33590;/uint8_t SystemStatusIndicatorE0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a335d8;/uint8_t SystemStatusIndicatorF0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33610;/uint8_t SystemStatusIndicatorG0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33660;/uint8_t SystemStatusIndicatorH0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a336b0;/uint8_t SystemStatusIndicatorI0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a336f0;/uint8_t SystemStatusIndicatorJ0;/g' 06_utilities.c

# 系统数据变量
sed -i 's/uint8_t UNK_180a33740;/uint8_t SystemDataBufferA0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33780;/uint8_t SystemDataBufferB0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a337d0;/uint8_t SystemDataBufferC0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33820;/uint8_t SystemDataBufferD0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33870;/uint8_t SystemDataBufferE0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a338e0;/uint8_t SystemDataBufferF0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33930;/uint8_t SystemDataBufferG0;/g' 06_utilities.c

# 其他系统变量
sed -i 's/uint8_t UNK_180a2c968;/uint8_t SystemControlRegisterA0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33988;/uint8_t SystemControlRegisterB0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a339b0;/uint8_t SystemControlRegisterC0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a339c0;/uint8_t SystemControlRegisterD0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a339e0;/uint8_t SystemControlRegisterE0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a339e8;/uint8_t SystemControlRegisterF0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33a60;/uint8_t SystemControlRegisterG0;/g' 06_utilities.c

# 系统处理变量
sed -i 's/uint8_t UNK_180a33c10;/uint8_t SystemProcessingBufferA0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_180a33c90;/uint8_t SystemProcessingBufferB0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_18053f010;/uint8_t SystemProcessingBufferC0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_18053f040;/uint8_t SystemProcessingBufferD0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_18053f080;/uint8_t SystemProcessingBufferE0;/g' 06_utilities.c
sed -i 's/uint8_t UNK_18053f090;/uint8_t SystemProcessingBufferF0;/g' 06_utilities.c

# 数据访问变量
sed -i 's/byte DAT_180c91d14;/byte SystemDataAccessRegisterA0;/g' 06_utilities.c

echo "批量重命名完成"