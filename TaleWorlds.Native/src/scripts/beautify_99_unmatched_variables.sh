#!/bin/bash

# 批量美化99_unmatched_functions.c中的变量名
# 为UNK_变量添加语义化定义

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 系统渲染相关变量
RENDERING_VARS=(
    "UNK_180a05c88:SystemRenderingTexturePointer"
    "UNK_180a05ca8:SystemRenderingShaderPointer"
    "UNK_180a05cc0:SystemRenderingMaterialPointer"
    "UNK_180a05ce0:SystemRenderingLightPointer"
    "UNK_180a05d08:SystemRenderingCameraPointer"
    "UNK_180a05d18:SystemRenderingViewportPointer"
    "UNK_180a05d38:SystemRenderingPipelinePointer"
    "UNK_180a05d50:SystemRenderingCommandBufferPointer"
    "UNK_180a05d60:SystemRenderingFrameBufferPointer"
)

# 系统内存管理变量
MEMORY_VARS=(
    "UNK_18010c3f0:SystemMemoryArenaPointer"
    "UNK_18010c410:SystemMemoryPoolPointer"
    "UNK_18010c430:SystemMemoryCachePointer"
    "UNK_18010c450:SystemMemoryHeapPointer"
    "UNK_18010c470:SystemMemoryStackPointer"
    "UNK_18010c490:SystemMemoryPagePointer"
    "UNK_18010c4b0:SystemMemoryBlockPointer"
    "UNK_18010c4d0:SystemMemorySegmentPointer"
    "UNK_18010c4f0:SystemMemoryRegionPointer"
    "UNK_18010c510:SystemMemoryAllocatorPointer"
    "UNK_18010c530:SystemMemoryTrackerPointer"
    "UNK_18010c550:SystemMemoryProfilerPointer"
    "UNK_18010c570:SystemMemoryDebuggerPointer"
    "UNK_18010c590:SystemMemoryMonitorPointer"
    "UNK_18010c5b0:SystemMemoryValidatorPointer"
)

# 系统网络相关变量
NETWORK_VARS=(
    "UNK_180a05d78:SystemNetworkConfigPointer"
    "UNK_180a05d90:SystemNetworkControlPointer"
    "UNK_180a05da0:SystemNetworkDataPointer"
    "UNK_180a05db8:SystemNetworkBufferPointer"
    "UNK_180a05dd8:SystemNetworkQueuePointer"
    "UNK_180a05df0:SystemNetworkStackPointer"
    "UNK_180a05e08:SystemNetworkHeapPointer"
    "UNK_180a05e28:SystemNetworkPoolPointer"
)

# 系统配置相关变量
CONFIG_VARS=(
    "UNK_18010c310:SystemConfigDebugPointer"
    "UNK_18010c330:SystemConfigLogLevelPointer"
    "UNK_18010c350:SystemConfigTracePointer"
    "UNK_18010c370:SystemConfigProfilePointer"
    "UNK_18010c390:SystemConfigMonitorPointer"
    "UNK_18010c3b0:SystemConfigBenchmarkPointer"
    "UNK_18010c3d0:SystemConfigBasePointer"
)

# 系统线程相关变量
THREAD_VARS=(
    "UNK_180a05e48:SystemThreadMainPointer"
    "UNK_180a05e68:SystemThreadWorkerPointer"
    "UNK_180a05e80:SystemThreadSchedulerPointer"
    "UNK_180a05e98:SystemThreadQueuePointer"
    "UNK_180a05eb0:SystemThreadLockPointer"
    "UNK_180a05ec8:SystemThreadSemaphorePointer"
    "UNK_180a05ee8:SystemThreadPoolPointer"
    "UNK_180a05f00:SystemThreadStackPointer"
    "UNK_180a05f10:SystemThreadContextPointer"
)

# 系统事件相关变量
EVENT_VARS=(
    "UNK_180a05f38:SystemEventQueuePointer"
    "UNK_180a05f50:SystemEventHandlerPointer"
    "UNK_180a05f68:SystemEventDispatcherPointer"
    "UNK_180a05f80:SystemEventLoopPointer"
    "UNK_180a05f98:SystemEventTimerPointer"
    "UNK_180a05fb0:SystemEventSignalPointer"
    "UNK_180a05fc8:SystemEventCallbackPointer"
    "UNK_180a05fe0:SystemEventListenerPointer"
    "UNK_180a05ff8:SystemEventNotifierPointer"
)

# 系统数据相关变量
DATA_VARS=(
    "UNK_180a06010:SystemDataTablePointer"
    "UNK_180a06028:SystemDataStructurePointer"
    "UNK_180a06040:SystemDataBufferPointer"
    "UNK_180a06058:SystemDataCachePointer"
    "UNK_180a06078:SystemDataStreamPointer"
    "UNK_180a06098:SystemDataQueuePointer"
    "UNK_180a060c0:SystemDataStackPointer"
    "UNK_180a060e0:SystemDataPoolPointer"
)

# 处理渲染变量
for var in "${RENDERING_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统渲染相关指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

# 处理内存变量
for var in "${MEMORY_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统内存管理指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

# 处理网络变量
for var in "${NETWORK_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统网络相关指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

# 处理配置变量
for var in "${CONFIG_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统配置相关指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

# 处理线程变量
for var in "${THREAD_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统线程相关指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

# 处理事件变量
for var in "${EVENT_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统事件相关指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

# 处理数据变量
for var in "${DATA_VARS[@]}"; do
    IFS=':' read -r old_name new_name <<< "$var"
    sed -i "s/undefined $old_name;/\/\/ 系统数据相关指针\\n#define $new_name $old_name\\nundefined $new_name;/g" "$FILE_PATH"
done

echo "变量美化完成"