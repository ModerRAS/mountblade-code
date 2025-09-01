#!/bin/bash

# 批量重命名UNK_变量的脚本
# 用于美化04_ui_system.c文件

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 处理18094开头的UNK_变量 (可能是渲染状态表)
sed -i 's/UNK_180946b38/UISystemRenderTableB38/g' 04_ui_system.c
sed -i 's/UNK_180946b50/UISystemRenderTableB50/g' 04_ui_system.c
sed -i 's/UNK_180946b70/UISystemRenderTableB70/g' 04_ui_system.c
sed -i 's/UNK_180946ba0/UISystemRenderTableBA0/g' 04_ui_system.c

# 处理180948开头的UNK_变量
sed -i 's/UNK_180948c28/UISystemStateTableC28/g' 04_ui_system.c
sed -i 's/UNK_180948c48/UISystemStateTableC48/g' 04_ui_system.c
sed -i 's/UNK_180948c78/UISystemStateTableC78/g' 04_ui_system.c
sed -i 's/UNK_180948ca0/UISystemStateTableCA0/g' 04_ui_system.c
sed -i 's/UNK_180948cb8/UISystemStateTableCB8/g' 04_ui_system.c
sed -i 's/UNK_180948ce8/UISystemStateTableCE8/g' 04_ui_system.c
sed -i 's/UNK_180948d00/UISystemStateTableD00/g' 04_ui_system.c
sed -i 's/UNK_180948d81/UISystemStateTableD81/g' 04_ui_system.c
sed -i 's/UNK_180948d98/UISystemStateTableD98/g' 04_ui_system.c
sed -i 's/UNK_180948db8/UISystemStateTableDB8/g' 04_ui_system.c
sed -i 's/UNK_1809482e8/UISystemBufferTable2E8/g' 04_ui_system.c
sed -i 's/UNK_1809482fc/UISystemBufferTable2FC/g' 04_ui_system.c
sed -i 's/UNK_180948468/UISystemBufferTable468/g' 04_ui_system.c
sed -i 's/UNK_1809484b0/UISystemBufferTable4B0/g' 04_ui_system.c
sed -i 's/UNK_180948308/UISystemBufferTable308/g' 04_ui_system.c
sed -i 's/UNK_180948458/UISystemBufferTable458/g' 04_ui_system.c
sed -i 's/UNK_180948310/UISystemBufferTable310/g' 04_ui_system.c
sed -i 's/UNK_180948300/UISystemBufferTable300/g' 04_ui_system.c

# 处理180949开头的UNK_变量
sed -i 's/UNK_180949110/UISystemAnimationTable110/g' 04_ui_system.c
sed -i 's/UNK_1809495b0/UISystemAnimationTable5B0/g' 04_ui_system.c
sed -i 's/UNK_180949b40/UISystemAnimationTableB40/g' 04_ui_system.c
sed -i 's/UNK_180949f50/UISystemDataTableF50/g' 04_ui_system.c
sed -i 's/UNK_180949f90/UISystemDataTableF90/g' 04_ui_system.c
sed -i 's/UNK_180949f91/UISystemDataTableF91/g' 04_ui_system.c
sed -i 's/UNK_180949f92/UISystemDataTableF92/g' 04_ui_system.c
sed -i 's/UNK_180949fa8/UISystemDataTableFA8/g' 04_ui_system.c
sed -i 's/UNK_180949fb0/UISystemDataTableFB0/g' 04_ui_system.c

# 处理18094a开头的UNK_变量
sed -i 's/UNK_18094a060/UISystemConfigTable060/g' 04_ui_system.c
sed -i 's/UNK_18094a000/UISystemConfigTable000/g' 04_ui_system.c
sed -i 's/UNK_18094a004/UISystemConfigTable004/g' 04_ui_system.c
sed -i 's/UNK_18094a008/UISystemConfigTable008/g' 04_ui_system.c
sed -i 's/UNK_18094a00c/UISystemConfigTable00C/g' 04_ui_system.c
sed -i 's/UNK_18094a108/UISystemConfigTable108/g' 04_ui_system.c
sed -i 's/UNK_18094a160/UISystemConfigTable160/g' 04_ui_system.c
sed -i 's/UNK_18094a1b0/UISystemConfigTable1B0/g' 04_ui_system.c
sed -i 's/UNK_18094a1f0/UISystemConfigTable1F0/g' 04_ui_system.c
sed -i 's/UNK_18094a0b8/UISystemConfigTable0B8/g' 04_ui_system.c
sed -i 's/UNK_18094a210/UISystemConfigTable210/g' 04_ui_system.c
sed -i 's/UNK_18094a240/UISystemConfigTable240/g' 04_ui_system.c
sed -i 's/UNK_18094a268/UISystemConfigTable268/g' 04_ui_system.c
sed -i 's/UNK_18094a280/UISystemConfigTable280/g' 04_ui_system.c
sed -i 's/UNK_18094a3f0/UISystemConfigTable3F0/g' 04_ui_system.c
sed -i 's/UNK_18094a440/UISystemConfigTable440/g' 04_ui_system.c
sed -i 's/UNK_18094a4c0/UISystemConfigTable4C0/g' 04_ui_system.c
sed -i 's/UNK_18094a4d8/UISystemConfigTable4D8/g' 04_ui_system.c
sed -i 's/UNK_18094a510/UISystemConfigTable510/g' 04_ui_system.c

echo "批量重命名完成"