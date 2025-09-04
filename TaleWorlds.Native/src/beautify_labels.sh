#!/bin/bash

# 美化99_unmatched_functions.c中的标签
# 这个脚本将LAB_标签替换为更具语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换标签为更具语义化的名称
sed -i 's/LAB_1800a814a:/LabelStringProcessingComplete:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a837b:/LabelResourceAllocationDone:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a87af:/LabelMemoryManagementDone:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a990c:/LabelSystemOperationComplete:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a9108:/LabelContextSwitchDone:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a8889:/LabelValidationComplete:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a88fb:/LabelProcessingComplete:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a8988:/LabelDataTransferDone:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a8a0f:/LabelBufferManagementDone:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a8a97:/LabelHandleManagementDone:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800a8b50:/LabelCleanupComplete:/g' 99_unmatched_functions.c
sed -i 's/LAB_1800aa8e4:/LabelFinalizationDone:/g' 99_unmatched_functions.c

echo "标签美化完成"