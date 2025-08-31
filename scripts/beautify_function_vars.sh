#!/bin/bash

# 美化01_initialization.c文件中函数内部的变量名
# 为函数添加文档注释

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 在system_initialize_main函数前添加文档注释
sed -i '/^void system_initialize_main(void)/i\
/**\
 * 系统主初始化函数\
 * 初始化系统的核心组件和上下文管理器\
 * \
 * 功能：\
 * - 获取系统上下文管理器\
 * - 初始化系统配置数据\
 * - 分配内存并设置初始化上下文\
 * - 设置系统初始化参数和函数指针\
 * \
 * 简化实现：仅保留核心初始化逻辑，删除冗余代码\
 */' "$FILE"

# 替换system_initialize_main函数中的变量名
sed -i '/void system_initialize_main(void)/,/^}/ s/char cVar1;/char context_status_flag;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/uint8_t \*puVar2;/uint8_t *context_manager_ptr;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/int iVar3;/int memory_compare_result;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/int64_t \*plVar4;/int64_t *memory_manager_ptr;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/int64_t lVar5;/int64_t allocated_memory_size;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/uint8_t \*puVar6;/uint8_t *context_node_ptr;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/uint8_t \*puVar7;/uint8_t *context_prev_ptr;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/uint8_t \*puVar8;/uint8_t *context_next_ptr;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/uint8_t \*puStackX_10;/uint8_t *context_buffer_ptr;/' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/code \*pcStackX_18;/code *init_function_ptr;/' "$FILE"

# 替换system_initialize_main函数中的变量使用
sed -i '/void system_initialize_main(void)/,/^}/ s/plVar4/memory_manager_ptr/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/puVar2/context_manager_ptr/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/cVar1/context_status_flag/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/pcStackX_18/init_function_ptr/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/puVar7/context_prev_ptr/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/puVar6/context_node_ptr/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/puVar8/context_next_ptr/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/iVar3/memory_compare_result/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/lVar5/allocated_memory_size/g' "$FILE"
sed -i '/void system_initialize_main(void)/,/^}/ s/puStackX_10/context_buffer_ptr/g' "$FILE"

echo "函数内部变量美化完成"