#!/bin/bash
# 修复05_networking.c中的longlong类型问题
# 将所有的longlong替换为long long

sed -i 's/longlong/long long/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "已修复05_networking.c中的所有longlong类型问题"