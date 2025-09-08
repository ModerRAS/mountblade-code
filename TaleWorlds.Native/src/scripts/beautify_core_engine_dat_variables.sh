#!/bin/bash

# 美化02_core_engine.c文件中的DAT_变量
# 这个脚本会查找文件中的DAT_变量并替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 处理常见的DAT_变量模式
# 系统字符串常量
sed -i 's/0x180d48d24/SystemStringConstantDefault/g' "$FILE_PATH"
sed -i 's/0x180d48d28/SystemStringConstantSecondary/g' "$FILE_PATH"
sed -i 's/0x180d48d2c/SystemStringConstantTertiary/g' "$FILE_PATH"
sed -i 's/0x180d48d30/SystemStringConstantQuaternary/g' "$FILE_PATH"
sed -i 's/0x180d48d34/SystemStringConstantQuinary/g' "$FILE_PATH"
sed -i 's/0x180d48d38/SystemStringConstantSenary/g' "$FILE_PATH"
sed -i 's/0x180d48d3c/SystemStringConstantSeptenary/g' "$FILE_PATH"
sed -i 's/0x180d48d40/SystemStringConstantOctonary/g' "$FILE_PATH"
sed -i 's/0x180d48d44/SystemStringConstantNonary/g' "$FILE_PATH"
sed -i 's/0x180d48d48/SystemStringConstantDenary/g' "$FILE_PATH"

# 系统模板和偏移量
sed -i 's/0x180a03a83/SystemStringTemplateOffset/g' "$FILE_PATH"
sed -i 's/0x180a03a87/SystemStringTemplateSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03a8b/SystemStringTemplateTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03a8f/SystemStringTemplateQuaternary/g' "$FILE_PATH"

# 系统状态标志
sed -i 's/0x180a03a93/SystemStatusFlagPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03a97/SystemStatusFlagSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03a9b/SystemStatusFlagTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03a9f/SystemStatusFlagQuaternary/g' "$FILE_PATH"

# 系统配置数据
sed -i 's/0x180a03aa3/SystemConfigurationPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03aa7/SystemConfigurationSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03aab/SystemConfigurationTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03aaf/SystemConfigurationQuaternary/g' "$FILE_PATH"

# 系统数据变量
sed -i 's/0x180a03ab3/SystemDataPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03ab7/SystemDataSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03abb/SystemDataTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03abf/SystemDataQuaternary/g' "$FILE_PATH"

# 系统缓冲区
sed -i 's/0x180a03ac3/SystemBufferPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03ac7/SystemBufferSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03acb/SystemBufferTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03acf/SystemBufferQuaternary/g' "$FILE_PATH"

# 系统内存管理
sed -i 's/0x180a03ad3/SystemMemoryPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03ad7/SystemMemorySecondary/g' "$FILE_PATH"
sed -i 's/0x180a03adb/SystemMemoryTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03adf/SystemMemoryQuaternary/g' "$FILE_PATH"

# 系统指针变量
sed -i 's/0x180a03ae3/SystemPointerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03ae7/SystemPointerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03aeb/SystemPointerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03aef/SystemPointerQuaternary/g' "$FILE_PATH"

# 系统标志变量
sed -i 's/0x180a03af3/SystemFlagPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03af7/SystemFlagSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03afb/SystemFlagTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03aff/SystemFlagQuaternary/g' "$FILE_PATH"

# 系统处理状态
sed -i 's/0x180a03b03/SystemProcessingStatusPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b07/SystemProcessingStatusSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b0b/SystemProcessingStatusTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b0f/SystemProcessingStatusQuaternary/g' "$FILE_PATH"

# 系统验证数据
sed -i 's/0x180a03b13/SystemValidationDataPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b17/SystemValidationDataSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b1b/SystemValidationDataTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b1f/SystemValidationDataQuaternary/g' "$FILE_PATH"

# 系统事件数据
sed -i 's/0x180a03b23/SystemEventDataPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b27/SystemEventDataSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b2b/SystemEventDataTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b2f/SystemEventDataQuaternary/g' "$FILE_PATH"

# 系统回调函数
sed -i 's/0x180a03b33/SystemCallbackPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b37/SystemCallbackSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b3b/SystemCallbackTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b3f/SystemCallbackQuaternary/g' "$FILE_PATH"

# 系统上下文数据
sed -i 's/0x180a03b43/SystemContextPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b47/SystemContextSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b4b/SystemContextTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b4f/SystemContextQuaternary/g' "$FILE_PATH"

# 系统线程局部存储
sed -i 's/0x180a03b53/SystemThreadLocalStoragePrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b57/SystemThreadLocalStorageSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b5b/SystemThreadLocalStorageTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b5f/SystemThreadLocalStorageQuaternary/g' "$FILE_PATH"

# 系统堆栈数据
sed -i 's/0x180a03b63/SystemStackDataPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b67/SystemStackDataSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b6b/SystemStackDataTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b6f/SystemStackDataQuaternary/g' "$FILE_PATH"

# 系统寄存器数据
sed -i 's/0x180a03b73/SystemRegisterDataPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b77/SystemRegisterDataSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b7b/SystemRegisterDataTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b7f/SystemRegisterDataQuaternary/g' "$FILE_PATH"

# 系统内存块
sed -i 's/0x180a03b83/SystemMemoryBlockPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b87/SystemMemoryBlockSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b8b/SystemMemoryBlockTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b8f/SystemMemoryBlockQuaternary/g' "$FILE_PATH"

# 系统缓冲区管理
sed -i 's/0x180a03b93/SystemBufferManagerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03b97/SystemBufferManagerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03b9b/SystemBufferManagerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03b9f/SystemBufferManagerQuaternary/g' "$FILE_PATH"

# 系统池管理
sed -i 's/0x180a03ba3/SystemPoolManagerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03ba7/SystemPoolManagerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03bab/SystemPoolManagerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03baf/SystemPoolManagerQuaternary/g' "$FILE_PATH"

# 系统队列管理
sed -i 's/0x180a03bb3/SystemQueueManagerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03bb7/SystemQueueManagerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03bbb/SystemQueueManagerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03bbf/SystemQueueManagerQuaternary/g' "$FILE_PATH"

# 系统节点管理
sed -i 's/0x180a03bc3/SystemNodeManagerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03bc7/SystemNodeManagerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03bcb/SystemNodeManagerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03bcf/SystemNodeManagerQuaternary/g' "$FILE_PATH"

# 系统链接管理
sed -i 's/0x180a03bd3/SystemLinkManagerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03bd7/SystemLinkManagerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03bdb/SystemLinkManagerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03bdf/SystemLinkManagerQuaternary/g' "$FILE_PATH"

# 系统资源管理
sed -i 's/0x180a03be3/SystemResourceManagerPrimary/g' "$FILE_PATH"
sed -i 's/0x180a03be7/SystemResourceManagerSecondary/g' "$FILE_PATH"
sed -i 's/0x180a03beb/SystemResourceManagerTertiary/g' "$FILE_PATH"
sed -i 's/0x180a03bef/SystemResourceManagerQuaternary/g' "$FILE_PATH"

echo "02_core_engine.c DAT_变量美化完成"