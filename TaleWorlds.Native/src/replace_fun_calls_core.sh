#!/bin/bash

# Script to replace FUN_ function calls with semantic names in 02_core_engine.c

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# Define replacement patterns
declare -A replacements=(
    ["FUN_180123c00"]="CalculateSystemFloatValue"
    ["FUN_1801293e0"]="ProcessSystemData"
    ["FUN_18011fcd0"]="ExecuteSystemFloatOperation"
    ["FUN_1801295b0"]="ProcessSystemContext"
    ["FUN_180131aa0"]="AllocateSystemFloatArray"
    ["FUN_180291500"]="ManageSystemResource"
    ["FUN_180291a50"]="CleanupSystemContext"
    ["FUN_18012ea90"]="GetSystemDataPointer2"
    ["FUN_18010e610"]="ManageSystemMemory"
    ["FUN_18004ba20"]="ValidateSystemDataStructure"
    ["FUN_180127c60"]="ProcessSystemConfigurationAndParameters"
    ["FUN_18011fbf0"]="ProcessSystemDataStructure"
    ["FUN_18013e9f0"]="ProcessSystemMemoryAndData"
    ["FUN_18010e5a0"]="ProcessSystemMemoryAndValidation"
    ["FUN_180122890"]="ProcessSystemConfigurationAndValidation"
    ["FUN_1801231cf"]="ProcessUtf8ToUtf16CharacterEncoding"
    ["FUN_1801231dc"]="ProcessUtf8ToUtf16CharacterEncodingVariant"
    ["FUN_180123960"]="ProcessUtf8ToUtf16LongCharacterEncoding"
    ["FUN_180123a60"]="ProcessUtf8ToUtf16PointerCharacterEncoding"
    ["FUN_180123bc0"]="ProcessUtf8ToUtf16ExtendedCharacterEncoding"
    ["FUN_1801251b1"]="ProcessCharacterCodeDataConversion"
    ["FUN_180203aa0"]="FindAndValidateStringProcessingNode"
    ["FUN_180203abc"]="ProcessStringEncodingConversion"
    ["FUN_180203ba0"]="ExecuteSystemContextProcessing"
    ["FUN_18012524a"]="ProcessFloatingPointCharacterCode"
    ["FUN_18012533c"]="ProcessLongIntegerCharacterEncoding"
    ["FUN_180126380"]="ProcessCharacterStringEncoding"
    ["FUN_180126b00"]="ProcessIntegerCharacterCodePointer"
    ["FUN_180126b5b"]="ExecuteSystemFinalValidation"
)

# Apply replacements
for pattern in "${!replacements[@]}"; do
    replacement="${replacements[$pattern]}"
    sed -i "s/$pattern/$replacement/g" 02_core_engine.c
done

echo "FUN_ function replacements completed"