#!/bin/bash
# 替换硬编码数字为语义化常量的脚本

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 替换硬编码的数字0为UTILITY_NULL_RESULT（在比较操作中）
sed -i 's/if (0 < \([a-zA-Z_][a-zA-Z0-9_]*\))/if (UTILITY_NULL_RESULT < \1)/g' "$FILE_PATH"
sed -i 's/if (\([a-zA-Z_][a-zA-Z0-9_]*\) > 0)/if (\1 > UTILITY_NULL_RESULT)/g' "$FILE_PATH"
sed -i 's/if (\([a-zA-Z_][a-zA-Z0-9_]*\) != 0)/if (\1 != UTILITY_NULL_RESULT)/g' "$FILE_PATH"
sed -i 's/if (\([a-zA-Z_][a-zA-Z0-9_]*\) == 0)/if (\1 == UTILITY_NULL_RESULT)/g' "$FILE_PATH"

# 替换硬编码的数字1为UTILITY_INTEGER_INCREMENT_VALUE（在增量操作中）
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) + 1;/\1 = \2 + UTILITY_INTEGER_INCREMENT_VALUE;/g' "$FILE_PATH"
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) - 1;/\1 = \2 - UTILITY_INTEGER_INCREMENT_VALUE;/g' "$FILE_PATH"

# 替换硬编码的数字2为UTILITY_PAIR_COUNT（在计数操作中）
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) + 2;/\1 = \2 + UTILITY_PAIR_COUNT;/g' "$FILE_PATH"
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) - 2;/\1 = \2 - UTILITY_PAIR_COUNT;/g' "$FILE_PATH"

# 替换硬编码的数字3为UTILITY_TRIPLE_COUNT（在计数操作中）
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) + 3;/\1 = \2 + UTILITY_TRIPLE_COUNT;/g' "$FILE_PATH"
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) - 3;/\1 = \2 - UTILITY_TRIPLE_COUNT;/g' "$FILE_PATH"

# 替换硬编码的数字4为UTILITY_QUAD_COUNT（在计数操作中）
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) + 4;/\1 = \2 + UTILITY_QUAD_COUNT;/g' "$FILE_PATH"
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) - 4;/\1 = \2 - UTILITY_QUAD_COUNT;/g' "$FILE_PATH"

# 替换硬编码的数字8为UTILITY_POINTER_SIZE_OFFSET_BYTE（在指针操作中）
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) + 8;/\1 = \2 + UTILITY_POINTER_SIZE_OFFSET_BYTE;/g' "$FILE_PATH"
sed -i 's/\([a-zA-Z_][a-zA-Z0-9_]*\) = \([a-zA-Z_][a-zA-Z0-9_]*\) - 8;/\1 = \2 - UTILITY_POINTER_SIZE_OFFSET_BYTE;/g' "$FILE_PATH"

echo "硬编码数字替换完成"