#!/bin/bash

# 使用perl删除包含中文字符的注释行
perl -i -ne 'print unless /\/\/.*[\x{4e00}-\x{9fff}]/' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "中文注释删除完成"