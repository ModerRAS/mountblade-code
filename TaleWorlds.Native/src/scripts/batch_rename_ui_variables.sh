#!/bin/bash

# 批量重命名04_ui_system.c中的UNK_变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 处理剩余的UNK_18094变量
sed -i 's/undefined UNK_18094c9b0;/void* UISystemBufferDataTable9B0;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094c9b8;/void* UISystemBufferDataTable9B8;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094bbf8;/void* UISystemBufferDataTableBF8;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094c0b8;/void* UISystemBufferDataTable0B8;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094bed8;/void* UISystemBufferDataTableED8;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094bf18;/void* UISystemBufferDataTableF18;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094be80;/void* UISystemBufferDataTableE80;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094c718;/void* UISystemBufferDataTable718;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094c758;/void* UISystemBufferDataTable758;/g' 04_ui_system.c
sed -i 's/undefined UNK_18094bf50;/void* UISystemBufferDataTableF50;/g' 04_ui_system.c

echo "批量重命名完成"