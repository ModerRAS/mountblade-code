#!/bin/bash

# 继续美化00_data_definitions.h文件中剩余的pfloat_var变量名
# 简化实现：仅将常见的重复变量名替换为语义化名称
# 原本实现：完全重构所有变量命名体系

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建临时文件
TEMP_FILE="/tmp/00_data_definitions_h_temp2.c"

# 复制原文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 继续替换剩余的pfloat_var变量名
# 处理第6863和6866行的变量声明
sed -i '6863s/pfloat_var/float_vector_data_ptr/g' "$TEMP_FILE"
sed -i '6866s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"

# 处理第6904行及后续的pfloat_var
sed -i '6904s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"
sed -i '6931s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"
sed -i '6932s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"
sed -i '6939s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"
sed -i '6940s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"
sed -i '6943s/pfloat_var/float_vector_buffer_ptr/g' "$TEMP_FILE"

# 处理第6949行及后续的pfloat_var
sed -i '6949s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6950s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6951s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6953s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6954s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6955s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6960s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6961s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6962s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"
sed -i '6963s/pfloat_var/float_conversion_array_ptr/g' "$TEMP_FILE"

# 处理第6973行的pfloat_var
sed -i '6973s/pfloat_var/float_math_result_ptr/g' "$TEMP_FILE"

# 替换回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f "$TEMP_FILE"

echo "剩余变量名美化完成"