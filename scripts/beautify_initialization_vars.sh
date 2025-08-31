#!/bin/bash

# 美化01_initialization.c文件中的变量名
# 将非语义化的变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_temp.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup.$(date +%s)"

# 替换变量名
sed -e 's/DAT_180d49348/system_global_data_ptr_48/g' \
    -e 's/DAT_180d49350/system_global_data_ptr_50/g' \
    -e 's/DAT_180d49358/system_global_data_ptr_58/g' \
    -e 's/DAT_180d49398/system_global_data_ptr_98/g' \
    -e 's/DAT_180d493a0/system_global_data_ptr_a0/g' \
    -e 's/DAT_180d493a8/system_global_data_ptr_a8/g' \
    -e 's/DAT_180d493b0/system_global_data_ptr_b0/g' \
    -e 's/DAT_180a06990/system_global_data_ptr_990/g' \
    -e 's/DAT_180a06998/system_global_data_ptr_998/g' \
    -e 's/DAT_180a069a0/system_global_data_ptr_9a0/g' \
    -e 's/DAT_180a069a8/system_global_data_ptr_9a8/g' \
    -e 's/FUN_180049b30/system_function_49b30/g' \
    -e 's/FUN_18004ca00/system_function_4ca00/g' \
    -e 's/DAT_180a13c30/system_global_data_ptr_13c30/g' \
    -e 's/DAT_180a1388c/system_global_data_ptr_1388c/g' \
    -e 's/FUN_180056de0/system_function_56de0/g' \
    -e 's/UNK_180d48da9/system_unknown_char_d48da9/g' \
    -e 's/DAT_180bf5c18/system_global_data_ptr_5c18/g' \
    -e 's/DAT_180bf5c28/system_global_data_ptr_5c28/g' \
    -e 's/UNK_180bf5c1c/system_unknown_ptr_5c1c/g' \
    -e 's/UNK_180bf5c20/system_unknown_ptr_5c20/g' \
    -e 's/UNK_180bf5c24/system_unknown_ptr_5c24/g' \
    -e 's/DAT_180c8ecd0/system_global_data_ptr_cecd0/g' \
    -e 's/DAT_180c8ecb0/system_global_data_ptr_cecb0/g' \
    -e 's/DAT_180c8eca8/system_global_data_ptr_ceca8/g' \
    -e 's/DAT_180a09dc0/system_global_data_ptr_9dc0/g' \
    -e 's/FUN_1800670d0/system_function_670d0/g' \
    -e 's/DAT_18098c8c8/system_global_data_ptr_8c8c8/g' \
    -e 's/DAT_1809fe0d0/system_global_data_ptr_fe0d0/g' \
    -e 's/UNK_1809fd0d8/system_unknown_ptr_fd0d8/g' \
    -e 's/FUN_18002cd40/system_initialize_function_cd40/g' \
    -e 's/_DAT_180bf5290/system_static_data_5290/g' \
    -e 's/_DAT_180bf52a0/system_static_data_52a0/g' \
    -e 's/_DAT_180bf52c0/system_static_data_52c0/g' \
    -e 's/_DAT_180bf52d8/system_static_data_52d8/g' \
    -e 's/_DAT_180bf52c8/system_static_data_52c8/g' \
    -e 's/_DAT_180bf52d0/system_static_data_52d0/g' \
    -e 's/UNK_180a3c3e0/system_unknown_ptr_3c3e0/g' \
    -e 's/FUN_18002d260/system_initialize_function_d260/g' \
    -e 's/FUN_1808fc838/system_function_8fc838/g' \
    -e 's/system_initialize_memory/system_memory_init_function/g' \
    -e 's/system_initialize_context/system_context_init_function/g' \
    -e 's/FUN_1808fc7d0/system_function_8fc7d0/g' \
    -e 's/system_unk_ptr_41760/system_unknown_ptr_41760/g' \
    -e 's/FUN_18002d2a0/system_initialize_function_d2a0/g' \
    -e 's/system_initialize_thread/system_thread_init_function/g' \
    -e 's/system_unk_ptr_41780/system_unknown_ptr_41780/g' \
    -e 's/FUN_18002d2e0/system_initialize_function_d2e0/g' \
    -e 's/FUN_1809417a0/system_function_9417a0/g' \
    -e 's/FUN_1802281a0/system_function_2281a0/g' \
    -e 's/DAT_1809ff9e8/system_global_data_ptr_ff9e8/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 移动临时文件到原文件位置
mv "$TEMP_FILE" "$INPUT_FILE"

echo "01_initialization.c文件变量名美化完成"
