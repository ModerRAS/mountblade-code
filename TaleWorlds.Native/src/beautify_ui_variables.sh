#!/bin/bash

# 美化UI系统文件中的变量名
# 将undefined类型变量替换为适当的类型和语义化名称

sed -i 's/undefined UISystemRenderDataTableec;/void* UISystemRenderDataTableEC;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTablee8;/void* UISystemRenderDataTableE8;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTablee0;/void* UISystemRenderDataTableE0;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTable200;/void* UISystemRenderDataTable200;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTablefc;/void* UISystemRenderDataTableFC;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTablef8;/void* UISystemRenderDataTableF8;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTablef0;/void* UISystemRenderDataTableF0;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTablec;/void* UISystemRenderDataTableC;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTable8;/void* UISystemRenderDataTable8;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTable0;/void* UISystemRenderDataTable0;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTable2f8;/void* UISystemRenderDataTable2F8;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTable20;/void* UISystemRenderDataTable20;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemRenderDataTableb0;/void* UISystemRenderDataTableB0;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化其他undefined变量
sed -i 's/undefined UISystemRenderStateData;/void* UISystemRenderStateData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemTextureCacheData;/void* UISystemTextureCacheData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemFontCacheData;/void* UISystemFontCacheData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemMemoryPoolPointer;/void* UISystemMemoryPoolPointer;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/undefined UISystemMemoryAllocatorPointer;/void* UISystemMemoryAllocatorPointer;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统变量名美化完成"