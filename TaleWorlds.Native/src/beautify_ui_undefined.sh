#!/bin/bash

# 美化04_ui_system.c文件中的undefined类型变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换undefined类型为void*
sed -i 's/undefined1 \*/void \*/g' 04_ui_system.c
sed -i 's/undefined2 \*/void \*/g' 04_ui_system.c
sed -i 's/undefined4 \*/void \*/g' 04_ui_system.c
sed -i 's/undefined8 \*/void \*/g' 04_ui_system.c
sed -i 's/undefined1 /void /g' 04_ui_system.c
sed -i 's/undefined2 /void /g' 04_ui_system.c
sed -i 's/undefined4 /void /g' 04_ui_system.c
sed -i 's/undefined8 /void /g' 04_ui_system.c

echo "undefined类型变量替换完成"