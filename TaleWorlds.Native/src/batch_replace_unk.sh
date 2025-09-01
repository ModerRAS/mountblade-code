#!/bin/bash

# 批量处理UNK_变量替换
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 系统管理器数据（继续处理）
sed -i 's/UNK_180156240/SystemResourceManagerData/g' "$FILE"
sed -i 's/UNK_180156260/SystemDataManagerData/g' "$FILE"
sed -i 's/UNK_180156280/SystemStringManagerData/g' "$FILE"
sed -i 's/UNK_1801562a0/SystemDeviceManagerData/g' "$FILE"
sed -i 's/UNK_1801562c0/SystemDebugManagerData/g' "$FILE"
sed -i 's/UNK_1801562e0/SystemNetworkManagerData/g' "$FILE"

# 资源处理数据
sed -i 's/UNK_180a073f0/ResourceValidationData/g' "$FILE"
sed -i 's/UNK_180a07400/ResourceProcessingData/g' "$FILE"
sed -i 's/UNK_180a07420/ResourceAllocationData/g' "$FILE"
sed -i 's/UNK_180a07438/ResourceHashData/g' "$FILE"
sed -i 's/UNK_180a07450/ResourceChecksumData/g' "$FILE"
sed -i 's/UNK_180a07470/ResourceMetadataData/g' "$FILE"
sed -i 's/UNK_180a07490/ResourceBufferManagerData/g' "$FILE"
sed -i 's/UNK_180a074b8/ResourceCacheManagerData/g' "$FILE"
sed -i 's/UNK_180a074d8/ResourceStreamManagerData/g' "$FILE"
sed -i 's/UNK_180a074f8/ResourceCompressionData/g' "$FILE"
sed -i 's/UNK_180a07518/ResourceEncryptionData/g' "$FILE"
sed -i 's/UNK_180a07530/ResourceSignatureData/g' "$FILE"
sed -i 's/UNK_180a07548/ResourceAuthenticationData/g' "$FILE"
sed -i 's/UNK_180a07568/ResourceSerializationData/g' "$FILE"
sed -i 's/UNK_180a07580/ResourceDeserializationData/g' "$FILE"
sed -i 's/UNK_180a075a0/ResourceFormatData/g' "$FILE"
sed -i 's/UNK_180a075b0/ResourceVersionData/g' "$FILE"
sed -i 's/UNK_180a075d0/ResourceLocaleData/g' "$FILE"
sed -i 's/UNK_180a075f0/ResourcePlatformData/g' "$FILE"

echo "批量替换完成"