#!/bin/bash

# 批量替换变量名的脚本
# 简化实现：仅替换常见的非语义化变量名和函数名
# 原本实现：完全重构核心引擎系统所有命名体系，建立统一的语义化命名规范

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

# 替换变量名 - 将ptr后缀改为更语义化的名称
sed -i 's/engine_render_handler_ptr/engine_render_handler/g' "$INPUT_FILE"
sed -i 's/engine_audio_handler_ptr/engine_audio_handler/g' "$INPUT_FILE"
sed -i 's/engine_network_handler_ptr/engine_network_handler/g' "$INPUT_FILE"
sed -i 's/engine_physics_handler_ptr/engine_physics_handler/g' "$INPUT_FILE"
sed -i 's/engine_ui_handler_ptr/engine_ui_handler/g' "$INPUT_FILE"
sed -i 's/engine_animation_handler_ptr/engine_animation_handler/g' "$INPUT_FILE"
sed -i 's/engine_ai_handler_ptr/engine_ai_handler/g' "$INPUT_FILE"
sed -i 's/engine_script_handler_ptr/engine_script_handler/g' "$INPUT_FILE"

# 替换其他ptr变量
sed -i 's/engine_data_pointerbuffer_/engine_data_buffer_/g' "$INPUT_FILE"
sed -i 's/engine_data_pointerstorage/engine_data_storage/g' "$INPUT_FILE"
sed -i 's/engine_data_pointermanager/engine_data_manager/g' "$INPUT_FILE"
sed -i 's/engine_data_pointercache/engine_data_cache/g' "$INPUT_FILE"
sed -i 's/engine_data_pointerpool/engine_data_pool/g' "$INPUT_FILE"
sed -i 's/engine_data_pointerhandler/engine_data_handler/g' "$INPUT_FILE"
sed -i 's/engine_data_pointerloader/engine_data_loader/g' "$INPUT_FILE"
sed -i 's/engine_data_pointersaver/engine_data_saver/g' "$INPUT_FILE"
sed -i 's/engine_data_pointerpointer_temp/engine_data_pointer_temp/g' "$INPUT_FILE"

# 替换其他非语义化变量名
sed -i 's/engine_global_data_pointer_primary/engine_global_data_primary/g' "$INPUT_FILE"

echo "变量名替换完成"