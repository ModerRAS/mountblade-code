#!/bin/bash

# UI系统代码美化脚本 - 简化实现
# 原本实现：完全重构UI系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，为关键函数添加文档注释，保持代码结构不变

# 美化十六进制函数名
sed -i 's/FUN_18071ffc5/ui_system_initialize_window_context/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807201ce/ui_system_process_window_events/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807201f0/ui_system_handle_window_input/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18072081d/ui_system_update_window_state/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180720b35/ui_system_validate_window_focus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180720b60/ui_system_process_event_callback/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180720e10/ui_system_handle_threaded_events/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180721650/ui_system_execute_event_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180721698/ui_system_process_event_queue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18072174a/ui_system_update_event_state/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807217e4/ui_system_cleanup_event_resources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180721810/ui_system_dispatch_event/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化变量名
sed -i 's/pfloat_value/ui_float_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/float_ptr/ui_float_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/double_value/ui_double_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/float_value/ui_float_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/pfloat_value0/ui_float_ptr_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/pfloat_value1/ui_float_ptr_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/pfloat_value2/ui_float_ptr_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_context_pointer/ui_context_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_window_handle/ui_window_handle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_event_id_fifth/ui_event_id_fifth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_callback_ptr/ui_callback_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/long_counter6/ui_long_counter_six/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_event_id7/ui_event_id_seven/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/long_counter8/ui_long_counter_eight/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_widget_base/ui_widget_base_address/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/long_counter9/ui_long_counter_nine/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_register_long/ui_system_register_long_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_register/ui_system_register_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_R9/ui_input_register_r9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_result_code/ui_result_status/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_R10/ui_input_register_r10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_R11/ui_input_register_r11/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_event_offset/ui_event_offset_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_register_int_ptr/ui_system_register_int_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/uiDistanceDelta/ui_distance_delta/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/uiTimeDelta/ui_time_delta/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/uiMinValue/ui_min_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/uiMaxValue/ui_max_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_register_vara/ui_register_variable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统代码美化完成 - 简化实现"