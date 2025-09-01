#!/bin/bash
# 修复05_networking.c中的longlong和ulonglong类型问题
# 将所有的longlong替换为long long
# 将所有的ulonglong替换为unsigned long long

sed -i 's/longlong/long long/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/ulonglong/unsigned long long/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "已修复05_networking.c中的所有longlong和ulonglong类型问题"