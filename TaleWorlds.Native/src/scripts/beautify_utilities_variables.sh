#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 这个脚本会将逆向工程生成的变量名替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义变量名替换映射
declare -A VARIABLE_REPLACEMENTS=(
    ["ValidationContextParam"]="ValidationParameter"
    ["StackBufferData"]="StackBufferPointer"
    ["CurrentValue"]="CurrentFloatValue"
    ["ParameterRegister"]="ParameterRegisterValue"
    ["ValidationRegister"]="ValidationRegisterValue"
    ["InputRegisterHigh"]="InputRegisterHighValue"
    ["InputRegisterLow"]="InputRegisterLowValue"
    ["RangeMinValue"]="MinimumRangeValue"
    ["SecondaryFloatValue"]="SecondaryFloatResult"
    ["CalculatedFloatResult"]="CalculatedFloatOutput"
    ["InputValue"]="InputFloatValue"
    ["ResourcePointer"]="ResourceDataPointer"
    ["FloatPointer"]="FloatDataPointer"
)

# 执行替换
for old_name in "${!VARIABLE_REPLACEMENTS[@]}"; do
    new_name="${VARIABLE_REPLACEMENTS[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    echo "替换变量名: $old_name -> $new_name"
done

echo "变量名美化完成"

# 清理备份文件
rm -f "$FILE_PATH.backup"