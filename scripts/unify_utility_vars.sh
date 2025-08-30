#!/bin/bash

# 06_utilities.c 变量名统一美化脚本
# 将不一致的变量名统一为语义化名称

FILE="TaleWorlds.Native/src/06_utilities.c"

# 统一变量名：utility_system_resource_handle -> system_resource_handle_primary
sed -i 's/utility_system_resource_handle/system_resource_handle_primary/g' "$FILE"

# 统一变量名：systemMemoryHandle -> system_memory_handle_primary
sed -i 's/systemMemoryHandle/system_memory_handle_primary/g' "$FILE"

# 统一变量名：resourcePosition -> resource_buffer_position
sed -i 's/resourcePosition/resource_buffer_position/g' "$FILE"

echo "变量名统一完成"