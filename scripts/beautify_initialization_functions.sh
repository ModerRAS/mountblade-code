#!/bin/bash

# 美化01_initialization.c文件中的FUN_函数名
# 简化实现：仅替换常见的FUN_函数名为语义化名称
# 原本实现：完全重构所有函数命名体系，建立统一的语义化命名规范

FILE="TaleWorlds.Native/src/01_initialization.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 美化FUN_函数名为语义化名称
sed -i 's/FUN_18007fcd0/system_initialize_core/g' "$FILE"
sed -i 's/FUN_180073930/system_initialize_components/g' "$FILE"
sed -i 's/FUN_18005ab20/system_initialize_memory/g' "$FILE"
sed -i 's/FUN_1800637c0/system_initialize_threads/g' "$FILE"
sed -i 's/FUN_1800637f0/system_initialize_config/g' "$FILE"
sed -i 's/FUN_180045af0/system_initialize_network/g' "$FILE"
sed -i 's/FUN_180059ba0/system_initialize_graphics/g' "$FILE"
sed -i 's/FUN_180059620/system_initialize_audio/g' "$FILE"
sed -i 's/FUN_180044a30/system_initialize_resources/g' "$FILE"
sed -i 's/FUN_180046860/system_initialize_input/g' "$FILE"
sed -i 's/FUN_18005c060/system_initialize_ui/g' "$FILE"
sed -i 's/FUN_180066dd0/system_initialize_script/g' "$FILE"
sed -i 's/FUN_180058c20/system_initialize_physics/g' "$FILE"
sed -i 's/FUN_18004bb30/system_initialize_database/g' "$FILE"
sed -i 's/FUN_180779d6c/system_cleanup_resources/g' "$FILE"

echo "函数名美化完成"