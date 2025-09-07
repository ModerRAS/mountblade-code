#!/bin/bash

# 美化04_ui_system.c文件中的变量名
# 将Ghidra生成的变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/04_ui_system_temp.c"

# 创建备份
cp "$INPUT_FILE" "${INPUT_FILE}.backup"

# 变量名替换映射
declare -A VAR_MAPPING=(
    # 字符指针变量
    ["pcVar2"]="threadLocalStorageFlag"
    ["pcVar4"]="systemInstructionPointer"
    ["pcStack_48"]="eventTypeNamePtr"
    
    # 长整型变量
    ["lVar2"]="componentIndex"
    ["lVar3"]="stringCompareIndex"
    ["lVar4"]="loopCounter"
    ["lVar5"]="eventLength"
    ["lVar6"]="contextData"
    ["lVar23"]="memoryOffset"
    
    # 无符号长整型变量
    ["uVar3"]="eventData1"
    ["uVar4"]="eventData2"
    ["uVar5"]="eventData3"
    ["uVar6"]="eventData4"
    ["uVar7"]="eventData5"
    ["uVar8"]="eventData6"
    ["uVar9"]="eventData7"
    ["uVar7"]="eventTypeCode"
    
    # 整型变量
    ["iVar3"]="compareResult"
    ["iVar5"]="allocationSize"
    ["iVar9"]="bufferSize"
    
    # 布尔变量
    ["bVar1"]="isCharacterMatch"
    ["bVar2"]="isValidationSuccess"
    ["bVar8"]="isEventMatch"
    
    # 无类型指针变量
    ["puVar3"]="resourceManagerPtr"
    ["puVar5"]="componentContextPtr"
    ["puVar6"]="eventTypePtr"
    ["puVar7"]="bufferPtr"
    ["puVar8"]="targetBufferPtr"
    ["puVar9"]="sourceBufferPtr"
    
    # 字节指针变量
    ["pbVar2"]="resourceDataPtr"
    ["pbVar3"]="stringDataPtr"
    ["pbVar5"]="characterDataPtr"
    ["pbVar8"]="resourceHandlePtr"
    ["pbVar9"]="resourceNextPtr"
    ["pbVar11"]="resourceCurrentPtr"
    ["pbVar18"]="resourceComparePtr"
    ["pbVar19"]="resourceSearchPtr"
    
    # 长整型指针变量
    ["plVar4"]="componentContextPtr"
    ["plVar7"]="colorBufferPtr"
    ["plVar8"]="resourceListPtr"
    
    # 函数结果变量
    ["functionResult0"]="memoryAllocationResult"
    ["functionResult1"]="dataCopyResult"
    ["functionResult2"]="componentConfigResult"
    ["functionResult3"]="dataValidationResult"
    ["functionResult4"]="bufferOperationResult"
    ["functionResult5"]="eventProcessResult"
    ["functionResult6"]="resourceHandleResult"
    ["functionResult7"]="contextUpdateResult"
    
    # 操作结果变量
    ["operationResult2"]="stringCompareResult"
    ["operationResult4"]="eventProcessResult"
    ["operationResult5"]="memoryAllocationResult"
    ["operationResult8"]="dataValidationResult"
    ["operationResult9"]="bufferCopyResult"
    
    # 验证结果变量
    ["validationResult0"]="dataValidationResult1"
    ["validationResult1"]="dataValidationResult2"
    ["validationResult2"]="dataValidationResult3"
    ["validationResult3"]="dataValidationResult4"
    
    # 信号量变量
    ["semaphoreHandle"]="threadSyncHandle"
    ["semaphoreHandle0"]="primarySyncHandle"
    ["semaphoreHandle2"]="secondarySyncHandle"
    
    # UI相关变量
    ["colorBufferPointer1"]="uiColorBufferPtr"
    ["pallocatedMemory5"]="memoryPoolPtr"
    ["allocatedMemory6"]="memoryBlockSize"
    
    # 字符变量
    ["cVar1"]="characterValue"
    ["cVar3"]="validationChar"
    ["cVar5"]="validationResult"
)

# 执行变量名替换
for old_var in "${!VAR_MAPPING[@]}"; do
    new_var="${VAR_MAPPING[$old_var]}"
    
    # 使用sed进行替换，确保只替换完整的变量名
    sed -i "s/\b$old_var\b/$new_var/g" "$INPUT_FILE"
done

echo "变量名美化完成"

# 验证替换结果
echo "验证替换结果..."
for old_var in "${!VAR_MAPPING[@]}"; do
    new_var="${VAR_MAPPING[$old_var]}"
    count=$(grep -c "\b$new_var\b" "$INPUT_FILE")
    if [ $count -gt 0 ]; then
        echo "✓ $old_var -> $new_var (出现次数: $count)"
    else
        echo "✗ $old_var -> $new_var (未找到替换后的变量)"
    fi
done

echo "美化完成"