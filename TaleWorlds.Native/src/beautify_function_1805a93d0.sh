#!/bin/bash

# 美化FUN_1805a93d0函数的脚本

# 读取文件内容
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed进行替换
sed -i 's|void FUN_1805a93d0|void ProcessSystemBufferDataAndValidation|g' "$FILE_PATH"
sed -i 's|float ComparisonResult1;|float DistanceX;|g' "$FILE_PATH"
sed -i 's|float ComparisonResult2;|float DistanceY;|g' "$FILE_PATH"
sed -i 's|byte bVar3;|byte EntryCount;|g' "$FILE_PATH"
sed -i 's|char cVar5;|char ValidationStatus;|g' "$FILE_PATH"
sed -i 's|longlong LeftChildIndex;|longlong SearchIndex;|g' "$FILE_PATH"
sed -i 's|float fVar8;|float CalculatedDistance;|g' "$FILE_PATH"
sed -i 's|float fVar9;|float RadiusSquared;|g' "$FILE_PATH"
sed -i 's|float MaxBoundX0;|float MinBoundX;|g' "$FILE_PATH"
sed -i 's|SystemDataDword uStackX_8;|SystemDataDword ParameterX;|g' "$FILE_PATH"
sed -i 's|SystemDataDword uStackX_c;|SystemDataDword ParameterY;|g' "$FILE_PATH"

# 替换参数名
sed -i 's|param_6|ParameterBuffer6|g' "$FILE_PATH"
sed -i 's|param_7|ParameterBuffer7|g' "$FILE_PATH"
sed -i 's|param_8|Parameter8|g' "$FILE_PATH"

echo "函数美化完成"