#!/bin/bash

# 删除文件头部的冗余注释脚本
# 简化实现：删除文件头部的冗余注释，保持必要的常量定义和注释

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
TEMP_FILE="/tmp/engine_cleanup_$$.c"

# 复制文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 删除重复的注释行
sed -i '/^\/\* 核心引擎系统状态管理 \*/,/^\/\* 引擎处理器指针 \*/d' "$TEMP_FILE"

# 删除孤立的注释行
sed -i '/^\/\* 引擎系统状态标志 \*\/$/d' "$TEMP_FILE"
sed -i '/^\/\* 引擎配置数据指针 \*\/$/d' "$TEMP_FILE"
sed -i '/^\/\* 引擎运行时上下文 \*\/$/d' "$TEMP_FILE"
sed -i '/^\/\* 引擎内存管理器 \*\/$/d' "$TEMP_FILE"
sed -i '/^\/\* 引擎线程管理器 \*\/$/d' "$TEMP_FILE"
sed -i '/^\/\* 引擎资源管理器 \*\/$/d' "$TEMP_FILE"

# 删除多余的空行
sed -i '/^$/N;/^\n$/d' "$TEMP_FILE"

# 复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f "$TEMP_FILE"

echo "文件头部注释清理完成"