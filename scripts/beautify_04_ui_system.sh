#!/bin/bash

# 04_ui_system.c 变量名美化脚本
# 将十六进制变量名替换为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src/

# 备份原始文件
cp 04_ui_system.c 04_ui_system.c.backup

# 函数名替换 - 将FUN_180xxxxx替换为语义化名称
sed -i 's/FUN_18069def0/ui_system_cleanup_handler/g' 04_ui_system.c
sed -i 's/FUN_18069bb20/ui_system_event_processor/g' 04_ui_system.c
sed -i 's/FUN_18069bfc6/ui_system_initialize_renderer/g' 04_ui_system.c
sed -i 's/FUN_18069c023/ui_system_shutdown_renderer/g' 04_ui_system.c
sed -i 's/FUN_18069c3b0/ui_system_dispatch_event/g' 04_ui_system.c
sed -i 's/FUN_18069c3f3/ui_system_process_event/g' 04_ui_system.c
sed -i 's/FUN_18069c4ff/ui_system_clear_event_queue/g' 04_ui_system.c
sed -i 's/FUN_18069c640/ui_system_handle_widget_event/g' 04_ui_system.c

# 变量名替换 - 将十六进制变量名替换为语义化名称
sed -i 's/uintuiui_stack_var_single_value_1a0/ui_stack_temp_flag_1a0/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_178/ui_stack_data_buffer_178/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_114/ui_stack_size_114/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_110/ui_stack_offset_110/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_160/ui_stack_counter_160/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_104/ui_stack_param_104/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_b04/ui_stack_buffer_b04/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_a47/ui_stack_ptr_a47/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_b0/ui_stack_index_b0/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_dc/ui_stack_config_dc/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_e8/ui_stack_flag_e8/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_e0/ui_stack_temp_e0/g' 04_ui_system.c
sed -i 's/uintuiui_stack_var_single_value_38/ui_stack_small_38/g' 04_ui_system.c

# 其他函数名替换
sed -i 's/func_0x00018066f280/ui_system_check_event_type/g' 04_ui_system.c
sed -i 's/func_0x00018066eb80/ui_system_create_widget/g' 04_ui_system.c
sed -i 's/func_0x00018066ecc0/ui_system_destroy_widget/g' 04_ui_system.c
sed -i 's/func_0x000180025ec0/ui_system_register_event_handler/g' 04_ui_system.c
sed -i 's/func_0x000180027b50/ui_system_unregister_event_handler/g' 04_ui_system.c
sed -i 's/func_0x000180022810/ui_system_post_event/g' 04_ui_system.c
sed -i 's/func_0x000180024290/ui_system_send_event/g' 04_ui_system.c
sed -i 's/func_0x00018066f280/ui_system_validate_event/g' 04_ui_system.c

echo "04_ui_system.c 美化完成"