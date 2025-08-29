#!/bin/bash

# 美化02_core_engine.c文件的脚本
# 重命名未知变量和函数为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件大小
ORIGINAL_SIZE=$(stat -c%s 02_core_engine.c)
echo "原始文件大小: $ORIGINAL_SIZE 字节"

# 创建临时脚本文件来执行重命名
cat > /tmp/rename_core_engine.sh << 'EOF'
#!/bin/bash

# 引擎上下文相关变量
sed -i 's/g_engine_context_data_18098c880/g_engine_context_data/g' 02_core_engine.c
sed -i 's/g_engine_memory_config/g_engine_memory_config/g' 02_core_engine.c
sed -i 's/g_engine_config_data_18098c898/g_engine_config_data/g' 02_core_engine.c
sed -i 's/g_engine_memory_base/g_engine_memory_base/g' 02_core_engine.c
sed -i 's/g_engine_memory_pool/g_engine_memory_pool/g' 02_core_engine.c
sed -i 's/g_engine_render_context/g_engine_render_context/g' 02_core_engine.c
sed -i 's/g_engine_audio_context/g_engine_audio_context/g' 02_core_engine.c

# 音频引擎相关变量
sed -i 's/g_audio_config_data_180941780/g_audio_config_data/g' 02_core_engine.c

# 输入引擎相关变量
sed -i 's/g_input_system_data/g_input_system_data/g' 02_core_engine.c

# 渲染引擎相关变量
sed -i 's/g_render_config_data/g_render_config_data/g' 02_core_engine.c
sed -i 's/g_render_context_data_1809ff978/g_render_context_data/g' 02_core_engine.c
sed -i 's/g_render_buffer_data/g_render_buffer_data/g' 02_core_engine.c
sed -i 's/g_render_state_data_1809ff990/g_render_state_data/g' 02_core_engine.c

# 网络引擎相关变量
sed -i 's/g_network_socket_data/g_network_socket_data/g' 02_core_engine.c
sed -i 's/g_network_buffer_data/g_network_buffer_data/g' 02_core_engine.c
sed -i 's/g_network_config_data/g_network_config_data/g' 02_core_engine.c
sed -i 's/g_network_state_data/g_network_state_data/g' 02_core_engine.c
sed -i 's/g_network_timeout_data/g_network_timeout_data/g' 02_core_engine.c
sed -i 's/g_network_connection_data/g_network_connection_data/g' 02_core_engine.c
sed -i 's/g_network_buffer_size/g_network_buffer_size/g' 02_core_engine.c
sed -i 's/g_network_packet_data/g_network_packet_data/g' 02_core_engine.c
sed -i 's/g_network_config_data_180942f90/g_network_config_data_secondary/g' 02_core_engine.c

# 系统相关变量
sed -i 's/g_system_memory_pool/g_system_memory_pool/g' 02_core_engine.c
sed -i 's/g_system_status_flags/g_system_status_flags/g' 02_core_engine.c
sed -i 's/g_system_state_data/g_system_state_data/g' 02_core_engine.c
sed -i 's/g_system_config_data/g_system_config_data/g' 02_core_engine.c
sed -i 's/g_system_error_data/g_system_error_data/g' 02_core_engine.c
sed -i 's/g_system_debug_data/g_system_debug_data/g' 02_core_engine.c

# 图形渲染相关变量
sed -i 's/g_graphics_config_data/g_graphics_config_data/g' 02_core_engine.c
sed -i 's/g_resource_manager_data_1809fd534/g_resource_manager_data/g' 02_core_engine.c
sed -i 's/g_texture_data/g_texture_data/g' 02_core_engine.c
sed -i 's/g_shader_data/g_shader_data/g' 02_core_engine.c
sed -i 's/g_vertex_buffer_data/g_vertex_buffer_data/g' 02_core_engine.c
sed -i 's/g_index_buffer_data/g_index_buffer_data/g' 02_core_engine.c
sed -i 's/g_render_target_data/g_render_target_data/g' 02_core_engine.c
sed -i 's/g_render_flag/g_render_flag/g' 02_core_engine.c
sed -i 's/g_lighting_data/g_lighting_data/g' 02_core_engine.c
sed -i 's/g_lighting_flag/g_lighting_flag/g' 02_core_engine.c
sed -i 's/g_camera_data/g_camera_data/g' 02_core_engine.c
sed -i 's/g_viewport_data/g_viewport_data/g' 02_core_engine.c
sed -i 's/g_projection_data/g_projection_data/g' 02_core_engine.c
sed -i 's/g_modelview_data/g_modelview_data/g' 02_core_engine.c
sed -i 's/g_scene_data/g_scene_data/g' 02_core_engine.c
sed -i 's/g_entity_data/g_entity_data/g' 02_core_engine.c
sed -i 's/g_material_data/g_material_data/g' 02_core_engine.c
sed -i 's/g_animation_data/g_animation_data/g' 02_core_engine.c
sed -i 's/g_particle_data/g_particle_data/g' 02_core_engine.c
sed -i 's/g_particle_flag/g_particle_flag/g' 02_core_engine.c

