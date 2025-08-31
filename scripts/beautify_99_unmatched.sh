#!/bin/bash

# 99_unmatched_functions.c 文件美化脚本
# 用于批量替换十六进制常量为语义化常量名

FILE="TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 常见十六进制常量的语义化替换
sed -i 's/0x71/SYSTEM_CHAR_Q/g' "$FILE"
sed -i 's/0x75/SYSTEM_CHAR_U/g' "$FILE"
sed -i 's/0x6f/SYSTEM_CHAR_O/g' "$FILE"
sed -i 's/0x74/SYSTEM_CHAR_T/g' "$FILE"
sed -i 's/0x61/SYSTEM_CHAR_A/g' "$FILE"
sed -i 's/0x6d/SYSTEM_CHAR_M/g' "$FILE"
sed -i 's/0x70/SYSTEM_CHAR_P/g' "$FILE"
sed -i 's/0x6c/SYSTEM_CHAR_L/g' "$FILE"
sed -i 's/0x67/SYSTEM_CHAR_G/g' "$FILE"
sed -i 's/0x73/SYSTEM_CHAR_S/g' "$FILE"
sed -i 's/0x00/SYSTEM_CHAR_NULL/g' "$FILE"

# 位掩码常量
sed -i 's/0xffffffff/SYSTEM_BIT_MASK_FULL_32BIT/g' "$FILE"
sed -i 's/0xfffffffe/SYSTEM_BIT_MASK_31BIT/g' "$FILE"
sed -i 's/0xfffffffd/SYSTEM_BIT_MASK_30BIT/g' "$FILE"

# 数值常量
sed -i 's/15000/SYSTEM_VALUE_TIMEOUT_THRESHOLD/g' "$FILE"
sed -i 's/100/SYSTEM_VALUE_HUNDRED/g' "$FILE"
sed -i 's/5000\.0/SYSTEM_VALUE_FLOAT_THRESHOLD/g' "$FILE"

# 常见偏移量
sed -i 's/0xb/SYSTEM_PARAM_ARRAY_OFFSET_B/g' "$FILE"
sed -i 's/0xd/SYSTEM_PARAM_ARRAY_OFFSET_D/g' "$FILE"
sed -i 's/0x3c1/SYSTEM_CONFIG_OFFSET_THREAD_CONTROL/g' "$FILE"

# 浮点数常量
sed -i 's/1\.1754944e-38/SYSTEM_FLOAT_VALUE_MIN_POSITIVE/g' "$FILE"
sed -i 's/0\.75/SYSTEM_FLOAT_VALUE_0_75/g' "$FILE"
sed -i 's/2\.25/SYSTEM_FLOAT_VALUE_2_25/g' "$FILE"
sed -i 's/-0\.01/SYSTEM_FLOAT_VALUE_NEGATIVE_0_01/g' "$FILE"
sed -i 's/0\.01/SYSTEM_FLOAT_VALUE_0_01/g' "$FILE"

echo "文件美化完成"