#!/bin/bash

# 渲染系统变量名语义化替换脚本（2025年8月31日批次美化）
# 原本实现：完全重构渲染系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变

# 重复变量名替换
sed -i 's/render_legacy_texture_array_ptr/render_legacy_texture_cache/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_process_legacy_texture/render_legacy_texture_processor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_process_legacy_vertex_data/render_legacy_vertex_processor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_legacy_data_var/render_legacy_data_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_legacy_variable_buffer/render_legacy_variable_storage/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_legacy_variable_secondary_func/render_legacy_secondary_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_legacy_variable_primary/render_legacy_primary_data/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_global_legacy_data/render_global_legacy_cache/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_global_string_terminator_ptr/render_global_string_terminator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_global_legacy_texture_array/render_global_legacy_texture_cache/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换硬编码值为语义化常量
sed -i 's/0xbf9100/RENDER_TEXTURE_SIZE_FLOAT_OFFSET_UV_COORD_U/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbf9104/RENDER_TEXTURE_SIZE_FLOAT_OFFSET_UV_COORD_V/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbf90f8/RENDER_TEXTURE_SIZE_FLOAT_OFFSET_NORMAL_X/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbf90fc/RENDER_TEXTURE_SIZE_FLOAT_OFFSET_NORMAL_Y/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbf90f0/RENDER_TEXTURE_SIZE_FLOAT_OFFSET_COLOR_R/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xbf90f4/RENDER_TEXTURE_SIZE_FLOAT_OFFSET_COLOR_G/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统变量名语义化替换完成"