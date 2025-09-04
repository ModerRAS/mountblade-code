#!/bin/bash

# 美化LAB_标签的脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换LAB_标签为语义化名称
sed -i 's/goto LAB_1800a7ba5;/goto LabelDataCopyComplete;/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a7ba5:/LabelDataCopyComplete:/g' 99_unmatched_functions.c

sed -i 's/goto LAB_1800a7c35;/goto LabelFormatComplete;/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a7c35:/LabelFormatComplete:/g' 99_unmatched_functions.c

sed -i 's/goto LAB_1800a7d01;/goto LabelStringProcessComplete;/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a7d01:/LabelStringProcessComplete:/g' 99_unmatched_functions.c

sed -i 's/goto LAB_1800a7d91;/goto LabelFinalProcessingComplete;/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a7d91:/LabelFinalProcessingComplete:/g' 99_unmatched_functions.c

echo "LAB_标签美化完成"