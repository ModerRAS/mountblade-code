#!/bin/bash

# UI系统代码美化脚本
# 用于将04_ui_system.c中的变量名和函数名替换为更具语义化的名称

# 首先备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup

# 变量名替换 - 将非语义化的变量名替换为语义化名称
sed -i 's/ui_xmm_register_Da/ui_xmm_register_data/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_task_process_buffer/ui_processing_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_temp_buffer/ui_temporary_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_widget_manager_instance/ui_widget_manager_reference/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_data/ui_system_data_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_buffer_address/ui_buffer_memory_address/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_event_handler/ui_event_handler_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_context_index/ui_context_index_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_event_data/ui_event_data_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_flag_parameter/ui_event_flag_parameter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 寄存器变量名美化
sed -i 's/ui_register_r8_float_ptr/ui_r8_float_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 坐标变量名美化
sed -i 's/ui_widget_x/ui_widget_x_coordinate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_component_x_coord/ui_component_x_coordinate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 缓冲区变量名美化
sed -i 's/ui_event_coefficient_array/ui_event_coefficient_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 删除重复的函数文档注释，保留最详细的一个
sed -i '/^\/\*\*$/,/^ \*\/$/{ /^\/\*\*$/h; /^ \*\/$!{ H; $!d; }; x; /UI系统事件回调处理器/!d; }' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统代码美化完成"