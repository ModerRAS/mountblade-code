#!/bin/bash

# 删除06_utilities.c文件中的WARNING注释
sed -i '/WARNING:.*jumptable/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i '/WARNING: Removing unreachable block/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "已删除所有WARNING注释"