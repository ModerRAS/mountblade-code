#!/bin/bash
# 渲染系统变量名美化脚本 - 最终阶段
# 原本实现：完全重构变量命名体系，包括语义化分析和上下文感知命名
# 简化实现：仅将硬编码栈变量名替换为语义化名称，保持代码结构和功能不变

# 使用正则表达式替换所有剩余的Stack变量
# 将所有fStack00000000000000xx替换为render_stack_float_xx
sed -i 's/fStack00000000000000\([0-9a-f]\{2\}\)/render_stack_float_\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 将所有iStack00000000000000xx替换为render_stack_int_xx
sed -i 's/iStack00000000000000\([0-9a-f]\{2\}\)/render_stack_int_\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 将所有cStack00000000000000xx替换为render_stack_char_xx
sed -i 's/cStack00000000000000\([0-9a-f]\{2\}\)/render_stack_char_\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统栈变量名美化完成 - 最终阶段"