# 重命名一些未知数据变量
sed -i 's/DAT_180c86958/g_unknown_data_180c86958/g' 02_core_engine.c
sed -i 's/DAT_180c8aa18/g_unknown_data_180c8aa18/g' 02_core_engine.c
sed -i 's/DAT_180c86880/g_unknown_data_180c86880/g' 02_core_engine.c
sed -i 's/DAT_180c8f008/g_unknown_data_180c8f008/g' 02_core_engine.c
sed -i 's/DAT_180c868c8/g_unknown_data_180c868c8/g' 02_core_engine.c

# 重命名一些未知变量
sed -i 's/UNK_1809fd8c0/g_unknown_1809fd8c0/g' 02_core_engine.c
sed -i 's/UNK_1809fd8d8/g_unknown_1809fd8d8/g' 02_core_engine.c
sed -i 's/UNK_1809fd910/g_unknown_1809fd910/g' 02_core_engine.c
sed -i 's/UNK_1809fd930/g_unknown_1809fd930/g' 02_core_engine.c
sed -i 's/UNK_1809fd950/g_unknown_1809fd950/g' 02_core_engine.c
sed -i 's/UNK_1809fd970/g_unknown_1809fd970/g' 02_core_engine.c
sed -i 's/UNK_1809fd980/g_unknown_1809fd980/g' 02_core_engine.c
sed -i 's/UNK_1809fdfc0/g_unknown_1809fdfc0/g' 02_core_engine.c
sed -i 's/UNK_180a0ad28/g_unknown_180a0ad28/g' 02_core_engine.c

# 重命名更多未知变量
sed -i 's/DAT_180d49140/g_unknown_data_180d49140/g' 02_core_engine.c
sed -i 's/DAT_180d49144/g_unknown_data_180d49144/g' 02_core_engine.c
sed -i 's/DAT_180d49148/g_unknown_data_180d49148/g' 02_core_engine.c
sed -i 's/DAT_180d4914c/g_unknown_data_180d4914c/g' 02_core_engine.c
sed -i 's/DAT_180c8a9d0/g_unknown_data_180c8a9d0/g' 02_core_engine.c
sed -i 's/UNK_180058f50/g_unknown_180058f50/g' 02_core_engine.c
sed -i 's/UNK_180058f60/g_unknown_180058f60/g' 02_core_engine.c
sed -i 's/UNK_180058f80/g_unknown_180058f80/g' 02_core_engine.c
sed -i 's/UNK_180058f90/g_unknown_180058f90/g' 02_core_engine.c
sed -i 's/UNK_1809fd730/g_unknown_1809fd730/g' 02_core_engine.c
sed -i 's/DAT_180c82841/g_unknown_flag_180c82841/g' 02_core_engine.c
sed -i 's/UNK_1809fde40/g_unknown_1809fde40/g' 02_core_engine.c

# 重命名更多变量
sed -i 's/DAT_180c868e8/g_unknown_data_180c868e8/g' 02_core_engine.c
sed -i 's/UNK_1809fd7c4/g_unknown_1809fd7c4/g' 02_core_engine.c
sed -i 's/UNK_1809fd7d8/g_unknown_1809fd7d8/g' 02_core_engine.c
sed -i 's/UNK_1809fd7f8/g_unknown_1809fd7f8/g' 02_core_engine.c
sed -i 's/UNK_1809fd810/g_unknown_1809fd810/g' 02_core_engine.c
sed -i 's/UNK_1809fd828/g_unknown_1809fd828/g' 02_core_engine.c
sed -i 's/UNK_1809fd848/g_unknown_1809fd848/g' 02_core_engine.c
sed -i 's/UNK_1809fd870/g_unknown_1809fd870/g' 02_core_engine.c
sed -i 's/DAT_180c8a9f8/g_unknown_data_180c8a9f8/g' 02_core_engine.c
sed -i 's/DAT_180c868c0/g_unknown_data_180c868c0/g' 02_core_engine.c
sed -i 's/DAT_180c868d8/g_unknown_data_180c868d8/g' 02_core_engine.c
sed -i 's/DAT_180c86900/g_unknown_data_180c86900/g' 02_core_engine.c
sed -i 's/DAT_180c8a998/g_unknown_data_180c8a998/g' 02_core_engine.c

