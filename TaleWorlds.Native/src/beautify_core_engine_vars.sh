#!/bin/bash

# 批量替换02_core_engine.c中的UNK_变量
# 注意：这个脚本会美化代码中的变量名，使用语义化的命名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 02_core_engine.c 02_core_engine.c.backup

# 执行替换操作
sed -i 's/undefined UNK_180a25998;/undefined EventDispatcherConnectionPoolPointer;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a259a8;/undefined EventDispatcherConnectionStatus;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25a74;/undefined EventDispatcherConnectionTable;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25a28;/undefined EventDispatcherConnectionHandlerPointer;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25a80;/undefined EventDispatcherConnectionMemoryPool;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25a98;/undefined EventDispatcherConnectionDataBuffer;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25a50;/undefined EventDispatcherConnectionQueuePointer;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25a60;/undefined EventDispatcherConnectionStatusFlag;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25aa0;/undefined EventDispatcherConnectionConfigTable;/g' 02_core_engine.c
sed -i 's/undefined UNK_180a25ab0;/undefined EventDispatcherConnectionMemoryManager;/g' 02_core_engine.c

echo "变量替换完成"