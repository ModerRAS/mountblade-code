#!/bin/bash

# 清理06_utilities.c文件中的中文注释
sed -i '/\/\/ .*[\u4e00-\u9fff]/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "中文注释清理完成"