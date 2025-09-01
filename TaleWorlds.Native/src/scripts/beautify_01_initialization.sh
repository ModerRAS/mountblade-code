#!/bin/bash

# 美化01_initialization.c文件中的FUN_函数调用
# 这个脚本将替换文件中的FUN_函数调用为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
cp 01_initialization.c 01_initialization.c.tmp

# 函数替换映射
# 根据函数的用途和上下文来命名

# 内存管理相关函数
sed -i 's/FUN_18062dee0/InitializeMemoryDescriptor/g' 01_initialization.c.tmp
sed -i 's/FUN_1800aecf0/RegisterMemoryManager/g' 01_initialization.c.tmp
sed -i 's/FUN_18062de90/ReleaseMemoryDescriptor/g' 01_initialization.c.tmp
sed -i 's/FUN_1800ba6f0/InitializeSystemAllocator/g' 01_initialization.c.tmp
sed -i 's/FUN_180627910/AddToMemoryPool/g' 01_initialization.c.tmp
sed -i 's/FUN_18004b730/InitializeSystemResources/g' 01_initialization.c.tmp
sed -i 's/FUN_1800b4550/InitializeInputManager/g' 01_initialization.c.tmp
sed -i 's/FUN_1806277c0/AllocateSystemMemory/g' 01_initialization.c.tmp
sed -i 's/FUN_1800ba940/CreateMemoryContext/g' 01_initialization.c.tmp
sed -i 's/FUN_18062dee0/SetupMemoryDescriptor/g' 01_initialization.c.tmp

# 系统初始化相关函数
sed -i 's/FUN_1800ae730/InitializePrimaryResource/g' 01_initialization.c.tmp
sed -i 's/FUN_180627be0/ConfigureDataManager/g' 01_initialization.c.tmp
sed -i 's/FUN_18004b790/InitializeSystemContext/g' 01_initialization.c.tmp
sed -i 's/FUN_180057010/CleanupMemoryRegion/g' 01_initialization.c.tmp
sed -i 's/FUN_180058370/ProcessMemoryBlock/g' 01_initialization.c.tmp
sed -i 's/FUN_180058420/ExecuteMemoryOperation/g' 01_initialization.c.tmp
sed -i 's/FUN_180142b20/GetMemoryAllocator/g' 01_initialization.c.tmp

# 数据处理相关函数
sed -i 's/FUN_18004c050/ProcessDataQueue/g' 01_initialization.c.tmp
sed -i 's/FUN_18004bf50/ProcessQueueItem/g' 01_initialization.c.tmp
sed -i 's/FUN_18004c480/ProcessDataBuffer/g' 01_initialization.c.tmp
sed -i 's/FUN_18004ca00/InitializeDataSystem/g' 01_initialization.c.tmp
sed -i 's/FUN_18004ca30/ConfigureDataProcessor/g' 01_initialization.c.tmp
sed -i 's/FUN_18004caa0/SetupDataHandler/g' 01_initialization.c.tmp
sed -i 's/FUN_18004cc20/InitializeDataChannels/g' 01_initialization.c.tmp

# 系统状态管理函数
sed -i 's/FUN_180057170/UpdateSystemStatus/g' 01_initialization.c.tmp
sed -i 's/FUN_18005e570/AllocateSystemMemoryEx/g' 01_initialization.c.tmp
sed -i 's/FUN_180057d70/AllocateSystemHandle/g' 01_initialization.c.tmp
sed -i 's/FUN_180057550/InitializeSystemFlags/g' 01_initialization.c.tmp
sed -i 's/FUN_1800578a0/ConfigureSystemSettings/g' 01_initialization.c.tmp
sed -i 's/FUN_180057830/SetupSystemParameters/g' 01_initialization.c.tmp
sed -i 's/FUN_18005d260/UpdateSystemConfiguration/g' 01_initialization.c.tmp

# 资源管理函数
sed -i 's/FUN_18005d580/ReleaseSystemResources/g' 01_initialization.c.tmp
sed -i 's/FUN_1800590b0/AllocateResourceMemory/g' 01_initialization.c.tmp
sed -i 's/FUN_18005d1f0/UpdateResourceStatus/g' 01_initialization.c.tmp
sed -i 's/FUN_180092820/InitializeRenderManager/g' 01_initialization.c.tmp
sed -i 's/FUN_18005ca20/InitializeNodeManager/g' 01_initialization.c.tmp
sed -i 's/FUN_1801725e0/ProcessRenderData/g' 01_initialization.c.tmp
sed -i 's/FUN_1800a3880/InitializeTextureManager/g' 01_initialization.c.tmp
sed -i 's/FUN_180062300/InitializeContextManager/g' 01_initialization.c.tmp

# 系统工具函数
sed -i 's/FUN_180628380/GetSystemParameterValue/g' 01_initialization.c.tmp
sed -i 's/FUN_18005c8a0/RegisterSystemComponent/g' 01_initialization.c.tmp
sed -i 's/FUN_180627ae0/CreateSystemContext/g' 01_initialization.c.tmp
sed -i 's/FUN_180171f10/GetSystemComponent/g' 01_initialization.c.tmp
sed -i 's/FUN_18020e0e0/InitializeSystemComponent/g' 01_initialization.c.tmp
sed -i 's/FUN_18020e840/ActivateSystemComponent/g' 01_initialization.c.tmp
sed -i 's/FUN_1802567b0/RegisterSystemCallback/g' 01_initialization.c.tmp
sed -i 's/FUN_18008d660/CreateSystemNode/g' 01_initialization.c.tmp

# 备份原始文件
mv 01_initialization.c 01_initialization.c.backup

# 替换文件
mv 01_initialization.c.tmp 01_initialization.c

echo "函数重命名完成"