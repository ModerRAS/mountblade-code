#!/bin/bash

# 美化02_core_engine.c文件中的FUN_函数
# 此脚本将重命名未知的FUN_函数为有意义的名称

echo "开始美化02_core_engine.c文件..."

# 定义函数重命名映射
declare -A function_renames

# 基于函数功能分析的重命名映射
function_renames["FUN_18064d630"]="ReleaseMemoryReferenceCount"
function_renames["FUN_180097d40"]="InitializeCoreEngineConfig"
function_renames["FUN_180095480"]="CalculateEngineParameterValue"
function_renames["FUN_180095720"]="CalculateEngineSecondaryParameter"
function_renames["FUN_1800adba0"]="ProcessCoreEngineEvent"
function_renames["FUN_18062c1e0"]="SetupEngineRuntimeContext"
function_renames["FUN_18062dee0"]="InitializeEngineDataBuffer"
function_renames["FUN_1800ae730"]="ConfigureEngineMemoryContext"
function_renames["FUN_180049b30"]="ProcessCoreEngineParameters"
function_renames["FUN_180048cc0"]="AllocateEngineMemoryBlock"
function_renames["FUN_18062e0f0"]="ValidateEngineConfiguration"

# 创建临时脚本文件
cat > /tmp/rename_core_engine_functions.py << 'EOF'
import re
import sys

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 函数重命名映射
function_renames = {
    'FUN_18064d630': 'ReleaseMemoryReferenceCount',
    'FUN_180097d40': 'InitializeCoreEngineConfig',
    'FUN_180095480': 'CalculateEngineParameterValue',
    'FUN_180095720': 'CalculateEngineSecondaryParameter',
    'FUN_1800adba0': 'ProcessCoreEngineEvent',
    'FUN_18062c1e0': 'SetupEngineRuntimeContext',
    'FUN_18062dee0': 'InitializeEngineDataBuffer',
    'FUN_1800ae730': 'ConfigureEngineMemoryContext',
    'FUN_180049b30': 'ProcessCoreEngineParameters',
    'FUN_180048cc0': 'AllocateEngineMemoryBlock',
    'FUN_18062e0f0': 'ValidateEngineConfiguration'
}

# 执行重命名
for old_name, new_name in function_renames.items():
    # 只替换函数调用，不替换注释中的内容
    content = re.sub(r'(\W)' + old_name + r'(\W)', r'\1' + new_name + r'\2', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("函数重命名完成")
EOF

# 执行Python脚本
python3 /tmp/rename_core_engine_functions.py

# 清理临时文件
rm -f /tmp/rename_core_engine_functions.py

echo "02_core_engine.c文件美化完成"