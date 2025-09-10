#!/bin/bash

# 查找并统计所有需要美化的变量名
echo "=== 渲染系统未美化变量名统计 ==="
echo "FUN_ 变量名数量: $(grep -c "FUN_180[0-9a-f]" 03_rendering.c)"
echo "DAT_ 变量名数量: $(grep -c "DAT_180[0-9a-f]" 03_rendering.c)"
echo "UNK_ 变量名数量: $(grep -c "UNK_180[0-9a-f]" 03_rendering.c)"
echo "s_ 变量名数量: $(grep -c "s_180[0-9a-f]" 03_rendering.c)"

echo ""
echo "=== 未匹配函数未美化变量名统计 ==="
echo "FUN_ 变量名数量: $(grep -c "FUN_180[0-9a-f]" 99_unmatched_functions.c)"
echo "DAT_ 变量名数量: $(grep -c "DAT_180[0-9a-f]" 99_unmatched_functions.c)"
echo "UNK_ 变量名数量: $(grep -c "UNK_180[0-9a-f]" 99_unmatched_functions.c)"
echo "s_ 变量名数量: $(grep -c "s_180[0-9a-f]" 99_unmatched_functions.c)"

echo ""
echo "=== 核心引擎未美化变量名统计 ==="
echo "FUN_ 变量名数量: $(grep -c "FUN_180[0-9a-f]" 02_core_engine.c)"
echo "DAT_ 变量名数量: $(grep -c "DAT_180[0-9a-f]" 02_core_engine.c)"
echo "UNK_ 变量名数量: $(grep -c "UNK_180[0-9a-f]" 02_core_engine.c)"
echo "s_ 变量名数量: $(grep -c "s_180[0-9a-f]" 02_core_engine.c)"

echo ""
echo "=== UI系统未美化变量名统计 ==="
echo "FUN_ 变量名数量: $(grep -c "FUN_180[0-9a-f]" 04_ui_system.c)"
echo "DAT_ 变量名数量: $(grep -c "DAT_180[0-9a-f]" 04_ui_system.c)"
echo "UNK_ 变量名数量: $(grep -c "UNK_180[0-9a-f]" 04_ui_system.c)"
echo "s_ 变量名数量: $(grep -c "s_180[0-9a-f]" 04_ui_system.c)"