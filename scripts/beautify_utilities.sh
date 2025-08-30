#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 处理SystemFunction和其他未美化变量

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/dev/shm/mountblade-code/scripts/temp_beautify_utilities.h"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化SystemFunction相关变量
sed -i 's/ExecuteSystemFunction/ExecuteSystemFunctionCall/g' "$TEMP_FILE"
sed -i 's/GetSystemFunctionPointer/GetSystemFunctionPointerAddress/g' "$TEMP_FILE"
sed -i 's/systemFunctionTable/system_function_table/g' "$TEMP_FILE"

# 美化栈变量
sed -i 's/plStackX_[0-9]*/pointer_long_stack_variable/g' "$TEMP_FILE"

# 美化其他变量
sed -i 's/integer_pointer_var[0-9]*/integer_pointer_variable/g' "$TEMP_FILE"
sed -i 's/validation_result_flag_array/validation_result_array/g' "$TEMP_FILE"

# 复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 删除临时文件
rm -f "$TEMP_FILE"

echo "06_utilities.c文件美化完成"