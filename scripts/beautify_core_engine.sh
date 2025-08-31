#!/bin/bash

# 美化02_core_engine.c文件的脚本
# 此脚本用于帮助批量替换变量名和函数名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
TEMP_FILE="/tmp/core_engine_temp.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 1. 删除文件头部的冗余注释
sed -i '1,3d' "$TEMP_FILE"

# 2. 替换常见的非语义化变量名
sed -i 's/DAT_/g_data_/g' "$TEMP_FILE"
sed -i 's/UNK_/g_unknown_/g' "$TEMP_FILE"
sed -i 's/SUB_/g_sub_/g' "$TEMP_FILE"

# 3. 替换函数名为更有意义的名称
sed -i 's/FUN_180073930/core_engine_initialize/g' "$TEMP_FILE"
sed -i 's/FUN_1800637c0/engine_setup_rendering/g' "$TEMP_FILE"
sed -i 's/FUN_1800637f0/engine_configure_display/g' "$TEMP_FILE"
sed -i 's/FUN_1802281a0/engine_process_input/g' "$TEMP_FILE"
sed -i 's/FUN_1802285e0/engine_handle_events/g' "$TEMP_FILE"
sed -i 's/FUN_180045af0/engine_update_state/g' "$TEMP_FILE"
sed -i 's/FUN_180090020/engine_start_game_loop/g' "$TEMP_FILE"
sed -i 's/FUN_1800900c0/engine_stop_game_loop/g' "$TEMP_FILE"
sed -i 's/FUN_180086600/engine_create_context/g' "$TEMP_FILE"
sed -i 's/FUN_180086670/engine_destroy_context/g' "$TEMP_FILE"
sed -i 's/FUN_180086740/engine_load_resources/g' "$TEMP_FILE"
sed -i 's/FUN_180086830/engine_unload_resources/g' "$TEMP_FILE"
sed -i 's/FUN_1800868d0/engine_pause/g' "$TEMP_FILE"
sed -i 's/FUN_180086960/engine_resume/g' "$TEMP_FILE"
sed -i 's/FUN_180086a00/engine_get_status/g' "$TEMP_FILE"
sed -i 's/FUN_180086aa0/engine_set_status/g' "$TEMP_FILE"
sed -i 's/FUN_180086b40/engine_configure_settings/g' "$TEMP_FILE"
sed -i 's/FUN_180059ba0/engine_validate_configuration/g' "$TEMP_FILE"
sed -i 's/FUN_180059620/engine_check_requirements/g' "$TEMP_FILE"
sed -i 's/FUN_180044a30/engine_initialize_subsystems/g' "$TEMP_FILE"
sed -i 's/FUN_180046860/engine_cleanup_subsystems/g' "$TEMP_FILE"
sed -i 's/FUN_180066dd0/engine_setup_memory_manager/g' "$TEMP_FILE"
sed -i 's/FUN_180030070/engine_register_core_services/g' "$TEMP_FILE"
sed -i 's/FUN_180030170/engine_unregister_core_services/g' "$TEMP_FILE"

# 4. 替换一些内部函数
sed -i 's/FUN_18008d070/memory_manager_get_instance/g' "$TEMP_FILE"
sed -i 's/FUN_18008f0d0/service_manager_allocate/g' "$TEMP_FILE"
sed -i 's/FUN_18008f140/service_manager_register/g' "$TEMP_FILE"
sed -i 's/FUN_18025e330/core_service_handler/g' "$TEMP_FILE"

# 5. 替换变量类型和局部变量
sed -i 's/cVar1/flag_result/g' "$TEMP_FILE"
sed -i 's/puVar2/data_pointer/g' "$TEMP_FILE"
sed -i 's/iVar3/comparison_result/g' "$TEMP_FILE"
sed -i 's/plVar4/instance_pointer/g' "$TEMP_FILE"
sed -i 's/lVar5/offset_value/g' "$TEMP_FILE"
sed -i 's/puVar6/node_pointer/g' "$TEMP_FILE"
sed -i 's/puVar7/parent_pointer/g' "$TEMP_FILE"
sed -i 's/puVar8/child_pointer/g' "$TEMP_FILE"
sed -i 's/puStackX_10/temp_result/g' "$TEMP_FILE"
sed -i 's/pcStackX_18/handler_function/g' "$TEMP_FILE"

# 6. 替换数据结构引用
sed -i 's/DAT_180a00d48/core_service_signature/g' "$TEMP_FILE"
sed -i 's/UNK_180a00460/core_service_table/g' "$TEMP_FILE"

# 复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f "$TEMP_FILE"

echo "Core engine file美化完成"