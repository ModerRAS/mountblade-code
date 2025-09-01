#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 这个脚本将帮助批量重命名局部变量

# 局部变量名映射表
declare -A VARIABLE_MAP=(
    # 操作结果变量
    ["operationResult"]="OperationResult"
    ["processResult"]="ProcessResult"
    ["processingResult"]="ProcessingResult"
    ["validationResult"]="ValidationResult"
    ["comparisonResult"]="ComparisonResult"
    ["propertyCheckResult"]="PropertyCheckResult"
    ["infoExtractionResult"]="InfoExtractionResult"
    ["checksumValidationResult"]="ChecksumValidationResult"
    ["primaryValidationStatus"]="PrimaryValidationStatus"
    
    # 验证状态变量
    ["validationStatus"]="ValidationStatus"
    ["systemStatus"]="SystemStatus"
    
    # 整数值变量
    ["integerValue1"]="IntegerValue1"
    ["integerValue2"]="IntegerValue2"
    ["intValue"]="IntValue"
    ["counterValue"]="CounterValue"
    ["secondaryCountValue"]="SecondaryCountValue"
    
    # 大小和容量变量
    ["arrayResizeCount"]="ArrayResizeCount"
    ["registrationArraySize"]="RegistrationArraySize"
    ["newRegistrationSize"]="NewRegistrationSize"
    ["newCapacity"]="NewCapacity"
    ["bufferSize"]="BufferSize"
    ["currentConfigValue"]="CurrentConfigValue"
    ["calculatedSize"]="CalculatedSize"
    ["newSize"]="NewSize"
    ["tableCapacity"]="TableCapacity"
    ["calculatedCapacity"]="CalculatedCapacity"
    ["entryCount"]="EntryCount"
    ["expandedCapacity"]="ExpandedCapacity"
    ["oldSize"]="OldSize"
    ["currentSize"]="CurrentSize"
    
    # 索引变量
    ["objectIndex"]="ObjectIndex"
    ["arrayIndex"]="ArrayIndex"
    ["propertyIndex"]="PropertyIndex"
    ["existingEntryIndex"]="ExistingEntryIndex"
    
    # 表和条目变量
    ["tableEntry"]="TableEntry"
    ["resourceTableEntry"]="ResourceTableEntry"
    
    # 其他变量
    ["unlockResult"]="UnlockResult"
    ["iVar9"]="iVar9"
    ["iStack_48"]="iStack_48"
    ["iStack_2f0"]="iStack_2f0"
    ["iStack_2a0"]="iStack_2a0"
    ["iStack_290"]="iStack_290"
    ["iStack_250"]="iStack_250"
    ["iStack0000000000000044"]="iStack0000000000000044"
    ["iStack0000000000000030"]="iStack0000000000000030"
    ["iStack00000000000000b0"]="iStack00000000000000b0"
    ["aiStackX_8"]="aiStackX_8"
    ["aiStack_f8"]="aiStack_f8"
    ["aiStackX_18"]="aiStackX_18"
    ["aiStack_48"]="aiStack_48"
    ["aiStackX_10"]="aiStackX_10"
    ["in_stack_00000038"]="in_stack_00000038"
    ["in_stack_00000040"]="in_stack_00000040"
)

# 处理文件
FILE="TaleWorlds.Native/src/06_utilities.c"

echo "开始美化 $FILE 文件..."

# 备份原文件
cp "$FILE" "$FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 对每个变量进行重命名
for old_name in "${!VARIABLE_MAP[@]}"; do
    new_name="${VARIABLE_MAP[$old_name]}"
    
    echo "重命名变量: $old_name -> $new_name"
    
    # 使用sed进行替换，注意使用词边界确保只匹配完整变量名
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE"
done

echo "变量重命名完成！"

echo "美化完成！"