# 重命名更多未知变量
sed -i 's/UNK_1809fe6d8/g_unknown_1809fe6d8/g' 02_core_engine.c
sed -i 's/UNK_180a3cf50/g_unknown_180a3cf50/g' 02_core_engine.c
sed -i 's/UNK_1809fd9a0/g_unknown_1809fd9a0/g' 02_core_engine.c
sed -i 's/UNK_1809fd9b0/g_unknown_1809fd9b0/g' 02_core_engine.c
sed -i 's/UNK_1809fd9d0/g_unknown_1809fd9d0/g' 02_core_engine.c
sed -i 's/UNK_1809fd9f0/g_unknown_1809fd9f0/g' 02_core_engine.c
sed -i 's/UNK_1809fda10/g_unknown_1809fda10/g' 02_core_engine.c
sed -i 's/UNK_1809fda30/g_unknown_1809fda30/g' 02_core_engine.c
sed -i 's/UNK_1809fda58/g_unknown_1809fda58/g' 02_core_engine.c
sed -i 's/UNK_1809fda80/g_unknown_1809fda80/g' 02_core_engine.c
sed -i 's/UNK_1809fdaa8/g_unknown_1809fdaa8/g' 02_core_engine.c
sed -i 's/UNK_1809fdad0/g_unknown_1809fdad0/g' 02_core_engine.c
sed -i 's/UNK_1809fdaf8/g_unknown_1809fdaf8/g' 02_core_engine.c
sed -i 's/UNK_1809fdb20/g_unknown_1809fdb20/g' 02_core_engine.c
sed -i 's/UNK_1809fdb40/g_unknown_1809fdb40/g' 02_core_engine.c
sed -i 's/UNK_1809fdcd8/g_unknown_1809fdcd8/g' 02_core_engine.c
sed -i 's/DAT_180c82853/g_unknown_flag_180c82853/g' 02_core_engine.c
sed -i 's/UNK_1809fdbd0/g_unknown_1809fdbd0/g' 02_core_engine.c
sed -i 's/DAT_180c8a980/g_unknown_data_180c8a980/g' 02_core_engine.c
sed -i 's/UNK_180058ec0/g_unknown_180058ec0/g' 02_core_engine.c
sed -i 's/UNK_180058ee0/g_unknown_180058ee0/g' 02_core_engine.c
sed -i 's/UNK_180059b80/g_unknown_180059b80/g' 02_core_engine.c

# 重命名函数相关的变量
sed -i 's/UNK_180a092c4/g_unknown_180a092c4/g' 02_core_engine.c
sed -i 's/DAT_180be0000/g_unknown_data_180be0000/g' 02_core_engine.c
sed -i 's/UNK_1809fdd78/g_unknown_1809fdd78/g' 02_core_engine.c
sed -i 's/UNK_1809fddc8/g_unknown_1809fddc8/g' 02_core_engine.c
sed -i 's/UNK_180a02968/g_unknown_180a02968/g' 02_core_engine.c
sed -i 's/UNK_1809fde10/g_unknown_1809fde10/g' 02_core_engine.c

# 重命名更多函数相关变量
sed -i 's/UNK_1809fe800/g_unknown_1809fe800/g' 02_core_engine.c
sed -i 's/UNK_1809fe80c/g_unknown_1809fe80c/g' 02_core_engine.c
sed -i 's/DAT_1809fe810/g_unknown_data_1809fe810/g' 02_core_engine.c
sed -i 's/UNK_1809fe85c/g_unknown_1809fe85c/g' 02_core_engine.c
sed -i 's/UNK_1809fe868/g_unknown_1809fe868/g' 02_core_engine.c
sed -i 's/UNK_1809fe880/g_unknown_1809fe880/g' 02_core_engine.c
sed -i 's/UNK_1809fe898/g_unknown_1809fe898/g' 02_core_engine.c
sed -i 's/UNK_1809fe8b0/g_unknown_1809fe8b0/g' 02_core_engine.c
sed -i 's/UNK_18098ba10/g_unknown_18098ba10/g' 02_core_engine.c
sed -i 's/DAT_18098ba28/g_unknown_data_18098ba28/g' 02_core_engine.c
sed -i 's/UNK_18098ba40/g_unknown_18098ba40/g' 02_core_engine.c
sed -i 's/UNK_18098ba50/g_unknown_18098ba50/g' 02_core_engine.c

echo "变量重命名完成"
EOF

# 使脚本可执行
chmod +x /tmp/rename_core_engine.sh

# 执行重命名脚本
/tmp/rename_core_engine.sh

# 检查文件大小变化
NEW_SIZE=$(stat -c%s 02_core_engine.c)
echo "新文件大小: $NEW_SIZE 字节"
echo "大小变化: $((NEW_SIZE - ORIGINAL_SIZE)) 字节"

# 清理临时脚本
rm /tmp/rename_core_engine.sh

echo "脚本执行完成"