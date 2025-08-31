#!/bin/bash

# 美化UI系统控制器函数名的脚本
# 将十六进制后缀的函数名替换为语义化名称

# 控制器函数名映射规则
# ui_system_ui_controller_d390 -> ui_system_ui_controller_display
# ui_system_ui_controller_df60 -> ui_system_ui_controller_focus
# ui_system_ui_controller_db90 -> ui_system_ui_controller_buffer
# ui_system_ui_controller_db00 -> ui_system_ui_controller_basic
# ui_system_ui_controller_d5e0 -> ui_system_ui_controller_data
# ui_system_ui_controller_dd40 -> ui_system_ui_controller_debug

# 执行替换
sed -i 's/ui_system_ui_controller_d390/ui_system_ui_controller_display/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_ui_controller_df60/ui_system_ui_controller_focus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_ui_controller_db90/ui_system_ui_controller_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_ui_controller_db00/ui_system_ui_controller_basic/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_ui_controller_d5e0/ui_system_ui_controller_data/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/ui_system_ui_controller_dd40/ui_system_ui_controller_debug/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "控制器函数名美化完成"