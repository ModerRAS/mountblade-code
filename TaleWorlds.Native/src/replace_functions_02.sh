#!/bin/bash

# 批量替换02_core_engine.c中的FUN_函数调用
# 注意：这个脚本只用于美化函数名，不修改程序逻辑

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义已知的函数映射
declare -A function_map=(
    # 系统缓冲区操作函数
    ["FUN_18020d310"]="ProcessSystemBufferValidation"
    ["FUN_1802f5440"]="InitializeSystemMemoryPool"
    ["FUN_1802f1890"]="ConfigureMemoryPoolAllocation"
    ["FUN_1802f1930"]="ProcessMemoryBlockValidation"
    ["FUN_1803bb5f0"]="ConfigureStringProcessingParameters"
    ["FUN_1803ba550"]="ProcessSystemBufferOperation"
    ["FUN_180060fc0"]="ValidateSystemContextConfiguration"
    ["FUN_180623fd0"]="HandleSystemEventProcessing"
    ["FUN_18020ee40"]="GetSystemOperationStatus"
    ["FUN_18005ee30"]="ConvertSystemDataWithParameters"
    ["FUN_18020f620"]="ProcessSystemDataOperation"
    ["FUN_180217b00"]="InitializeUtf8Conversion"
    ["FUN_180218920"]="ValidateUnicodeConversion"
    ["FUN_180219260"]="FinalizeUnicodeConversion"
    ["FUN_180218a80"]="ResetSystemConversionState"
    ["FUN_180219020"]="ProcessSystemContextData"
    ["FUN_18021a140"]="GetMemoryBlockIndex"
    ["FUN_1801566b0"]="InitializeSystemProcessing"
    ["FUN_1802121b0"]="CleanupSystemProcessing"
    ["FUN_18020dc20"]="ProcessSystemCharacterBuffer"
    ["FUN_18020ddf0"]="InitializeSystemDataTransfer"
    ["FUN_18020e3b0"]="ValidateSystemContextHandle"
    ["FUN_18020e3d0"]="ProcessSystemContextResources"
    ["FUN_18020e8e0"]="TransferSystemContextData"
    ["FUN_18020e9b0"]="ProcessSystemContextAndData"
    ["FUN_18020f790"]="ConvertSystemStringEncoding"
    ["FUN_18020f7d0"]="ValidateSystemMemoryContext"
    ["FUN_18020f870"]="ProcessSystemCharacterValidation"
    ["FUN_18020f8a0"]="ProcessSystemStringEncoding"
    ["FUN_18020f8d0"]="HandleSystemContextOperations"
    ["FUN_180211520"]="ProcessSystemDataAndContext"
    ["FUN_180211720"]="InitializeSystemResourceAllocation"
    ["FUN_180211f70"]="ConfigureSystemOperationParameters"
    ["FUN_1802122c0"]="ValidateSystemResourceHandle"
    ["FUN_1802122e0"]="ProcessSystemResourceAllocation"
    ["FUN_180212de0"]="HandleSystemMemoryOperations"
    ["FUN_180212e00"]="ProcessSystemMemoryValidation"
    ["FUN_180212e20"]="FinalizeSystemMemoryOperations"
    ["FUN_180215ea0"]="ValidateSystemDataTransfer"
    ["FUN_180216508"]="TransferSystemMemoryData"
    ["FUN_180216522"]="ProcessSystemMemoryTransfer"
    ["FUN_1802165a5"]="SystemNullOperationVoid"
    ["FUN_1802165b4"]="SystemDebugOperation"
    ["FUN_1802165c0"]="ProcessSystemFloatData"
    ["FUN_180216650"]="ValidateSystemFloatData"
    ["FUN_1802166e0"]="ProcessSystemDoubleData"
    ["FUN_180216770"]="ValidateSystemDoubleData"
    ["FUN_180216800"]="HandleSystemMemoryRelease"
    ["FUN_180216860"]="ProcessSystemMemoryAndContext"
    ["FUN_180216c00"]="InitializeSystemCalculation"
    ["FUN_180216c12"]="ValidateSystemCalculation"
    ["FUN_180216c40"]="SystemIdleOperation"
    ["FUN_180216c80"]="ProcessSystemCalculationAndData"
)

# 临时文件
temp_file="temp_02_core_engine.c"

# 复制原文件
cp 02_core_engine.c "$temp_file"

# 执行替换
for fun_name in "${!function_map[@]}"; do
    semantic_name="${function_map[$fun_name]}"
    
    # 使用sed替换函数调用
    sed -i "s/\b$fun_name\b/$semantic_name/g" "$temp_file"
    
    echo "替换: $fun_name -> $semantic_name"
done

# 替换完成后，检查替换结果
echo "替换完成，正在检查结果..."

# 统计替换结果
remaining_funs=$(grep -c "FUN_180[0-9a-f]" "$temp_file" 2>/dev/null || echo "0")
echo "剩余未替换的FUN_函数数量: $remaining_funs"

# 如果替换成功，替换原文件
if [ $remaining_funs -eq 0 ]; then
    mv "$temp_file" "02_core_engine.c"
    echo "所有FUN_函数替换完成！"
else
    echo "还有 $remaining_funs 个FUN_函数未替换，请检查..."
    # 显示前10个未替换的函数
    echo "前10个未替换的函数:"
    grep -o "FUN_180[0-9a-f]*" "$temp_file" | head -10
    rm "$temp_file"
fi