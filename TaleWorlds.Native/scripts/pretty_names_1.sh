#!/bin/bash

# 脚本：美化TaleWorlds.Native.dll.c中的变量名
# 这个脚本将批量替换一些明显的无意义变量名为有意义的名称

echo "开始美化变量名..."

# 替换一些明显的全局变量
sed -i 's/global_configuration_data/gameGlobalConfig/g' TaleWorlds.Native.dll.c
sed -i 's/global_configuration_flags/gameGlobalFlags/g' TaleWorlds.Native.dll.c
sed -i 's/engine_init_func/engineInitializeFunction/g' TaleWorlds.Native.dll.c
sed -i 's/engine_state_flags/engineStateFlags/g' TaleWorlds.Native.dll.c
sed -i 's/engine_state_data/engineStateData/g' TaleWorlds.Native.dll.c
sed -i 's/render_context_flags/renderContextFlags/g' TaleWorlds.Native.dll.c
sed -i 's/render_context_data/renderContextData/g' TaleWorlds.Native.dll.c
sed -i 's/physics_system_flags/physicsSystemFlags/g' TaleWorlds.Native.dll.c
sed -i 's/physics_system_data/physicsSystemData/g' TaleWorlds.Native.dll.c
sed -i 's/audio_system_flags/audioSystemFlags/g' TaleWorlds.Native.dll.c
sed -i 's/audio_system_data/audioSystemData/g' TaleWorlds.Native.dll.c
sed -i 's/audio_engine_data/audioEngineData/g' TaleWorlds.Native.dll.c
sed -i 's/input_system_data/inputSystemData/g' TaleWorlds.Native.dll.c
sed -i 's/input_engine_data/inputEngineData/g' TaleWorlds.Native.dll.c
sed -i 's/script_system_data/scriptSystemData/g' TaleWorlds.Native.dll.c
sed -i 's/network_module_data/networkModuleData/g' TaleWorlds.Native.dll.c
sed -i 's/engine_update_function/engineUpdateFunction/g' TaleWorlds.Native.dll.c
sed -i 's/memory_allocator_data/memoryAllocatorData/g' TaleWorlds.Native.dll.c
sed -i 's/game_engine_instance/gameEngineInstance/g' TaleWorlds.Native.dll.c
sed -i 's/game_engine_flags/gameEngineFlags/g' TaleWorlds.Native.dll.c
sed -i 's/game_world_data/gameWorldData/g' TaleWorlds.Native.dll.c
sed -i 's/game_world_flags/gameWorldFlags/g' TaleWorlds.Native.dll.c

echo "第一组变量名替换完成"