#!/bin/bash

# 渲染系统代码美化脚本
# 用于批量替换03_rendering.c文件中的变量名
# 简化实现：仅替换重复的变量名，保留核心功能逻辑
# 原本实现：完全重构渲染系统架构，添加高级渲染特性

# 重复的临时变量名替换
sed -i 's/render_temporary_float_value;/render_temp_float_1;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_stack_float_primary;/render_stack_float_1;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/render_context_stack_data_buffer;/render_context_data_buffer_1;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换重复的变量声明（第二个及以后的声明）
sed -i '0,/render_temp_float_1;/! s/render_temp_float_1;/render_temp_float_2;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '0,/render_stack_float_1;/! s/render_stack_float_1;/render_stack_float_2;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '0,/render_context_data_buffer_1;/! s/render_context_data_buffer_1;/render_context_data_buffer_2;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统代码美化完成"