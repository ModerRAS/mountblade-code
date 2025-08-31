#!/bin/bash

# UI系统变量名美化脚本 - 完整版
# 将非语义化的变量名替换为语义化的变量名

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 变量名替换规则
# 堆栈变量
sed 's/ui_stack_var_a0/ui_stack_data_buffer/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_ffffffffffffff88/ui_stack_pointer_data/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_20/ui_stack_index_data/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_a8/ui_stack_status_data/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_00000070/ui_stack_offset_data/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_00000090/ui_stack_memory_base/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_00000098/ui_stack_task_index/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"
sed 's/ui_stack_var_000000f8/ui_stack_event_data/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"

# 其他需要替换的变量名
sed 's/ui_stack_float_array_60e8/ui_stack_float_array/g' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"