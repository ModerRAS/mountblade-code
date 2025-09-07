#!/bin/bash

# 美化变量名脚本
echo "开始美化变量名..."

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换一些常见的UNK_变量
sed -i 's/UNK_180a0e890/SystemValidationString1/g' 99_unmatched_functions.c
sed -i 's/DAT_180a0e8a0/SystemDataBuffer1/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e8b8/SystemValidationString2/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e8c0/SystemValidationString3/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e8d8/SystemValidationString4/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e8f0/SystemValidationString5/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e900/SystemValidationString6/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e918/SystemValidationString7/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e930/SystemValidationString8/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e940/SystemValidationString9/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e958/SystemValidationString10/g' 99_unmatched_functions.c

# 替换标签名
sed -i 's/LAB_1801f54c5/SystemEarlyExitLabel/g' 99_unmatched_functions.c
sed -i 's/LAB_1801f51c0/SystemValidationFailureLabel/g' 99_unmatched_functions.c
sed -i 's/LAB_1801f52de/SystemAlternativePathLabel/g' 99_unmatched_functions.c
sed -i 's/LAB_1801f5644/SystemDefaultReturnLabel/g' 99_unmatched_functions.c
sed -i 's/LAB_1801f5349/SystemLoopContinueLabel/g' 99_unmatched_functions.c

echo "变量名美化完成"