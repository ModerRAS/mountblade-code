#!/bin/bash

# 美化所有初始化函数的脚本
# 为函数添加文档注释并替换变量名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 为system_initialize_subsystem函数添加文档注释
sed -i '/^void system_initialize_subsystem(void)/i\
/**\
 * 系统子系统初始化函数\
 * 初始化系统的各个子系统组件\
 * \
 * 功能：\
 * - 获取系统上下文管理器\
 * - 初始化子系统配置数据\
 * - 分配内存并设置子系统上下文\
 * - 设置子系统初始化参数\
 * \
 * 简化实现：仅保留核心子系统初始化逻辑\
 */' "$FILE"

# 替换system_initialize_subsystem函数中的变量名
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/char cVar1;/char subsystem_status_flag;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uint8_t \*puVar2;/uint8_t *subsystem_manager_ptr;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/int iVar3;/int subsystem_compare_result;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/int64_t \*plVar4;/int64_t *subsystem_memory_ptr;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/int64_t lVar5;/int64_t subsystem_allocated_size;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uint8_t \*puVar6;/uint8_t *subsystem_node_ptr;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uint8_t \*puVar7;/uint8_t *subsystem_prev_ptr;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uint8_t \*puVar8;/uint8_t *subsystem_next_ptr;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uint8_t \*puStackX_10;/uint8_t *subsystem_buffer_ptr;/' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uint8_t uStackX_18;/uint8_t subsystem_init_flag;/' "$FILE"

# 替换system_initialize_subsystem函数中的变量使用
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/plVar4/subsystem_memory_ptr/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/puVar2/subsystem_manager_ptr/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/cVar1/subsystem_status_flag/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/puVar7/subsystem_prev_ptr/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/puVar6/subsystem_node_ptr/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/puVar8/subsystem_next_ptr/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/iVar3/subsystem_compare_result/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/lVar5/subsystem_allocated_size/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/puStackX_10/subsystem_buffer_ptr/g' "$FILE"
sed -i '/void system_initialize_subsystem(void)/,/^}/ s/uStackX_18/subsystem_init_flag/g' "$FILE"

echo "子系统初始化函数美化完成"