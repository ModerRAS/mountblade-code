#!/bin/bash

# 变量名美化脚本 - 04_ui_system.c
# 将生成的变量名替换为更有意义的名字

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
cp 04_ui_system.c 04_ui_system.c.tmp

# 替换sVar变量名为更有意义的名字
sed -i 's/sVar\([0-9]\+\)/pixelValue\1/g' 04_ui_system.c.tmp

# 替换auVar变量名为更有意义的名字
sed -i 's/auVar\([0-9]\+\)/vectorData\1/g' 04_ui_system.c.tmp

# 替换uVar变量名为更有意义的名字
sed -i 's/uVar\([0-9]\+\)/uintValue\1/g' 04_ui_system.c.tmp

# 替换afunctionResult变量名为更有意义的名字
sed -i 's/afunctionResult\([0-9]\+\)/functionResult\1/g' 04_ui_system.c.tmp

# 替换asemaphoreHandle变量名为更有意义的名字
sed -i 's/asemaphoreHandle\([0-9]\+\)/semaphoreHandle\1/g' 04_ui_system.c.tmp

# 替换lVar变量名为更有意义的名字
sed -i 's/lVar\([0-9]\+\)/longValue\1/g' 04_ui_system.c.tmp

# 应用更改
mv 04_ui_system.c.tmp 04_ui_system.c

echo "变量名美化完成"