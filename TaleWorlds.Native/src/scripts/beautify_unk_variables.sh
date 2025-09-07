#!/bin/bash

# 美化99_unmatched_functions.c中的UNK_变量
# 将Ghidra生成的UNK_变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# UNK_变量重命名规则
sed -i 's/&UNK_18098bcb0/&SystemDefaultStringPointer/g' "$INPUT_FILE"
sed -i 's/&UNK_1809fcc28/&SystemFunctionPointerTable/g' "$INPUT_FILE"
sed -i 's/&UNK_180a02710/&SystemDataStreamConfig/g' "$INPUT_FILE"
sed -i 's/&UNK_180a018e0/&SystemStreamingConfigA/g' "$INPUT_FILE"
sed -i 's/&UNK_180a019a0/&SystemStreamingConfigB/g' "$INPUT_FILE"
sed -i 's/&UNK_180a01940/&SystemStreamingConfigC/g' "$INPUT_FILE"
sed -i 's/&UNK_180a01a28/&SystemStreamingConfigD/g' "$INPUT_FILE"
sed -i 's/&UNK_180a01748/&SystemErrorHandler/g' "$INPUT_FILE"
sed -i 's/&UNK_180a028c8/&SystemDXGIFactoryConfigA/g' "$INPUT_FILE"
sed -i 's/&UNK_180a02718/&SystemDXGIFactoryConfigB/g' "$INPUT_FILE"
sed -i 's/&UNK_180a02728/&SystemDXGIFactoryConfigC/g' "$INPUT_FILE"

echo "UNK_变量美化完成"