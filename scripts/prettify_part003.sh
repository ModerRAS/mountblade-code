#!/bin/bash
# 美化脚本 - 01_initialization_part003.c
# 本脚本将函数名和变量名替换为有意义的名称

# 函数名替换
sed -i 's/FUN_18002f270/initialize_graphics_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f370/initialize_audio_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f460/initialize_input_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f550/initialize_network_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f640/initialize_database_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f730/initialize_ui_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f820/initialize_physics_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002f910/initialize_animation_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002fa00/initialize_particle_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002faf0/initialize_shader_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002fbe0/initialize_texture_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002fcd0/initialize_material_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002fdc0/initialize_mesh_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002feb0/initialize_light_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_18002ffa0/initialize_camera_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030090/initialize_render_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030180/initialize_postprocess_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030270/initialize_water_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030360/initialize_terrain_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030450/initialize_vegetation_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030540/initialize_sky_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030630/initialize_weather_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030720/initialize_sound_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030810/initialize_music_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_180030900/initialize_voice_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/FUN_1800309f0/initialize_effects_node_structure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c

# 变量名替换
sed -i 's/DAT_180a01078/graphics_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01088/audio_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01098/input_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a010a8/network_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a010b8/database_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a010c8/ui_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a010d8/physics_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a010e8/animation_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a010f8/particle_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01108/shader_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01118/texture_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01128/material_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01138/mesh_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01148/light_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01158/camera_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01168/render_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01178/postprocess_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01188/water_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01198/terrain_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a011a8/vegetation_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a011b8/sky_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a011c8/weather_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a011d8/sound_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a011e8/music_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a011f8/voice_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/DAT_180a01208/effects_data_target/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c

# 引用名替换
sed -i 's/UNK_180a00388/graphics_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00398/audio_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a003a8/input_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a003b8/network_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a003c8/database_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a003d8/ui_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a003e8/physics_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a003f8/animation_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00408/particle_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00418/shader_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00428/texture_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00438/material_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00448/mesh_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00458/light_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00468/camera_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00478/render_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00488/postprocess_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00498/water_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a004a8/terrain_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a004b8/vegetation_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a004c8/sky_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a004d8/weather_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a004e8/sound_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a004f8/music_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00508/voice_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c
sed -i 's/UNK_180a00518/effects_node_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_part003.c

echo "代码美化完成 - 01_initialization_part003.c"