#!/bin/bash

# 统计各文件中的 FUN_ 函数调用数量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

echo "=== 各文件中的 FUN_ 函数调用统计 ==="
echo ""

for file in *.c; do
    if [ -f "$file" ]; then
        # 统计总的 FUN_ 出现次数
        total_count=$(grep -c "FUN_180" "$file" 2>/dev/null || echo "0")
        
        # 统计函数定义（包含 void FUN_, int FUN_ 等）
        define_count=$(grep -c -E "(void|int|long|char|float|double|undefined)\s+FUN_180" "$file" 2>/dev/null || echo "0")
        
        # 计算函数调用数量（总数减去定义数）
        call_count=$((total_count - define_count))
        
        if [ "$total_count" -gt 0 ]; then
            echo "文件: $file"
            echo "  总 FUN_ 出现次数: $total_count"
            echo "  函数定义数量: $define_count"
            echo "  函数调用数量: $call_count"
            echo ""
        fi
    fi
done

echo "=== 详细分析 ==="
echo ""

# 分析每个文件中的具体函数调用
for file in *.c; do
    if [ -f "$file" ]; then
        call_count=$(grep -c "FUN_180" "$file" 2>/dev/null || echo "0")
        define_count=$(grep -c -E "(void|int|long|char|float|double|undefined)\s+FUN_180" "$file" 2>/dev/null || echo "0")
        actual_calls=$((call_count - define_count))
        
        if [ "$actual_calls" -gt 0 ]; then
            echo "📁 $file (约 $actual_calls 个函数调用需要美化)"
            
            # 显示一些示例调用
            echo "   示例调用:"
            grep -n "FUN_180" "$file" | grep -v -E "(void|int|long|char|float|double|undefined)\s+FUN_180" | head -3 | sed 's/^/     /'
            echo ""
        fi
    fi
done