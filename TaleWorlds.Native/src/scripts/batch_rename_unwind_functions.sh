#!/bin/bash

# 批量重命名Unwind函数的脚本
# 用于处理06_utilities.c文件中的Unwind函数

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE="/tmp/utilities_temp.c"

# 使用sed进行批量替换
sed -e 's/void Unwind_180903a90(/void CleanupSystemResourceHandlerA90(/g' \
    -e 's/void Unwind_180903ab0(/void CleanupSystemResourceHandlerAB0(/g' \
    -e 's/void Unwind_180903ac0(/void ValidateResourceContextAC0(/g' \
    -e 's/void Unwind_180903ad0(/void ValidateResourceContextAD0(/g' \
    -e 's/void Unwind_180903ae0(/void CleanupSystemResourceHandlerAE0(/g' \
    -e 's/void Unwind_180903af0(/void CleanupSystemResourceHandlerAF0(/g' \
    -e 's/void Unwind_180903b00(/void CleanupSystemResourceHandlerB00(/g' \
    -e 's/void Unwind_180903b20(/void CleanupSystemResourceHandlerB20(/g' \
    -e 's/void Unwind_180903b40(/void CleanupSystemResourceHandlerB40(/g' \
    -e 's/void Unwind_180903b60(/void CleanupSystemResourceHandlerB60(/g' \
    -e 's/void Unwind_180903b80(/void CleanupSystemResourceHandlerB80(/g' \
    -e 's/void Unwind_180903ba0(/void CleanupSystemResourceHandlerBA0(/g' \
    -e 's/void Unwind_180903bc0(/void CleanupSystemResourceHandlerBC0(/g' \
    -e 's/void Unwind_180903be0(/void CleanupSystemResourceHandlerBE0(/g' \
    -e 's/void Unwind_180903c00(/void CleanupSystemResourceHandlerC00(/g' \
    -e 's/void Unwind_180903c20(/void CleanupSystemResourceHandlerC20(/g' \
    -e 's/void Unwind_180903c40(/void CleanupSystemResourceHandlerC40(/g' \
    -e 's/void Unwind_180903c60(/void CleanupSystemResourceHandlerC60(/g' \
    -e 's/void Unwind_180903c80(/void CleanupSystemResourceHandlerC80(/g' \
    -e 's/void Unwind_180903ca0(/void CleanupSystemResourceHandlerCA0(/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "Unwind函数重命名完成"