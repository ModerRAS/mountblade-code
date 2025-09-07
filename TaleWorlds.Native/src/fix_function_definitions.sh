#!/bin/bash

# 修复函数定义格式的脚本
# 专门用于修复02_core_engine.c文件中的函数定义格式问题

echo "开始修复02_core_engine.c文件中的函数定义格式..."

# 读取文件内容
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理文件，修复函数定义格式问题
sed -n '1,20000p' "$FILE_PATH" > "$TEMP_FILE"

# 从20000行开始处理，修复函数定义格式问题
sed -n '20000,$p' "$FILE_PATH" | sed '
# 修复第一个函数定义格式问题
s/^ void CoreEngineMemoryConfigure(uint64_t CharacterCode,uint32_t Utf8BufferSize\(\*\/$/\/**\n * @brief 配置核心引擎内存管理器\n * \n * 该函数负责配置核心引擎的内存管理系统\n * 包括内存上下文设置、线程状态检查和数据模板配置\n *\/\nvoid CoreEngineMemoryConfigure(uint64_t MemoryConfigHandle,uint32_t MemoryConfigParam)/
# 删除重复的函数声明
/^void CoreEngineMemoryConfigure(uint64_t MemoryConfigHandle,uint32_t MemoryConfigParam$/d
' >> "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "函数定义格式修复完成"