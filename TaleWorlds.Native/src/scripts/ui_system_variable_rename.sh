#!/bin/bash

# UI系统变量重命名脚本
# 用于批量替换UNK_开头的变量名为语义化名称

# 进入源代码目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 04_ui_system.c 04_ui_system.c.backup

# 定义替换规则
# 将UNK_180003430替换为UISystemAnimationProcessor
sed -i 's/UNK_180003430/UISystemAnimationProcessor/g' 04_ui_system.c

# 将UNK_1800032a0替换为UISystemEventProcessor
sed -i 's/UNK_1800032a0/UISystemEventProcessor/g' 04_ui_system.c

# 将UNK_180003300替换为UISystemInputProcessor
sed -i 's/UNK_180003300/UISystemInputProcessor/g' 04_ui_system.c

# 将UNK_180004300替换为UISystemRenderProcessor
sed -i 's/UNK_180004300/UISystemRenderProcessor/g' 04_ui_system.c

# 将UNK_180002ee0替换为UISystemShaderProcessor
sed -i 's/UNK_180002ee0/UISystemShaderProcessor/g' 04_ui_system.c

# 将UNK_180002f20替换为UISystemTextureProcessor
sed -i 's/UNK_180002f20/UISystemTextureProcessor/g' 04_ui_system.c

# 将UNK_180679b80替换为UISystemMemoryManager
sed -i 's/UNK_180679b80/UISystemMemoryManager/g' 04_ui_system.c

# 将UNK_180002e60替换为UISystemBufferManager
sed -i 's/UNK_180002e60/UISystemBufferManager/g' 04_ui_system.c

# 将UNK_180005440替换为UISystemLayoutProcessor
sed -i 's/UNK_180005440/UISystemLayoutProcessor/g' 04_ui_system.c

# 将UNK_180005bc0替换为UISystemStyleProcessor
sed -i 's/UNK_180005bc0/UISystemStyleProcessor/g' 04_ui_system.c

# 替换LAB_标签为语义化名称
sed -i 's/LAB_180655761/UI_LABEL_PROCESSING_START/g' 04_ui_system.c
sed -i 's/LAB_180655683/UI_LABEL_VALIDATION_FAILED/g' 04_ui_system.c
sed -i 's/LAB_180655911/UI_LABEL_STRING_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_180655bea/UI_LABEL_RENDER_COMPLETE/g' 04_ui_system.c
sed -i 's/LAB_1806559dc/UI_LABEL_TEXTURE_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_180655bdf/UI_LABEL_SHADER_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_180655e30/UI_LABEL_INPUT_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_180655afa/UI_LABEL_EVENT_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_1806557d3/UI_LABEL_MEMORY_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_180656abd/UI_LABEL_RESOURCE_PROCESSING/g' 04_ui_system.c
sed -i 's/LAB_180656d5b/UI_LABEL_CLEANUP_PROCESSING/g' 04_ui_system.c

echo "UI系统变量重命名完成"