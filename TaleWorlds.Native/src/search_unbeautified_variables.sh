#!/bin/bash

# 系统化搜索未美化的Ghidra变量名
# 搜索目录
SEARCH_DIR="/dev/shm/mountblade-code/TaleWorlds.Native/src"

echo "=== 系统化搜索未美化的Ghidra变量名 ==="
echo "搜索目录: $SEARCH_DIR"
echo "========================================"

# 1. 搜索FUN_函数调用（非宏定义）
echo "1. 搜索FUN_函数调用（非宏定义）:"
echo "----------------------------------------"
grep -r "void FUN_" "$SEARCH_DIR" --include="*.c" | head -10
echo ""

# 2. 搜索UNK_变量使用（非宏定义）
echo "2. 搜索UNK_变量使用（非宏定义）:"
echo "----------------------------------------"
grep -r "^[^#]*UNK_[0-9a-fA-F]" "$SEARCH_DIR" --include="*.c" | grep -v "define" | head -10
echo ""

# 3. 搜索DAT_变量使用（非宏定义）
echo "3. 搜索DAT_变量使用（非宏定义）:"
echo "----------------------------------------"
grep -r "^[^#]*DAT_[0-9a-fA-F]" "$SEARCH_DIR" --include="*.c" | grep -v "define" | head -10
echo ""

# 4. 搜索local_变量使用
echo "4. 搜索local_变量使用:"
echo "----------------------------------------"
grep -r "local_[0-9]" "$SEARCH_DIR" --include="*.c" | grep -v "define" | head -10
echo ""

# 5. 搜索iVar变量使用（非宏定义）
echo "5. 搜索iVar变量使用（非宏定义）:"
echo "----------------------------------------"
grep -r "^[^#]*iVar" "$SEARCH_DIR" --include="*.c" | grep -v "define" | head -10
echo ""

# 6. 搜索s_变量使用（非宏定义）
echo "6. 搜索s_变量使用（非宏定义）:"
echo "----------------------------------------"
grep -r "^[^#]*s_[0-9a-fA-F]" "$SEARCH_DIR" --include="*.c" | grep -v "define" | head -10
echo ""

# 7. 统计每种变量的总数
echo "7. 变量统计:"
echo "----------------------------------------"
echo "FUN_函数定义总数:"
grep -r "#define FUN_" "$SEARCH_DIR" --include="*.c" | wc -l

echo "UNK_变量定义总数:"
grep -r "#define UNK_" "$SEARCH_DIR" --include="*.c" | wc -l

echo "DAT_变量定义总数:"
grep -r "#define DAT_" "$SEARCH_DIR" --include="*.c" | wc -l

echo "local_变量定义总数:"
grep -r "local_" "$SEARCH_DIR" --include="*.c" | wc -l

echo "iVar变量定义总数:"
grep -r "#define iVar" "$SEARCH_DIR" --include="*.c" | wc -l

echo "========================================"
echo "搜索完成"