#!/bin/bash

# 美化03_rendering.c文件中的undefined类型
# 将undefined1, undefined2, undefined4, undefined8替换为具体的数据类型

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_temp.c"

# 创建临时文件并替换undefined类型
sed -e 's/\bundefined1\b/uint8_t/g' \
    -e 's/\bundefined2\b/uint16_t/g' \
    -e 's/\bundefined4\b/uint32_t/g' \
    -e 's/\bundefined8\b/uint64_t/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "完成undefined类型美化"