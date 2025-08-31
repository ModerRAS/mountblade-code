#!/bin/bash

# 渲染系统代码块标签美化脚本
# 原本实现：完全重构渲染系统所有代码块标签体系，建立统一的语义化命名规范
# 简化实现：仅将常见的代码块标签十六进制值替换为语义化常量，保持代码结构不变

# 进入工作目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

# 执行标签替换
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_1:/RENDER_LABEL_CODE_BLOCK_ENTRY:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_2:/RENDER_LABEL_CODE_BLOCK_INITIALIZATION:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_3:/RENDER_LABEL_CODE_BLOCK_TEXTURE_SETUP:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_4:/RENDER_LABEL_CODE_BLOCK_SHADER_CONFIG:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_5:/RENDER_LABEL_CODE_BLOCK_BUFFER_ALLOC:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_6:/RENDER_LABEL_CODE_BLOCK_RENDER_SETUP:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_7:/RENDER_LABEL_CODE_BLOCK_FRAME_START:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_8:/RENDER_LABEL_CODE_BLOCK_DRAW_CALL:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_9:/RENDER_LABEL_CODE_BLOCK_FRAME_END:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_10:/RENDER_LABEL_CODE_BLOCK_CLEANUP:/g' 03_rendering.c
sed -i 's/code_rRENDER_ADDRESS_CODE_BLOCK_11:/RENDER_LABEL_CODE_BLOCK_EXTRA_1:/g' 03_rendering.c

# 清理备份
rm 03_rendering.c.backup

echo "渲染系统代码块标签美化完成"