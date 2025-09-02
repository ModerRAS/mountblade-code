#!/bin/bash

# 美化网络文件中的硬编码值
# 将硬编码的偏移量替换为语义化常量

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 替换硬编码的偏移量为常量
sed -i "s/+ 0x78/+ NetworkConnectionContextOffset/g" "$INPUT_FILE"
sed -i "s/+ 0x24/+ NetworkConnectionValidationOffset/g" "$INPUT_FILE"
sed -i "s/+ 0x98/+ NetworkConnectionStatusOffset/g" "$INPUT_FILE"
sed -i "s/+ 0x20/+ NetworkPacketProcessingSize/g" "$INPUT_FILE"
sed -i "s/+ 0x88/+ NetworkPacketTableIndexOffset/g" "$INPUT_FILE"
sed -i "s/+ 0x80/+ NetworkPacketTableDataOffset/g" "$INPUT_FILE"
sed -i "s/+ 0x270/+ NetworkPacketProcessorOffset/g" "$INPUT_FILE"
sed -i "s/+ 0x38/+ NetworkPacketStatusOffset38/g" "$INPUT_FILE"
sed -i "s/+ 0x3c/+ NetworkPacketStatusOffset3c/g" "$INPUT_FILE"
sed -i "s/+ 0x40/+ NetworkPacketStatusOffset40/g" "$INPUT_FILE"
sed -i "s/+ 0x44/+ NetworkPacketStatusOffset44/g" "$INPUT_FILE"

# 替换硬编码的魔数为常量
sed -i "s/0x5453494c/NetworkPacketMagicSilive/g" "$INPUT_FILE"
sed -i "s/0x54495645/NetworkPacketMagicTivel/g" "$INPUT_FILE"
sed -i "s/0x42495645/NetworkPacketMagicBivel/g" "$INPUT_FILE"
sed -i "s/0x544e5645/NetworkPacketMagicTnvel/g" "$INPUT_FILE"
sed -i "s/0x42545645/NetworkPacketMagicBtvel/g" "$INPUT_FILE"

# 替换硬编码的乘法
sed -i "s/\* 0x10/\* NetworkPacketEntrySize/g" "$INPUT_FILE"

echo "网络文件硬编码值美化完成"