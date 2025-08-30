#!/bin/bash

# 清理05_networking.c文件中的重复宏定义
# 这是简化实现，主要处理网络系统中重复宏定义的清理工作

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking_temp.c"

# 查找并删除重复的宏定义
# 原本实现：完全重构宏定义体系，建立统一的命名规则
# 简化实现：仅删除明显重复的宏定义，保持原有结构

# 删除自引用的宏定义（如 #define A A）
sed -i '/^#define [A-Z_]* [A-Z_]*$/{
    /^#define [A-Z_]* [A-Z_]*$/{
        s/^#define \([A-Z_]*\) \([A-Z_]*\)$/#define \1 \2/
        t
        d
    }
}' "$INPUT_FILE"

# 删除重复的宏定义（保留第一次出现的）
awk '
/^#define [A-Z_]/ {
    key = $0
    if (seen[key]) {
        next
    }
    seen[key] = 1
}
{ print }
' "$INPUT_FILE" > "$TEMP_FILE"

mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络系统重复宏定义清理完成"