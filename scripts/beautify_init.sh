#!/bin/bash

# 美化01_initialization.c文件的脚本
# 替换非语义化的函数名和变量名为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份原文件
cp "$FILE" "$FILE.backup"

# 函数名替换
sed -i 's/FUN_18002c340/system_initialize_main/g' "$FILE"
sed -i 's/FUN_18002c440/system_initialize_subsystem/g' "$FILE"
sed -i 's/FUN_18002c540/system_initialize_memory/g' "$FILE"
sed -i 's/FUN_18002c640/system_initialize_thread/g' "$FILE"
sed -i 's/FUN_18002c740/system_initialize_config/g' "$FILE"
sed -i 's/FUN_18002c840/system_initialize_resource/g' "$FILE"
sed -i 's/FUN_18002c940/system_initialize_audio/g' "$FILE"
sed -i 's/FUN_18002ca40/system_initialize_network/g' "$FILE"
sed -i 's/FUN_18002cb40/system_initialize_render/g' "$FILE"
sed -i 's/FUN_18002cc40/system_initialize_input/g' "$FILE"
sed -i 's/FUN_18002d150/system_initialize_module/g' "$FILE"
sed -i 's/FUN_18002d320/system_initialize_plugin/g' "$FILE"
sed -i 's/FUN_18002d420/system_initialize_security/g' "$FILE"
sed -i 's/FUN_18002d550/system_initialize_debug/g' "$FILE"
sed -i 's/FUN_18002d5e0/system_initialize_monitor/g' "$FILE"
sed -i 's/FUN_18002d6e0/system_initialize_log/g' "$FILE"
sed -i 's/FUN_18002d7e0/system_initialize_cleanup/g' "$FILE"
sed -i 's/FUN_18002d8e0/system_initialize_sync/g' "$FILE"
sed -i 's/FUN_18002d9e0/system_initialize_performance/g' "$FILE"
sed -i 's/FUN_18002dae0/system_initialize_error/g' "$FILE"

# 变量名替换
sed -i 's/DAT_1809fc740/system_init_config_data/g' "$FILE"
sed -i 's/UNK_18098c790/system_init_context_ptr/g' "$FILE"
sed -i 's/FUN_18008d070/system_get_context_manager/g' "$FILE"
sed -i 's/FUN_18008f0d0/system_allocate_memory/g' "$FILE"
sed -i 's/FUN_18008f140/system_initialize_context/g' "$FILE"
sed -i 's/FUN_18006b8f0/system_get_init_function/g' "$FILE"

echo "文件美化完成"