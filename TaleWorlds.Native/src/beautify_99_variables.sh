#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的变量名
# 这个脚本会替换UNK_和DAT_开头的变量名为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换UNK_变量名为系统相关的语义化名称
sed -i 's/UNK_180a0e868/SystemStringBuffer1/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e870/SystemStringBuffer2/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e878/SystemStringBuffer3/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e888/SystemStringBuffer4/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e8a8/SystemStringBuffer5/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0ee30/SystemStringBuffer6/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0ee38/SystemStringBuffer7/g' 99_unmatched_functions.c
sed -i 's/UNK_180a3cb84/SystemStringBuffer8/g' 99_unmatched_functions.c

# 替换主要的验证字符串
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
sed -i 's/UNK_180a0e968/SystemValidationString11/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e980/SystemValidationString12/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e990/SystemValidationString13/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e9a0/SystemValidationString14/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e9b8/SystemValidationString15/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e9d0/SystemValidationString16/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0e9f0/SystemValidationString17/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0ea00/SystemValidationString18/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0ea20/SystemValidationString19/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0ea30/SystemValidationString20/g' 99_unmatched_functions.c

# 替换标签名为更有意义的名称
sed -i 's/LAB_1801f51c0/SystemValidationFailureLabel/g' 99_unmatched_functions.c
sed -i 's/LAB_1801f52de/SystemAlternativePathLabel/g' 99_unmatched_functions.c
sed -i 's/LAB_1801f54c5/SystemEarlyExitLabel/g' 99_unmatched_functions.c

echo "变量名美化完成"