#!/bin/bash

# UI系统函数名美化脚本
# 用于替换04_ui_system.c中的FUN_函数调用为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换FUN_18069ccd0为DecodeUIStateData
sed -i 's/FUN_18069ccd0/DecodeUIStateData/g' 04_ui_system.c

# 替换FUN_18069d9e0为ProcessUIDataBuffer
sed -i 's/FUN_18069d9e0/ProcessUIDataBuffer/g' 04_ui_system.c

# 替换FUN_18069d940为CopyUIDataBlock
sed -i 's/FUN_18069d940/CopyUIDataBlock/g' 04_ui_system.c

# 为FUN_18069d8a0创建定义并替换
# 根据上下文，这应该是一个UI系统数据初始化函数
sed -i '1500i\\n\/\/ UI系统数据初始化函数\n\/\/ 原始函数名：FUN_18069d8a0 - UI系统数据初始化函数\n#define InitializeUIData FUN_18069d8a0' 04_ui_system.c
sed -i 's/FUN_18069d8a0/InitializeUIData/g' 04_ui_system.c

echo "UI系统函数名美化完成"