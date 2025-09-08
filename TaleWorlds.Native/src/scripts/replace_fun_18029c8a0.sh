#!/bin/bash

# 批量替换脚本：替换FUN_18029c8a0为ManageSystemResourceAllocation
# 只用于美化代码，不改变逻辑

sed -i 's/FUN_18029c8a0/ManageSystemResourceAllocation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "替换完成：FUN_18029c8a0 -> ManageSystemResourceAllocation"