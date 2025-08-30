#!/bin/bash

# 脚本用于美化 02_core_engine.c 文件
# 识别重复的代码模式并改进变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
TEMP_FILE="/tmp/core_engine_temp.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 1. 修复重复的赋值语句
sed -i 's/\*engineContext = &g_engine_internal_state;\n\*engineContext = &g_engine_internal_state;/\*engineContext = &g_engine_internal_state;/g' "$TEMP_FILE"

# 2. 改进一些未完成的函数实现
sed -i 's/return 0;/\/\/ TODO: 实现此函数\n  return 0;/g' "$TEMP_FILE"

# 3. 修复一些变量名
sed -i 's/undefined8 \*/void \*/g' "$TEMP_FILE"
sed -i 's/ulonglong/uint64_t/g' "$TEMP_FILE"

# 4. 添加一些缺失的注释
sed -i 's/^\/\/ 函数: void \([a-zA-Z_]*\);$/\/\/ 函数: void \1(void)\nvoid \1(void)/g' "$TEMP_FILE"

# 5. 修复一些函数定义格式
sed -i 's/^\/\/ 函数: \([a-zA-Z_]*\) \([a-zA-Z_]*\);$/\/\/ 函数: \1 \2\n\1 \2;/g' "$TEMP_FILE"

# 应用更改
cp "$TEMP_FILE" "$INPUT_FILE"
rm "$TEMP_FILE"

echo "代码美化完成"