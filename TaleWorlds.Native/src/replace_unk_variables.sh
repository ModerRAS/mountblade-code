#!/bin/bash

# 批量替换 UNK_变量的脚本
# 文件路径: /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 定义替换映射
declare -A replacements=(
    ["UNK_180986f68"]="NetworkConnectionContext"
    ["UNK_180986f90"]="NetworkConnectionValidator"
    ["UNK_18095af38"]="NetworkMemoryAllocator"
    ["UNK_180863400"]="NetworkCodeBuffer"
    ["UNK_1808633a0"]="NetworkCodeBufferAlt"
    ["UNK_18095b500"]="NetworkConnectionBuffer"
    ["UNK_180957600"]="NetworkErrorMemory"
    ["UNK_180984dd0"]="NetworkProtocolBuffer"
    ["UNK_1809874b0"]="NetworkConnectionConfig"
    ["UNK_180981c30"]="NetworkStateManager"
    ["UNK_180981be0"]="NetworkStateValidator"
    ["UNK_180981c08"]="NetworkStateCleaner"
    ["UNK_180985010"]="NetworkRoutingTable"
    ["UNK_18097cf70"]="NetworkRoutingCache"
    ["UNK_180985080"]="NetworkProtocolHandler"
)

# 文件路径
file="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原文件
cp "$file" "$file.backup"

# 执行替换
for old in "${!replacements[@]}"; do
    new="${replacements[$old]}"
    echo "替换: $old -> $new"
    sed -i "s/\\b$old\\b/$new/g" "$file"
done

echo "批量替换完成！"