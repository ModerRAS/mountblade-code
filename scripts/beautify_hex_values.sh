#!/bin/bash

# 网络系统十六进制值语义化美化脚本
# 用于批量替换05_networking.c文件中的十六进制值为语义化常量

# 读取源文件
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_temp.c"

# 复制源文件到临时文件
cp "$SOURCE_FILE" "$TEMP_FILE"

# 替换常见的十六进制偏移量
sed -i 's/+ 0x18)/+ NETWORK_SIZE_PACKET_HEADER)/g' "$TEMP_FILE"
sed -i 's/+ 0x14)/+ NETWORK_SIZE_CONNECTION_DATA)/g' "$TEMP_FILE"
sed -i 's/+ 0x10)/+ NETWORK_SIZE_SOCKET_CONFIG)/g' "$TEMP_FILE"
sed -i 's/+ 0x20)/+ NETWORK_SIZE_BUFFER_EXTENDED)/g' "$TEMP_FILE"
sed -i 's/+ 0x90)/+ NETWORK_OFFSET_CONNECTION_STATUS)/g' "$TEMP_FILE"
sed -i 's/+ 0x58)/+ NETWORK_OFFSET_CONNECTION_TIMEOUT)/g' "$TEMP_FILE"
sed -i 's/+ 0x50)/+ NETWORK_OFFSET_CONNECTION_DATA)/g' "$TEMP_FILE"
sed -i 's/+ 0x270)/+ NETWORK_OFFSET_SOCKET_OPTIONS)/g' "$TEMP_FILE"
sed -i 's/+ 0x80)/+ NETWORK_OFFSET_THREAD_DATA)/g' "$TEMP_FILE"
sed -i 's/+ 0x88)/+ NETWORK_OFFSET_THREAD_COUNT)/g' "$TEMP_FILE"
sed -i 's/+ 0x38)/+ NETWORK_OFFSET_SOCKET_STATE)/g' "$TEMP_FILE"
sed -i 's/+ 0x3c)/+ NETWORK_OFFSET_SOCKET_FLAGS)/g' "$TEMP_FILE"
sed -i 's/+ 0x40)/+ NETWORK_OFFSET_SOCKET_TIMEOUT)/g' "$TEMP_FILE"
sed -i 's/+ 0x44)/+ NETWORK_OFFSET_SOCKET_ERROR)/g' "$TEMP_FILE"

# 替换常见的十六进制标志和错误码
sed -i 's/== 0x80/== NETWORK_FLAG_CONNECTION_ACTIVE/g' "$TEMP_FILE"
sed -i 's/& 0x80/& NETWORK_FLAG_ENCRYPTION_ENABLED/g' "$TEMP_FILE"
sed -i 's/return 0x1f/return NETWORK_ERROR_INVALID_SOCKET/g' "$TEMP_FILE"
sed -i 's/return 0x1c/return NETWORK_ERROR_CONNECTION_FAILED/g' "$TEMP_FILE"

# 替换常见的十六进制掩码和位操作
sed -i 's/0xfffffffc/NETWORK_MASK_VALIDATION_CHECK/g' "$TEMP_FILE"
sed -i 's/>> 0x1f/>> NETWORK_SHIFT_BIT_VALIDATION/g' "$TEMP_FILE"

# 替换条件判断中的十六进制值
sed -i 's/(\(.*\)) < 0x100/(\1) < NETWORK_SIZE_BUFFER_STANDARD/g' "$TEMP_FILE"
sed -i 's/(\(.*\)) < 0x18/(\1) < NETWORK_SIZE_PACKET_HEADER/g' "$TEMP_FILE"
sed -i 's/(\(.*\)) < 0x14/(\1) < NETWORK_SIZE_CONNECTION_DATA/g' "$TEMP_FILE"

# 将处理后的文件写回源文件
mv "$TEMP_FILE" "$SOURCE_FILE"

echo "十六进制值语义化美化完成"