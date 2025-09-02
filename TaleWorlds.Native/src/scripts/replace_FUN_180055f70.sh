#!/bin/bash

# 替换FUN_180055f70为EmergencySystemExitHandler的脚本

echo "正在替换FUN_180055f70为EmergencySystemExitHandler..."

# 需要处理的文件列表
files=(
    "TaleWorlds.Native/src/01_initialization.c"
    "TaleWorlds.Native/src/02_core_engine.c"
    "TaleWorlds.Native/src/03_rendering.c"
    "TaleWorlds.Native/TaleWorlds.Native.dll.h"
    "TaleWorlds.Native/TaleWorlds.Native.dll.c"
)

# 对每个文件进行替换
for file in "${files[@]}"; do
    if [ -f "$file" ]; then
        echo "处理文件: $file"
        # 替换函数名
        sed -i 's/FUN_180055f70/EmergencySystemExitHandler/g' "$file"
        echo "已替换 $file 中的FUN_180055f70"
    else
        echo "警告: 文件 $file 不存在"
    fi
done

echo "替换完成!"

# 验证替换结果
echo "验证替换结果..."
grep -n "EmergencySystemExitHandler" "${files[@]}" 2>/dev/null || echo "未找到EmergencySystemExitHandler"

# 检查是否还有未替换的FUN_180055f70
echo "检查未替换的FUN_180055f70..."
remaining=$(grep -n "FUN_180055f70" "${files[@]}" 2>/dev/null)
if [ -n "$remaining" ]; then
    echo "警告: 仍有未替换的FUN_180055f70:"
    echo "$remaining"
else
    echo "所有FUN_180055f70已成功替换"
fi