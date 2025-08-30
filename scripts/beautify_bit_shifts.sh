#!/bin/bash

# 美化位移操作的脚本
# 原本实现：完全重构所有位移操作，建立统一的位移操作语义化命名规范
# 简化实现：仅将常见的硬编码位移值替换为语义化常量名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 替换右移5位操作
sed -i 's/>> 5/>> SYSTEM_BIT_SHIFT_5/g' "$FILE"

# 替换左移5位操作
sed -i 's/<< 5/<< SYSTEM_BIT_SHIFT_5/g' "$FILE"

echo "位移操作美化完成"