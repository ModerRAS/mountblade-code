#!/bin/bash

# 06_utilities.c 文件扩展语义化美化脚本
# 原本实现：完全重构工具系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化常量名替换为语义化名称，保持代码结构不变

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 常量名替换
sed -i 's/UTILITY_STATUS_ENABLED_FLAG_2/UTILITY_STATUS_ENABLED_FLAG_SECONDARY/g' "$FILE_PATH"
sed -i 's/UTILITY_STATUS_ENABLED_FLAG_20/UTILITY_STATUS_ENABLED_FLAG_OFFSET_LARGE/g' "$FILE_PATH"
sed -i 's/UTILITY_STATUS_ENABLED_FLAG_28/UTILITY_STATUS_ENABLED_FLAG_OFFSET_MEDIUM/g' "$FILE_PATH"
sed -i 's/UTILITY_FLOAT_ARRAY_OFFSET_TERTIARY/UTILITY_FLOAT_ARRAY_OFFSET_INDEX/g' "$FILE_PATH"
sed -i 's/UTILITY_POINTER_OFFSET/UTILITY_MEMORY_POINTER_OFFSET/g' "$FILE_PATH"
sed -i 's/UTILITY_MAX_UINT32fffffffe/UTILITY_MAX_UINT32_MINUS_TWO/g' "$FILE_PATH"

# 变量名替换
sed -i 's/utility_stack_frame_buffer/utility_stack_frame_data/g' "$FILE_PATH"
sed -i 's/utility_stack_base_pointer/utility_stack_base_addr/g' "$FILE_PATH"
sed -i 's/utility_buffer_work_area/utility_buffer_workspace/g' "$FILE_PATH"
sed -i 's/utility_context_base_data/utility_context_base/g' "$FILE_PATH"
sed -i 's/utility_accumulator_value/utility_accumulator/g' "$FILE_PATH"

echo "06_utilities.c 文件扩展语义化美化完成"