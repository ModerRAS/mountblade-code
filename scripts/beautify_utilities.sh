#!/bin/bash

# 06_utilities.c 美化脚本
# 用于处理变量名和函数名的语义化替换

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原始文件
cp "$FILE_PATH" "${FILE_PATH}.backup"

# 删除文件头部的大量注释（前14行）
sed -i '1,14d' "$FILE_PATH"

# 修复一些常见的非语义化变量名和函数名
# 注意：这里只做一些简单的替换，复杂的替换需要手动处理

sed -i 's/UTILITY_NULL_PTR/UTILITY_NULL_POINTER/g' "$FILE_PATH"
sed -i 's/UTILITY_STATUS_RESOURCE_AVAILABLE/UTILITY_STATUS_RESOURCE_READY/g' "$FILE_PATH"
sed -i 's/UTILITY_STATUS_INVALID_PARAMETER/UTILITY_STATUS_INVALID_ARGUMENT/g' "$FILE_PATH"

# 清理一些孤立的代码块和格式问题
sed -i '/^[[:space:]]*$/N;/^\n$/d' "$FILE_PATH"

echo "文件美化完成"