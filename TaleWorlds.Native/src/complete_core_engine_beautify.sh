#!/bin/bash

# 完整美化02_core_engine.c脚本
# 处理所有剩余的undefined变量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 02_core_engine.c 02_core_engine.c.backup_complete_$(date +%Y%m%d_%H%M%S)

echo "开始完整美化02_core_engine.c文件..."

# 处理剩余的undefined变量
# 将所有undefined UnknownMemoryRegion* 替换为 void* SystemMemoryRegion*
sed -i 's/undefined UnknownMemoryRegion\([A-Za-z0-9]*\);/void* SystemMemoryRegion\1;/g' 02_core_engine.c

# 将所有undefined SystemMemory* 替换为 void* SystemMemory*
sed -i 's/undefined SystemMemory\([A-Za-z]*\);/void* SystemMemory\1;/g' 02_core_engine.c

# 将所有undefined Network* 替换为 void* Network*
sed -i 's/undefined Network\([A-Za-z]*\);/void* Network\1;/g' 02_core_engine.c

# 将所有undefined SystemConfigurationData* 替换为 void* SystemConfigurationData*
sed -i 's/undefined SystemConfigurationData\([A-Za-z0-9]*\);/void* SystemConfigurationData\1;/g' 02_core_engine.c

# 将所有undefined SystemMemoryDataTemplate* 替换为 void* SystemMemoryDataTemplate*
sed -i 's/undefined SystemMemoryDataTemplate\([A-Za-z]*\);/void* SystemMemoryDataTemplate\1;/g' 02_core_engine.c

# 将所有undefined ResourceTableData* 替换为 void* ResourceTableData*
sed -i 's/undefined ResourceTableData\([A-Za-z0-9]*\);/void* ResourceTableData\1;/g' 02_core_engine.c

# 将所有undefined EventDispatcherData* 替换为 void* EventDispatcherData*
sed -i 's/undefined EventDispatcherData\([A-Za-z0-9]*\);/void* EventDispatcherData\1;/g' 02_core_engine.c

# 将所有undefined CoreEngineDataTemplate* 替换为 void* CoreEngineDataTemplate*
sed -i 's/undefined CoreEngineDataTemplate\([A-Za-z]*\);/void* CoreEngineDataTemplate\1;/g' 02_core_engine.c

# 将所有undefined EngineSystemConfigurationNode* 替换为 void* EngineSystemConfigurationNode*
sed -i 's/undefined EngineSystemConfigurationNode\([A-Za-z]*\);/void* EngineSystemConfigurationNode\1;/g' 02_core_engine.c

# 处理特殊变量名
sed -i 's/undefined SystemGlobalDataFlag;/void* SystemGlobalDataFlag;/g' 02_core_engine.c
sed -i 's/undefined SystemConfigDataTable;/void* SystemConfigDataTable;/g' 02_core_engine.c
sed -i 's/undefined SystemNetworkBuffer;/void* SystemNetworkBuffer;/g' 02_core_engine.c
sed -i 's/undefined SystemRenderContext;/void* SystemRenderContext;/g' 02_core_engine.c
sed -i 's/undefined SystemAudioContext;/void* SystemAudioContext;/g' 02_core_engine.c
sed -i 's/undefined SystemInputBuffer;/void* SystemInputBuffer;/g' 02_core_engine.c
sed -i 's/undefined SystemPhysicsContext;/void* SystemPhysicsContext;/g' 02_core_engine.c
sed -i 's/undefined SystemResourceTable;/void* SystemResourceTable;/g' 02_core_engine.c

# 处理以数字结尾的变量
sed -i 's/undefined SystemConfigurationData\([0-9]*\);/void* SystemConfigurationData\1;/g' 02_core_engine.c

# 处理undefined1和undefined4类型
sed -i 's/undefined1 \([A-Za-z]*\);/uint8_t \1;/g' 02_core_engine.c
sed -i 's/undefined4 \([A-Za-z]*\);/uint32_t \1;/g' 02_core_engine.c

# 处理函数声明中的undefined
sed -i 's/undefined CoreEngineInitializeResourceTable;/void* CoreEngineInitializeResourceTable;/g' 02_core_engine.c
sed -i 's/undefined CoreEngineSetupResourceAllocator;/void* CoreEngineSetupResourceAllocator;/g' 02_core_engine.c
sed -i 's/undefined CoreEngineInitializeResourcePool;/void* CoreEngineInitializeResourcePool;/g' 02_core_engine.c
sed -i 's/undefined CoreEngineSetupEventDispatcher;/void* CoreEngineSetupEventDispatcher;/g' 02_core_engine.c

echo "核心引擎文件美化完成"
echo "请检查处理结果"