#!/bin/bash

# 美化99_unmatched_functions.c中的_DAT_180c86938变量
# 将所有_DAT_180c86938替换为SystemCoreDataTable

sed -i 's/_DAT_180c86938/SystemCoreDataTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "已完成_DAT_180c86938变量的美化"