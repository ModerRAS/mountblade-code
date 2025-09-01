#!/bin/bash

# 批量替换04_ui_system.c文件中的undefined变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换主要的系统数据变量
sed -i 's/undefined\* SystemDataInput;/\/\/ 用户界面系统输入数据\nvoid* SystemDataInput;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataEvent;/\/\/ 用户界面系统事件数据\nvoid* SystemDataEvent;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataMemory;/\/\/ 用户界面系统内存数据\nvoid* SystemDataMemory;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataThread;/\/\/ 用户界面系统线程数据\nvoid* SystemDataThread;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataResource;/\/\/ 用户界面系统资源数据\nvoid* SystemDataResource;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataCache;/\/\/ 用户界面系统缓存数据\nvoid* SystemDataCache;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataWidget;/\/\/ 用户界面系统组件数据\nvoid* SystemDataWidget;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataLayout;/\/\/ 用户界面系统布局数据\nvoid* SystemDataLayout;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataTheme;/\/\/ 用户界面系统主题数据\nvoid* SystemDataTheme;/g' 04_ui_system.c
sed -i 's/undefined\* SystemDataAnimation;/\/\/ 用户界面系统动画数据\nvoid* SystemDataAnimation;/g' 04_ui_system.c

echo "第一批变量替换完成"