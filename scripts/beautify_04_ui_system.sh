#!/bin/bash

# 变量名语义化替换脚本 - 04_ui_system.c文件
# 原本实现：完全重构变量命名体系
# 简化实现：仅将常见的包含数字的变量名替换为语义化名称

# 进入源文件目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 04_ui_system.c 04_ui_system.c.backup

# 替换变量名为语义化名称
sed -i 's/ui_event_identifier2/ui_event_identifier_secondary/g' 04_ui_system.c
sed -i 's/ui_temporary_buffer\._4_4_/ui_temporary_buffer_high_dword/g' 04_ui_system.c
sed -i 's/ui_temporary_buffer\._0_4_/ui_temporary_buffer_low_dword/g' 04_ui_system.c
sed -i 's/ui_temporary_buffer\._8_4_/ui_temporary_buffer_top_dword/g' 04_ui_system.c
sed -i 's/ui_task_data_buffer\._8_4_/ui_task_data_buffer_top_dword/g' 04_ui_system.c
sed -i 's/ui_task_data_buffer\._0_4_/ui_task_data_buffer_low_dword/g' 04_ui_system.c
sed -i 's/ui_task_data_buffer\._4_4_/ui_task_data_buffer_high_dword/g' 04_ui_system.c
sed -i 's/ui_input_data_buffer\._0_4_/ui_input_data_buffer_low_dword/g' 04_ui_system.c
sed -i 's/ui_input_data_buffer\._4_4_/ui_input_data_buffer_high_dword/g' 04_ui_system.c
sed -i 's/ui_input_data_buffer\._8_4_/ui_input_data_buffer_top_dword/g' 04_ui_system.c
sed -i 's/ui_render_data_buffer\._0_4_/ui_render_data_buffer_value/g' 04_ui_system.c

echo "04_ui_system.c变量名语义化替换完成"