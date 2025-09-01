#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这个脚本将批量重命名未定义的变量和函数

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 美化undefined变量名为更有意义的名称
sed -i 's/undefined \([a-zA-Z_][a-zA-Z0-9_]*\);/void* \1;/g' 99_unmatched_functions.c

# 美化一些具体的变量名
sed -i 's/undefined DAT_/void* Data_/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_/void* Unknown_/g' 99_unmatched_functions.c
sed -i 's/undefined SUB_/void* Function_/g' 99_unmatched_functions.c
sed -i 's/undefined FUN_/void* Function_/g' 99_unmatched_functions.c

# 美化一些特定的变量名
sed -i 's/undefined ObjectManagerGlobalData;/void* ObjectManagerGlobalData;/g' 99_unmatched_functions.c
sed -i 's/undefined ProcessXmlDeclaration;/void* ProcessXmlDeclaration;/g' 99_unmatched_functions.c
sed -i 's/char XmlProcessingSystemFlag;/char XmlProcessingSystemFlag;/g' 99_unmatched_functions.c
sed -i 's/undefined XmlDocumentVersionData;/void* XmlDocumentVersionData;/g' 99_unmatched_functions.c

# 美化函数指针
sed -i 's/undefined \([a-zA-Z_][a-zA-Z0-9_]*\)(/void* \1(/g' 99_unmatched_functions.c

echo "美化完成"