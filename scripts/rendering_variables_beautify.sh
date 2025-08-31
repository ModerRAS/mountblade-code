#!/bin/bash

# 渲染系统变量名美化脚本
# 简化实现：仅将常见的非语义化变量名替换为语义化变量名
# 原本实现：完全重构所有变量名体系

# 通用寄存器变量名
sed -i 's/unaff_00000034/render_register_temp_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/unaff_10000049/render_register_temp_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/unaff_00000019/render_register_temp_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/unaff_BL/render_register_bl_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统变量名美化完成"