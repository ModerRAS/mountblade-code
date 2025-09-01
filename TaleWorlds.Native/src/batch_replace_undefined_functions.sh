#!/bin/bash

# 批量替换02_core_engine.c中的undefined函数为void类型
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换常见的undefined函数声明为void
sed -i 's/^undefined CoreEngine/void CoreEngine/g' 02_core_engine.c
sed -i 's/^undefined AudioSystem/void AudioSystem/g' 02_core_engine.c

# 清理脚本文件
rm -f /dev/shm/mountblade-code/TaleWorlds.Native/src/batch_replace_undefined_functions.sh

echo "批量替换完成"