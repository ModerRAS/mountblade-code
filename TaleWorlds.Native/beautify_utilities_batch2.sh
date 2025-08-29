#!/bin/bash

# 继续美化06_utilities.c文件中的unknown变量名
# 基于上下文给变量更有意义的名字

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 第六批变量替换（基于内存池管理上下文）
sed -i 's/unknown_180a0cc68/memoryPoolAllocationSize/g' 06_utilities.c
sed -i 's/unknown_180a0cc88/memoryPoolFreeList/g' 06_utilities.c
sed -i 's/unknown_180a0cca0/memoryPoolUsedBlocks/g' 06_utilities.c
sed -i 's/unknown_180a0ccb8/memoryPoolTotalBlocks/g' 06_utilities.c
sed -i 's/unknown_180a0ccd0/memoryPoolBlockSize/g' 06_utilities.c

# 第七批变量替换（基于缓冲区操作上下文）
sed -i 's/unknown_180a0ccf0/bufferReadPointer/g' 06_utilities.c
sed -i 's/unknown_180a0cd08/bufferWritePointer/g' 06_utilities.c
sed -i 's/unknown_180a0cd28/bufferSizeRemaining/g' 06_utilities.c
sed -i 's/unknown_180a0cd40/bufferFlushFlag/g' 06_utilities.c
sed -i 's/unknown_180a0cd58/bufferLockStatus/g' 06_utilities.c

# 第八批变量替换（基于文件系统上下文）
sed -i 's/unknown_180a0cd70/fileHandleTable/g' 06_utilities.c
sed -i 's/unknown_180a0cd88/fileAccessMode/g' 06_utilities.c
sed -i 's/unknown_180a0cd98/fileCurrentPosition/g' 06_utilities.c
sed -i 's/unknown_180a0cdb0/fileBufferSize/g' 06_utilities.c
sed -i 's/unknown_180a0cdc8/fileOperationFlag/g' 06_utilities.c

# 第九批变量替换（基于网络通信上下文）
sed -i 's/unknown_180a0cde0/networkConnectionStatus/g' 06_utilities.c
sed -i 's/unknown_180a0ce40/networkSocketHandle/g' 06_utilities.c
sed -i 's/unknown_180a03098/networkSendBuffer/g' 06_utilities.c
sed -i 's/unknown_180a03060/networkReceiveBuffer/g' 06_utilities.c
sed -i 's/unknown_180a030a8/networkPacketSize/g' 06_utilities.c

# 第十批变量替换（基于渲染系统上下文）
sed -i 's/unknown_180941cc0/renderPipelineState/g' 06_utilities.c
sed -i 's/unknown_180a0fd40/renderFrameBuffer/g' 06_utilities.c
sed -i 's/unknown_180a0fd50/renderDepthBuffer/g' 06_utilities.c
sed -i 's/unknown_180a0fd60/renderStencilBuffer/g' 06_utilities.c
sed -i 's/unknown_180a0fd70/renderTextureAtlas/g' 06_utilities.c

echo "第二批变量名美化完成"