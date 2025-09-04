#!/bin/bash
# 美化99_unmatched_functions.c中的函数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换FUN_1800863a0为ProcessMatrixTransformation
sed -i 's/FUN_1800863a0/ProcessMatrixTransformation/g' 99_unmatched_functions.c

# 替换其他FUN_函数
sed -i 's/FUN_180086270/ProcessVectorOperation/g' 99_unmatched_functions.c
sed -i 's/FUN_180198890/ProcessXmlElementContext/g' 99_unmatched_functions.c
sed -i 's/FUN_180170ac0/ProcessXmlDataBuffer/g' 99_unmatched_functions.c
sed -i 's/FUN_18029c460/ProcessResourceOperation/g' 99_unmatched_functions.c

# 替换LAB_标签
sed -i 's/LAB_1800ad67f/LABEL_MatrixTransformContinue/g' 99_unmatched_functions.c

echo "函数美化完成"