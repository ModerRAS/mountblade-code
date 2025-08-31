#!/bin/bash

# 美化变量名，将超长的变量名替换为语义化的名称

INPUT_FILE="TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="TaleWorlds.Native/src/06_utilities.c.tmp"

# 替换超长变量名
sed 's/utility_resource_utility_data_pointer_primary_extended_main_primary/utility_extended_data_ptr/g' "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"