#!/bin/bash

# 批量替换99_unmatched_functions.c文件中的UNK_变量为语义化宏名称

echo "开始批量替换UNK_变量..."

# 替换UNK_180a01a28为SystemDataStreamTemplateA
sed -i 's/&UNK_180a01a28/&SystemDataStreamTemplateA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a019f8为SystemDataStreamTemplateB
sed -i 's/&UNK_180a019f8/&SystemDataStreamTemplateB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01a78为SystemDataStreamTemplateC
sed -i 's/&UNK_180a01a78/&SystemDataStreamTemplateC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01a58为SystemDataStreamTemplateD
sed -i 's/&UNK_180a01a58/&SystemDataStreamTemplateD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01aa8为SystemDataStreamTemplateE
sed -i 's/&UNK_180a01aa8/&SystemDataStreamTemplateE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01ba0为SystemDataStreamTemplateF
sed -i 's/&UNK_180a01ba0/&SystemDataStreamTemplateF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01c50为SystemDataStreamTemplateG
sed -i 's/&UNK_180a01c50/&SystemDataStreamTemplateG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01b40为SystemDataStreamTemplateH
sed -i 's/&UNK_180a01b40/&SystemDataStreamTemplateH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换UNK_180a01cb0为SystemDataStreamTemplateI
sed -i 's/&UNK_180a01cb0/&SystemDataStreamTemplateI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "批量替换完成！"