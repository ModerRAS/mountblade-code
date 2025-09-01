#!/bin/bash

# 修复99_unmatched_functions.c文件中的变量错误
# 这个脚本修复SystemProcessDataArray函数中的变量声明和使用错误

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/99_unmatched_functions_fixed.c"

# 查找SystemProcessDataArray函数并修复变量声明
sed '/^uint64_t \* SystemProcessDataArray/,/^}/ {
    # 在函数开始处添加缺失的变量声明
    /char \*system_string_index_value;/a\
  long long system_string_offset_diff;          // 字符串偏移量差值
    
    # 修复错误的变量引用
    s/system_data_buffer_ptr = (uint64_t \*)system_data_buffer_ptr\[SYSTEM_PTR_UINT_INDEX_HANDLE\];/system_data_array_primary_ptr = (uint64_t *)system_data_array_primary_ptr[SYSTEM_PTR_UINT_INDEX_HANDLE];/g
}' "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "修复完成：SystemProcessDataArray函数中的变量错误已修复"