#!/bin/bash

# 批量替换04_ui_system.c文件中的剩余undefined变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换SystemCoreDataPointer变量
for i in {L..Z}; do
    sed -i "s/undefined SystemCoreDataPointer$i;/\/\/ 用户界面系统核心数据指针$i\nvoid* SystemCoreDataPointer$i;/g" 04_ui_system.c
done

# 替换AA到AR的变量
for i in {A..R}; do
    sed -i "s/undefined SystemCoreDataPointerA$i;/\/\/ 用户界面系统核心数据指针A$i\nvoid* SystemCoreDataPointerA$i;/g" 04_ui_system.c
done

# 替换其他undefined变量
sed -i 's/undefined SystemControlDataPointer;/\/\/ 用户界面系统控制数据指针\nvoid* SystemControlDataPointer;/g' 04_ui_system.c
sed -i 's/undefined SystemRenderDataPointer;/\/\/ 用户界面系统渲染数据指针\nvoid* SystemRenderDataPointer;/g' 04_ui_system.c
sed -i 's/undefined SystemEventDataPointerB;/\/\/ 用户界面系统事件数据指针B\nvoid* SystemEventDataPointerB;/g' 04_ui_system.c
sed -i 's/undefined SystemEventDataPointerC;/\/\/ 用户界面系统事件数据指针C\nvoid* SystemEventDataPointerC;/g' 04_ui_system.c

echo "批量替换完成"