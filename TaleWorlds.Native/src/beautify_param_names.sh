#!/bin/bash

# 美化01_initialization.c文件中的param_参数名
# 这个脚本将param_开头的参数名替换为有意义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份文件
cp "$FILE_PATH" "$FILE_PATH.param_backup"

# 替换常见的param_参数名
# 在函数声明和文档中的参数名
sed -i 's/param_1/systemResourcePointer/g' "$FILE_PATH"
sed -i 's/param_2/dataPointer/g' "$FILE_PATH"
sed -i 's/param_3/dataSize/g' "$FILE_PATH"
sed -i 's/param_4/operationFlags/g' "$FILE_PATH"
sed -i 's/param_5/additionalParam/g' "$FILE_PATH"

# 在函数调用中的参数名
sed -i 's/param_2/sourceData/g' "$FILE_PATH"
sed -i 's/param_3/bufferSize/g' "$FILE_PATH"
sed -i 's/param_4/memoryFlags/g' "$FILE_PATH"

# 特定上下文中的参数名
sed -i 's/param_2/cleanupFlag/g' "$FILE_PATH"
sed -i 's/param_3/cleanupParam/g' "$FILE_PATH"
sed -i 's/param_4/reservedParam/g' "$FILE_PATH"

echo "param_参数名美化完成"