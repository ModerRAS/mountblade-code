#!/bin/bash

# 美化05_networking.c文件中的FUN_函数名
# 将FUN_开头的函数名改为有意义的名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 定义函数映射关系
declare -A func_mapping=(
    ["FUN_18076b6f0"]="NetworkCompressData"
    ["FUN_18074b6f0"]="NetworkDecompressData"
    ["FUN_180844050"]="NetworkSendPacketBasic"
    ["FUN_180844100"]="NetworkSendPacketWithHeader"
    ["FUN_1808441b0"]="NetworkSendPacketWithChecksum"
    ["FUN_180844260"]="NetworkSendPacketWithEncryption"
    ["FUN_180844300"]="NetworkSendPacketWithCompression"
    ["FUN_1808443b0"]="NetworkSendPacketWithPriority"
    ["FUN_180844460"]="NetworkSendPacketWithAck"
    ["FUN_180844570"]="NetworkSendPacketWithRetry"
    ["FUN_180844650"]="NetworkSendPacketWithTimeout"
    ["FUN_1808447d0"]="NetworkSendPacketWithFragmentation"
    ["FUN_180844910"]="NetworkReceivePacketBasic"
    ["FUN_1808449c0"]="NetworkReceivePacketWithHeader"
    ["FUN_180844a30"]="NetworkReceivePacketWithChecksum"
    ["FUN_180844b20"]="NetworkReceivePacketWithEncryption"
    ["FUN_180844c00"]="NetworkReceivePacketWithCompression"
    ["FUN_180844d00"]="NetworkReceivePacketWithValidation"
)

# 执行替换
for old_func in "${!func_mapping[@]}"; do
    new_func="${func_mapping[$old_func]}"
    echo "替换: $old_func -> $new_func"
    sed -i "s/$old_func/$new_func/g" "$FILE"
done

echo "函数名替换完成"
echo "文件大小: $(wc -c < "$FILE") 字节"