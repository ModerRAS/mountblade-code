#!/bin/bash
# 美化06_utilities.c文件的变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE="/tmp/06_utilities_beautified.c"

# 使用sed进行变量替换
sed -e 's/\bResourceIndex\b/ResourcePosition/g' \
    -e 's/\boperationStatusCode\b/OperationStatus/g' \
    -e 's/\bOperationResult\b/ProcessingResult/g' \
    -e 's/\bCleanupOption\b/CleanupParameter/g' \
    -e 's/\bStringProcessingTemplate\b/StringTemplate/g' \
    -e 's/\bSystemStringBufferA\b/SystemBufferA/g' \
    -e 's/\bSystemStringBufferB\b/SystemBufferB/g' \
    -e 's/\bSystemStringBufferC\b/SystemBufferC/g' \
    -e 's/\bProcessingResult\b/ResourceStatus/g' \
    -e 's/\bint ProcessingResult;/int ResourcePosition;/g' \
    "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "变量美化完成"