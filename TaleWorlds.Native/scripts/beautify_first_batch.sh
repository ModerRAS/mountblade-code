#!/bin/bash

# 美化变量名和数据类型脚本
# 这个脚本将 TaleWorlds.Native.dll.c 中的 undefined 类型和通用变量名替换为更有意义的名称

INPUT_FILE="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/TaleWorlds.Native.dll.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 第一阶段：替换数据类型
sed -e 's/undefined globalConfigData;/engine_config_t globalConfigData;/g' \
    -e 's/undefined globalEngineFlags;/uint32_t globalEngineFlags;/g' \
    -e 's/undefined engineInitialize;/engine_init_func_t engineInitialize;/g' \
    -e 's/undefined engineStateFlags;/uint32_t engineStateFlags;/g' \
    -e 's/undefined engineStateData;/engine_state_t engineStateData;/g' \
    -e 's/undefined renderContextFlags;/uint32_t renderContextFlags;/g' \
    -e 's/undefined renderContextData;/render_context_t renderContextData;/g' \
    -e 's/undefined physicsSystemFlags;/uint32_t physicsSystemFlags;/g' \
    -e 's/undefined physicsSystemData;/physics_system_t physicsSystemData;/g' \
    -e 's/undefined audioSystemFlags;/uint32_t audioSystemFlags;/g' \
    -e 's/undefined audioSystemData;/audio_system_t audioSystemData;/g' \
    -e 's/undefined audioEngineData;/audio_engine_t audioEngineData;/g' \
    -e 's/undefined inputSystemData;/input_system_t inputSystemData;/g' \
    -e 's/undefined script_system_data;/script_system_t script_system_data;/g' \
    -e 's/undefined networkSystemData;/network_system_t networkSystemData;/g' \
    -e 's/undefined engine_update_loop_function;/engine_update_func_t engine_update_loop_function;/g' \
    -e 's/undefined script_engine_runtime;/script_engine_t script_engine_runtime;/g' \
    -e 's/undefined memory_manager_runtime;/memory_manager_t memory_manager_runtime;/g' \
    -e 's/undefined resource_engine_runtime;/resource_engine_t resource_engine_runtime;/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名和数据类型美化完成"