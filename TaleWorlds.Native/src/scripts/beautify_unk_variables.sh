#!/bin/bash

# 批量重命名UNK变量为更有意义的名称
# 这个脚本用于美化00_data_definitions.h文件中的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
TEMP_FILE="/tmp/00_data_definitions_temp.h"

# 创建一些映射关系，将UNK变量重命名为更有意义的名称
# 注意：这些是基于上下文推测的名称，可能需要根据实际情况调整

# 系统配置相关的UNK变量
sed -i 's/UNK_180a39af0/SystemConfigurationNetworkSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39ad8/SystemConfigurationSecuritySettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b18/SystemConfigurationMemorySettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b00/SystemConfigurationThreadSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39a88/SystemConfigurationDatabaseSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39a70/SystemConfigurationFileSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39ab8/SystemConfigurationGraphicsSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39aa0/SystemConfigurationAudioSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39ba0/SystemConfigurationInputSettings/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b88/SystemConfigurationDisplaySettings/g' "$INPUT_FILE"

# 网络相关的UNK变量
sed -i 's/UNK_180a39bd8/NetworkConnectionConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39bc0/NetworkSecurityConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b48/NetworkProtocolConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b30/NetworkTimeoutConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b78/NetworkBufferConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39b68/NetworkCompressionConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39c80/NetworkEncryptionConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39c60/NetworkAuthenticationConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39cb8/NetworkLoggingConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39c98/NetworkDebugConfig/g' "$INPUT_FILE"

# 内存相关的UNK变量
sed -i 's/UNK_180a39378/MemoryAllocationConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39360/MemoryPoolConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a394a0/MemoryCacheConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39480/MemoryBufferConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a394e0/MemoryAlignmentConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a394b8/MemoryProtectionConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39428/MemoryTrackingConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39408/MemoryDebugConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39468/MemoryPerformanceConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39450/MemoryStatisticsConfig/g' "$INPUT_FILE"

# 字符串相关的UNK变量
sed -i 's/UNK_180a395c0/StringEncodingConfig/g' "$INPUT_FILE"
sed -i 's/UNK_180a39598/StringValidationConfig/g' "$INPUT_FILE"

echo "变量名美化完成"