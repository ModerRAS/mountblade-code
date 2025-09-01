#!/bin/bash

# 批量重命名Unwind函数的脚本
# 用于美化06_utilities.c文件中的函数名

# 定义源文件
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 函数重命名映射
declare -A FUNCTION_MAP=(
    ["Unwind_180902080"]="SetSystemDataStructurePointer"
    ["Unwind_180902090"]="ReleasePrimarySystemResource"
    ["Unwind_1809020c0"]="ReleaseSecondarySystemResource"
    ["Unwind_1809020f0"]="ExecuteCriticalSectionUnlockAndEventHandling"
    ["Unwind_180902100"]="ExecuteSystemUnwindFlagResetAndEventHandling"
    ["Unwind_180902110"]="ExecuteCallbackFunction"
    ["Unwind_180902120"]="ExecuteSecondaryCallbackFunction"
    ["Unwind_180902130"]="ExecuteTertiaryCallbackFunction"
    ["Unwind_180902140"]="SetSecondarySystemDataStructurePointer"
)

# 变量重命名映射
declare -A VARIABLE_MAP=(
    ["bVar1"]="encryptionKeyByte"
    ["pcVar1"]="callbackFunctionPointer"
)

# 备份原始文件
cp "$SOURCE_FILE" "$SOURCE_FILE.backup"

# 执行函数重命名
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    echo "重命名函数: $old_name -> $new_name"
    sed -i "s/void $old_name(/void $new_name(/g" "$SOURCE_FILE"
done

# 执行变量重命名
for old_var in "${!VARIABLE_MAP[@]}"; do
    new_var="${VARIABLE_MAP[$old_var]}"
    echo "重命名变量: $old_var -> $new_var"
    sed -i "s/ $old_var,/ $new_var,/g" "$SOURCE_FILE"
    sed -i "s/ $old_var;/ $new_var;/g" "$SOURCE_FILE"
    sed -i "s/($old_var)/($new_var)/g" "$SOURCE_FILE"
done

echo "函数重命名完成"