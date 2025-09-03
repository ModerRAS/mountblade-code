#!/bin/bash

# 变量名替换脚本
# 为 99_unmatched_functions.c 文件中的变量提供更有意义的名称

# 定义要替换的变量映射
declare -A variable_map=(
    ["plStack_30"]="xmlStreamContext"
    ["plStack_50"]="memoryAllocationContext"
    ["plStack_58"]="systemMemoryContext"
    ["plStack_228"]="stringProcessingContext"
    ["plStack_220"]="resourceManagementContext"
    ["plStack_210"]="dataStructureContext"
    ["plStack_208"]="bufferHandlerContext"
    ["plStack_200"]="systemOperationContext"
    ["plStack_1f8"]="processExecutionContext"
    ["plStack_368"]="xmlProcessingContext"
    ["plStack_338"]="memoryPoolContext"
    ["temporaryStringBuffer"]="tempStringBuffer"
    ["temporaryStringBufferData"]="tempStringBufferData"
)

# 遍历所有变量映射进行替换
for old_var in "${!variable_map[@]}"; do
    new_var="${variable_map[$old_var]}"
    echo "替换变量: $old_var -> $new_var"
    
    # 使用 sed 进行替换
    sed -i "s/$old_var/$new_var/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
done

echo "变量替换完成"