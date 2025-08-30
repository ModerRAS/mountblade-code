#!/bin/bash

# 删除重复的UTILITY_RESOURCE_HANDLE_DATA_OFFSET定义
# 保留第一个定义（行号403），删除其他的

sed -i '647d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i '1526d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "已删除重复的UTILITY_RESOURCE_HANDLE_DATA_OFFSET定义"