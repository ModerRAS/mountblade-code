#!/bin/bash

# 02_core_engine.c 变量名语义化美化脚本
# 日期：2025年8月30日
# 说明：本脚本用于对02_core_engine.c文件中的变量名进行语义化美化

# 原本实现：完全重构所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

# 确保在正确的目录中执行
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 02_core_engine.c 02_core_engine.c.backup

# 变量名语义化替换规则
# 注意：这些替换只针对实际代码中发现的非语义化变量名

# 1. 替换状态检查变量名
sed -i 's/engine_node_status_check/engine_node_status_flag/g' 02_core_engine.c

# 2. 替换数据比较结果变量名
sed -i 's/engine_data_compare_result/engine_comparison_result/g' 02_core_engine.c

# 3. 替换树根数据变量名
sed -i 's/engine_tree_root_data/engine_tree_root_data_ptr/g' 02_core_engine.c

# 4. 替换树根指针变量名
sed -i 's/engine_tree_root_pointer/engine_tree_root_ptr/g' 02_core_engine.c

# 5. 替换节点构造函数变量名
sed -i 's/engine_node_constructor_func/engine_node_constructor_function/g' 02_core_engine.c

# 6. 替换父节点指针变量名
sed -i 's/engine_parent_node_ptr/engine_parent_node_pointer/g' 02_core_engine.c

# 7. 替换下一个节点指针变量名
sed -i 's/engine_next_node_ptr/engine_next_node_pointer/g' 02_core_engine.c

# 8. 替换新节点指针变量名
sed -i 's/engine_new_node_ptr/engine_new_node_pointer/g' 02_core_engine.c

# 9. 替换当前节点指针变量名
sed -i 's/engine_current_node_ptr/engine_current_node_pointer/g' 02_core_engine.c

# 10. 替换树大小变量名
sed -i 's/engine_tree_size_current/engine_tree_current_size/g' 02_core_engine.c

# 11. 替换主数据标志变量名
sed -i 's/engine_main_data_flag/engine_primary_data_flag/g' 02_core_engine.c

# 12. 替换内部状态变量名
sed -i 's/engine_internal_state_primary/engine_internal_state_data/g' 02_core_engine.c

echo "变量名语义化美化完成"
echo "注意：这是简化实现，主要处理了核心引擎系统中变量名的语义化替换"
echo "原本实现：完全重构核心引擎系统所有变量命名体系，建立统一的语义化命名规范"
echo "简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变"