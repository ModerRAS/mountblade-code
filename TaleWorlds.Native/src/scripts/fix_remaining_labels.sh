#!/bin/bash

# 处理networking.c文件中剩余的LabelLocation标签

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

echo "正在处理文件: $FILE_PATH"

# 使用sed命令替换LabelLocation标签
sed -i 's/LabelLocation180847c35/NetworkDataProcessingExit/g' "$FILE_PATH"
sed -i 's/LabelLocation180847bfb/NetworkValidationFlagSet/g' "$FILE_PATH"

echo "标签替换完成"

# 验证替换结果
echo "验证替换结果:"
grep -n "LabelLocation" "$FILE_PATH" || echo "没有找到剩余的LabelLocation标签"
grep -n "NetworkDataProcessingExit\|NetworkValidationFlagSet" "$FILE_PATH" | head -5