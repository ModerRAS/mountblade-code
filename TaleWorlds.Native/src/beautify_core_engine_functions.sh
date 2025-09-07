#!/bin/bash

# 批量替换02_core_engine.c中的FUN_函数调用
# 这个脚本用于美化函数名，将Ghidra生成的FUN_函数名替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 02_core_engine.c 02_core_engine.c.backup

# 定义替换规则
declare -A replacements=(
    ["FUN_18010e7f0"]="ProcessSystemFloatData"
    ["FUN_18010e7a0"]="ValidateSystemData"
    ["FUN_18010e760"]="GetSystemFloatValue"
    ["FUN_18010e4e0"]="ProcessSystemMemoryAllocation"
    ["FUN_1801293c0"]="CalculateSystemFloatValue"
    ["FUN_18012f6d0"]="GetSystemDataPointer"
    ["FUN_180129830"]="ProcessSystemDataTransfer"
    ["FUN_18011fcd0"]="HandleSystemDataProcessing"
    ["FUN_18011fc80"]="ProcessSystemDataValidation"
    ["FUN_180131aa0"]="AllocateSystemFloatArray"
    ["FUN_180293730"]="ValidateSystemBuffer"
    ["FUN_1801296e0"]="ProcessSystemStringEncoding"
    ["FUN_180110000"]="ProcessCharacterConversion"
    ["FUN_180131810"]="ProcessSystemResourceAllocation"
    ["FUN_18012fae0"]="GetSystemMemoryHandle"
    ["FUN_18013e200"]="InitializeSystemComponent"
    ["FUN_18013e340"]="ConfigureSystemSettings"
    ["FUN_18013e2f0"]="SetupSystemParameters"
    ["FUN_18013db40"]="ValidateSystemConfiguration"
    ["FUN_18011a9d0"]="ProcessSystemOperations"
    ["FUN_18011d940"]="HandleSystemSynchronization"
)

# 执行替换
for fun_name in "${!replacements[@]}"; do
    semantic_name="${replacements[$fun_name]}"
    echo "替换 $fun_name -> $semantic_name"
    
    # 使用sed进行替换，只替换函数调用（不替换定义）
    sed -i "s/$fun_name(/$semantic_name(/g" 02_core_engine.c
done

echo "替换完成"

# 统计替换结果
echo "剩余FUN_函数调用数量："
grep -o "FUN_180[0-9a-f]*(" 02_core_engine.c | wc -l