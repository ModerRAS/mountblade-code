#!/bin/bash

# 02_core_engine.c文件函数名语义化美化脚本
# 用于批量替换数字后缀的函数名为语义化名称

echo "开始美化02_core_engine.c文件中的函数名..."

# 定义函数名替换映射
declare -A function_replacements

# DebugEngineFunction系列函数
function_replacements["DebugEngineFunction1(uint64_t engine_context_data,longlong memoryConfig)"]="DebugNetworkOperationResultHandler(uint64_t engine_context_data,longlong memoryConfig)"
function_replacements["DebugEngineFunction1(longlong engine_context_data,longlong memoryConfig)"]="DebugNetworkOperationProcessor(longlong engine_context_data,longlong memoryConfig)"
function_replacements["DebugEngineFunction1(void)"]="DebugEngineBasicOperation(void)"
function_replacements["DebugEngineFunction5(uint64_t engine_context_data,longlong memoryConfig)"]="DebugNetworkDataProcessor(uint64_t engine_context_data,longlong memoryConfig)"
function_replacements["DebugEngineFunction5(void)"]="DebugEngineDataValidator(void)"
function_replacements["DebugEngineFunction5(uint64_t engine_context_data,float *memoryConfig)"]="DebugNetworkFloatProcessor(uint64_t engine_context_data,float *memoryConfig)"
function_replacements["DebugEngineFunction2(void)"]="DebugEngineStateChecker(void)"
function_replacements["DebugEngineFunction7(longlong engine_context_data)"]="DebugEngineMemoryAnalyzer(longlong engine_context_data)"
function_replacements["DebugEngineFunction2(void)"]="DebugEnginePerformanceMonitor(void)"

# 创建临时文件
temp_file="/tmp/core_engine_temp.c"
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c" "$temp_file"

# 执行替换
for old_func in "${!function_replacements[@]}"; do
    new_func="${function_replacements[$old_func]}"
    echo "替换: $old_func -> $new_func"
    sed -i "s/^void $old_func/void $new_func/g" "$temp_file"
done

# 备份原文件
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup"

# 替换原文件
mv "$temp_file" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

echo "函数名美化完成！"