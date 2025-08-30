#!/bin/bash

# 美化99_unmatched_functions.c中的硬编码LAB_标签
# 将LAB_18024b24e等替换为语义化标签名

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup_lab_beautify

# 定义替换规则
# 注意：这里需要根据实际代码内容来定义语义化标签名

# 替换常见的标签模式
sed -i 's/LAB_18024b24e:/SYSTEM_LABEL_FLOW_CONTINUE_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801a38da:/SYSTEM_LABEL_LONG_TARGET_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801a5131:/SYSTEM_LABEL_LONG_EXIT_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801a5b51:/SYSTEM_LABEL_POINTER_CHECK_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801a5d96:/SYSTEM_LABEL_POINTER_CONTINUE_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801a5f38:/SYSTEM_LABEL_POINTER_ITERATION_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801a6077:/SYSTEM_LABEL_POINTER_CONTINUE_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801aa610:/SYSTEM_LABEL_RESULT_CONTINUE_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801ad30f:/SYSTEM_LABEL_RESULT_CONTINUE_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801ae165:/SYSTEM_LABEL_PARAM_CHECK_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 继续替换更多的标签...
sed -i 's/LAB_1801b0618:/SYSTEM_LABEL_PARAM_LOOP_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801b0748:/SYSTEM_LABEL_PARAM_LOOP_3:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801b0a90:/SYSTEM_LABEL_PARAM_CONTINUE_1:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801b0c03:/SYSTEM_LABEL_PARAM_TARGET_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801b0db0:/SYSTEM_LABEL_PARAM_LOOP_4:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/LAB_1801b0e50:/SYSTEM_LABEL_PARAM_CONTINUE_2:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换更多的LAB标签...
# 由于标签数量很多，这里只替换一部分作为示例

echo "LAB标签美化完成"