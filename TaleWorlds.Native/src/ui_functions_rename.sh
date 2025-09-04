#!/bin/bash

# UI系统变量名美化脚本
# 替换一些常见的变量名

# 替换FUN_函数名
sed -i 's/FUN_180650050/InitializeUIThreadPool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180650080/StartUIThreadWorker/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1806500a6/StopUIThreadWorker/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180672a50/ProcessUIEvent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180672da0/HandleUIInput/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180673220/UpdateUIState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180673360/RenderUIFrame/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180673850/ValidateUIComponent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180673970/CalculateUILayout/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "函数名替换完成"