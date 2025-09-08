#!/bin/bash

# 批量替换99_unmatched_functions.c中的UNK_变量使用

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换UNK_180a01ae0为ValidationManagerPointer
sed -i 's/&UNK_180a01ae0/&ValidationManagerPointer/g' 99_unmatched_functions.c

# 替换UNK_1809fcc28为SystemStringValidationTemplate
sed -i 's/&UNK_1809fcc28/&SystemStringValidationTemplate/g' 99_unmatched_functions.c

# 替换UNK_18098bcb0为SystemGlobalDataTemplatePointer
sed -i 's/&UNK_18098bcb0/&SystemGlobalDataTemplatePointer/g' 99_unmatched_functions.c

# 替换UNK_180a018e0为SystemStreamingBufferA
sed -i 's/&UNK_180a018e0/&SystemStreamingBufferA/g' 99_unmatched_functions.c

# 替换UNK_180a019a0为SystemStreamingBufferB
sed -i 's/&UNK_180a019a0/&SystemStreamingBufferB/g' 99_unmatched_functions.c

# 替换UNK_180a01940为SystemStreamingBufferC
sed -i 's/&UNK_180a01940/&SystemStreamingBufferC/g' 99_unmatched_functions.c

# 替换UNK_180a01a28为SystemStreamingBufferD
sed -i 's/&UNK_180a01a28/&SystemStreamingBufferD/g' 99_unmatched_functions.c

# 替换UNK_180a019f8为SystemStreamingBufferE
sed -i 's/&UNK_180a019f8/&SystemStreamingBufferE/g' 99_unmatched_functions.c

# 替换UNK_180a01a78为SystemStreamingBufferF
sed -i 's/&UNK_180a01a78/&SystemStreamingBufferF/g' 99_unmatched_functions.c

# 替换UNK_180a01aa8为SystemStreamingBufferG
sed -i 's/&UNK_180a01aa8/&SystemStreamingBufferG/g' 99_unmatched_functions.c

# 替换UNK_180a01ba0为SystemStreamingBufferH
sed -i 's/&UNK_180a01ba0/&SystemStreamingBufferH/g' 99_unmatched_functions.c

# 替换UNK_180a01c50为SystemStreamingBufferI
sed -i 's/&UNK_180a01c50/&SystemStreamingBufferI/g' 99_unmatched_functions.c

# 替换UNK_180a01a58为SystemStreamingBufferJ
sed -i 's/&UNK_180a01a58/&SystemStreamingBufferJ/g' 99_unmatched_functions.c

echo "批量替换完成"