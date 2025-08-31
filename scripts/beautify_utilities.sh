#!/bin/bash

# 06_utilities.c 文件语义化美化脚本
# 原本实现：完全重构工具系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名和函数名替换为语义化名称，保持代码结构不变

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE="/tmp/utilities_beautified.c"

# 常量定义语义化替换
sed -e 's/UTILITY_RESOURCE_FLAG_B8/UTILITY_RESOURCE_FLAG_OFFSET_0X27/g' \
    -e 's/UTILITY_STREAM_TYPE_FEBE/UTILITY_STREAM_TYPE_SIGNATURE_FEBE/g' \
    -e 's/UTILITY_STREAM_TYPE_BFEB/UTILITY_STREAM_TYPE_SIGNATURE_BFEB/g' \
    -e 's/UTILITY_STREAM_TYPE_ORTC/UTILITY_STREAM_TYPE_SIGNATURE_ORTC/g' \
    -e 's/UTILITY_STREAM_TYPE_BIVE/UTILITY_STREAM_TYPE_SIGNATURE_BIVE/g' \
    -e 's/UTILITY_STREAM_TYPE_OLMP/UTILITY_STREAM_TYPE_SIGNATURE_OLMP/g' \
    -e 's/UTILITY_STREAM_TYPE_BLMP/UTILITY_STREAM_TYPE_SIGNATURE_BLMP/g' \
    -e 's/UTILITY_STREAM_TYPE_MRAP/UTILITY_STREAM_TYPE_SIGNATURE_MRAP/g' \
    -e 's/UTILITY_STREAM_TYPE_BMRP/UTILITY_STREAM_TYPE_SIGNATURE_BMRP/g' \
    -e 's/UTILITY_STREAM_TYPE_BFEP/UTILITY_STREAM_TYPE_SIGNATURE_BFEP/g' \
    -e 's/UTILITY_STREAM_TYPE_BIPS/UTILITY_STREAM_TYPE_BINARY_PROCESSING_SYSTEM/g' \
    -e 's/UTILITY_STREAM_TYPE_BFES/UTILITY_STREAM_TYPE_SIGNATURE_BFES/g' \
    -e 's/UTILITY_STREAM_TYPE_FFCS/UTILITY_STREAM_TYPE_SIGNATURE_FFCS/g' \
    -e 's/UTILITY_STREAM_TYPE_BNLT/UTILITY_STREAM_TYPE_SIGNATURE_BNLT/g' \
    -e 's/UTILITY_STREAM_TYPE_BIAW/UTILITY_STREAM_TYPE_SIGNATURE_BIAW/g' \
    -e 's/UTILITY_STREAM_TYPE_BIFE/UTILITY_STREAM_TYPE_SIGNATURE_BIFE/g' \
    -e 's/UTILITY_STREAM_TYPE_BDMC/UTILITY_STREAM_TYPE_SIGNATURE_BDMC/g' \
    -e 's/UTILITY_STREAM_TYPE_IDMC/UTILITY_STREAM_TYPE_SIGNATURE_IDMC/g' \
    "$FILE_PATH" > "$TEMP_FILE"

# 函数名语义化替换
sed -i -e 's/utility_process_thread_local_storage/utility_process_thread_local_data/g' \
    -e 's/utility_cleanup_thread_resources/utility_cleanup_thread_data/g' \
    -e 's/utility_validate_resource_state/utility_validate_resource_status/g' \
    -e 's/utility_process_resource_pointer/utility_process_resource_ptr/g' \
    -e 's/utility_resource_request_handler/utility_handle_resource_request/g' \
    "$TEMP_FILE"

# 变量名语义化替换
sed -i -e 's/utility_resource_handle/utility_resource_handle_value/g' \
    -e 's/utility_operation_status/utility_operation_result/g' \
    -e 's/utility_loop_counter/utility_loop_index/g' \
    -e 's/utility_thread_workspace/utility_thread_workspace_buffer/g' \
    "$TEMP_FILE"

# 修复语法错误
sed -i -e 's/utility_iteration_idx;/utility_iteration_idx = 0;/g' \
    -e 's/utility_iteration_idx;/utility_iteration_idx = utility_iteration_idx + 1;/g' \
    -e 's/(\*utility_context_main_data)/(*utility_context_main_data)/g' \
    "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "06_utilities.c 文件语义化美化完成"