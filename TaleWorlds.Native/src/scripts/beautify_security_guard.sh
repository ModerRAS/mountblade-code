#!/bin/bash

# 批量替换SecurityGuardValue为NetworkSecurityKey
# 专门用于05_networking.c文件的美化工作

sed -i 's/SecurityGuardValue/NetworkSecurityKey/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "批量替换完成：SecurityGuardValue -> NetworkSecurityKey"