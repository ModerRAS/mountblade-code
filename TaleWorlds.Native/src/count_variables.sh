#!/bin/bash

cd "/dev/shm/mountblade-code/TaleWorlds.Native/src"

echo "=== Ghidra 变量名统计报告 ==="
echo "文件路径: /dev/shm/mountblade-code/TaleWorlds.Native/src/"
echo "统计时间: $(date)"
echo ""

for file in 99_unmatched_functions.c 03_rendering.c 04_ui_system.c; do
    echo "=== $file ==="
    echo "DAT_: $(grep -c "^DAT_" "$file" 2>/dev/null || echo 0)"
    echo "local_: $(grep -c "^local_" "$file" 2>/dev/null || echo 0)"
    echo "s_: $(grep -c "^s_" "$file" 2>/dev/null || echo 0)"
    echo "UNK_: $(grep -c "^UNK_" "$file" 2>/dev/null || echo 0)"
    echo "FUN_: $(grep -c "^FUN_" "$file" 2>/dev/null || echo 0)"
    echo "LABEL_: $(grep -c "^LABEL_" "$file" 2>/dev/null || echo 0)"
    echo ""
done