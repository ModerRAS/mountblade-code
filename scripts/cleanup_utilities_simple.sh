#!/bin/bash

# 脚本：清理06_utilities.c文件中的重复注释和冗余信息
# 用途：美化代码，删除重复的注释行，保持代码语义不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 使用sed删除重复的注释行
# 1. 删除连续的重复注释行
sed -i '/^\/\/ ...（删除重复注释）...$/d' "$INPUT_FILE"
sed -i '/^\/\/ 美化版本/d' "$INPUT_FILE"
sed -i '/^\/\/ 新增语义化常量定义/d' "$INPUT_FILE"
sed -i '/^\/\/ 提高了代码的可读性和维护性/d' "$INPUT_FILE"
sed -i '/^\/\/ 保持代码语义不变，这是简化实现/d' "$INPUT_FILE"
sed -i '/^\/\/ 原本实现：完全重构/d' "$INPUT_FILE"
sed -i '/^\/\/ 简化实现：仅将/d' "$INPUT_FILE"

echo "文件清理完成"