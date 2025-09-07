#!/bin/bash

# 材质属性格式映射表美化脚本
# 用于替换03_rendering.c中的UNK_18099128*变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup.$(date +%s)"

# 材质属性格式映射表变量替换
# 这些变量用于确定材质属性的格式（. 或 X）
sed -i 's/UNK_180991280/MaterialPropertyFormatMap0/g' "$FILE_PATH"
sed -i 's/UNK_180991281/MaterialPropertyFormatMap1/g' "$FILE_PATH"
sed -i 's/UNK_180991282/MaterialPropertyFormatMap2/g' "$FILE_PATH"
sed -i 's/UNK_180991283/MaterialPropertyFormatMap3/g' "$FILE_PATH"
sed -i 's/UNK_180991284/MaterialPropertyFormatMap4/g' "$FILE_PATH"
sed -i 's/UNK_180991285/MaterialPropertyFormatMap5/g' "$FILE_PATH"
sed -i 's/UNK_180991286/MaterialPropertyFormatMap6/g' "$FILE_PATH"
sed -i 's/UNK_180991287/MaterialPropertyFormatMap7/g' "$FILE_PATH"
sed -i 's/UNK_180991288/MaterialPropertyFormatMap8/g' "$FILE_PATH"
sed -i 's/UNK_180991289/MaterialPropertyFormatMap9/g' "$FILE_PATH"
sed -i 's/UNK_18099128a/MaterialPropertyFormatMap10/g' "$FILE_PATH"
sed -i 's/UNK_18099128b/MaterialPropertyFormatMap11/g' "$FILE_PATH"

echo "材质属性格式映射表变量美化完成"