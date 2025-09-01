#!/bin/bash

# UI系统变量名美化脚本
# 将pVar204、pVar206等变量名替换为语义化名称

sed -i 's/pVar204/ui_event_data_ptr_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/pVar206/ui_event_data_ptr_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/pVar207/ui_event_data_ptr_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/pVar208/ui_event_data_ptr_4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统变量名美化完成"