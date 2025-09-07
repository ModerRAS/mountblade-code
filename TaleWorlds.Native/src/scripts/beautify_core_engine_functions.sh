#!/bin/bash

# 美化02_core_engine.c中的FUN_函数
# 这个脚本将批量替换文件中的FUN_函数名为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义函数替换规则
declare -A function_replacements

# 添加更多的函数替换规则
function_replacements["FUN_18010e720"]="GetSystemFloatArray"
function_replacements["FUN_180123c00"]="CalculateSystemFloatValue"
function_replacements["FUN_180128fd0"]="ProcessSystemMemoryOffset"
function_replacements["FUN_180120c80"]="ProcessSystemStatusCode"
function_replacements["FUN_18012f6d0"]="GetSystemDataPointer"
function_replacements["FUN_1801348d8"]="ProcessSystemFloatFilterAndValidation"
function_replacements["FUN_1801348ee"]="ProcessSystemContextAndIteration"
function_replacements["FUN_180134b4f"]="ProcessCharacterEncodingAndMemoryManagement"
function_replacements["FUN_180134c48"]="ProcessSystemStatusBuffer"
function_replacements["FUN_180134c57"]="ProcessSystemCharacterAndStatusManagement"
function_replacements["FUN_1801293e0"]="ProcessSystemData"
function_replacements["FUN_18011fcd0"]="ExecuteSystemFloatOperation"
function_replacements["FUN_1801295b0"]="ProcessSystemContext"
function_replacements["FUN_18016e450"]="ValidateAndProcessUtf8Encoding"
function_replacements["FUN_18016e630"]="ConvertUtf8ToUtf16Character"
function_replacements["FUN_18016e6a0"]="ProcessUtf8EncodingBuffer"
function_replacements["FUN_18016e850"]="ConvertUtf8CharacterEncoding"
function_replacements["FUN_18016e940"]="ValidateUtf8EncodingData"
function_replacements["FUN_18016e530"]="ProcessUtf8CharacterEncodingState"
function_replacements["FUN_18016e5b0"]="ProcessUtf8CharacterEncodingConversion"
function_replacements["FUN_180167a50"]="InitializeUtf16CharacterProcessing"
function_replacements["FUN_18013de90"]="InitializeBufferStatus"
function_replacements["FUN_1801359f0"]="ProcessCharacterTable"
function_replacements["FUN_18013b0f0"]="ProcessMemoryAddressMask"
function_replacements["FUN_18013ce40"]="ExecuteSystemCleanup"
function_replacements["FUN_180134480"]="GetMemoryAllocationInfo"
function_replacements["FUN_180291500"]="ManageSystemResource"
function_replacements["FUN_180124d50"]="CalculateSystemFloatDivision"
function_replacements["FUN_18011fd10"]="ProcessSystemBufferDataEx"
function_replacements["FUN_180291a50"]="CleanupSystemContext"
function_replacements["FUN_18012ea90"]="GetSystemDataPointer2"
function_replacements["FUN_18010e610"]="ManageSystemMemory"
function_replacements["FUN_1801333d0"]="CalculateCharacterCodeFloatValue"
function_replacements["FUN_180131750"]="ValidateSystemStatus"
function_replacements["FUN_18004ba20"]="ValidateSystemDataStructure"
function_replacements["FUN_180127c60"]="ProcessSystemConfigurationAndParameters"
function_replacements["FUN_180127ca0"]="ProcessSystemDataStructure"
function_replacements["FUN_180181d80"]="CalculateCharacterEncodingFloatValue"

# 执行替换
for old_name in "${!function_replacements[@]}"; do
    new_name="${function_replacements[$old_name]}"
    
    # 替换函数定义
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    
    echo "已替换: $old_name -> $new_name"
done

echo "函数美化完成！"

# 验证替换结果
echo "验证替换结果..."
grep -n "FUN_180" "$FILE_PATH" | head -5

if [ $? -eq 1 ]; then
    echo "所有FUN_函数已成功替换！"
else
    echo "还有未替换的FUN_函数，请检查。"
fi