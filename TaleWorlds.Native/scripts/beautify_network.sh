#!/bin/bash

# 美化05_networking.c文件中的undefined类型
# 将undefined替换为void*，undefined8替换为uint64_t

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换undefined为void*
sed -i 's/^undefined /void* /g' 05_networking.c

# 替换undefined8为uint64_t
sed -i 's/^undefined8 /uint64_t /g' 05_networking.c

echo "美化完成"