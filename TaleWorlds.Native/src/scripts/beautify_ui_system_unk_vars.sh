#!/bin/bash

# 美化04_ui_system.c文件中的UNK_变量
# 将UNK_变量替换为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换UNK_变量为语义化名称
sed -i 's/UNK_1809581e0/UISystemUnknownData1/g' 04_ui_system.c
sed -i 's/UNK_1809583d0/UISystemUnknownData2/g' 04_ui_system.c
sed -i 's/UNK_180958660/UISystemUnknownData3/g' 04_ui_system.c
sed -i 's/UNK_1809586e0/UISystemUnknownData4/g' 04_ui_system.c
sed -i 's/UNK_180958758/UISystemUnknownData5/g' 04_ui_system.c
sed -i 's/UNK_180958970/UISystemUnknownData6/g' 04_ui_system.c
sed -i 's/UNK_1809589a0/UISystemUnknownData7/g' 04_ui_system.c
sed -i 's/UNK_180958a10/UISystemUnknownData8/g' 04_ui_system.c
sed -i 's/UNK_180958a50/UISystemUnknownData9/g' 04_ui_system.c
sed -i 's/UNK_18076804b/UISystemUnknownData10/g' 04_ui_system.c
sed -i 's/UNK_180958b20/UISystemUnknownData11/g' 04_ui_system.c
sed -i 's/UNK_180958ac0/UISystemUnknownData12/g' 04_ui_system.c
sed -i 's/UNK_180958b00/UISystemUnknownData13/g' 04_ui_system.c
sed -i 's/UNK_180958b10/UISystemUnknownData14/g' 04_ui_system.c
sed -i 's/UNK_180958ba0/UISystemUnknownData15/g' 04_ui_system.c
sed -i 's/UNK_180958c10/UISystemUnknownData16/g' 04_ui_system.c
sed -i 's/UNK_1807693c0/UISystemUnknownData17/g' 04_ui_system.c
sed -i 's/UNK_180958bf0/UISystemUnknownData18/g' 04_ui_system.c
sed -i 's/UNK_180958c88/UISystemUnknownData19/g' 04_ui_system.c
sed -i 's/UNK_180958cb0/UISystemUnknownData20/g' 04_ui_system.c

echo "UNK_变量替换完成"