#!/bin/bash

# 美化ProcessSystemOutputBufferAndQueueManagement函数中的变量名

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed进行变量名替换
sed -e 's/uStack_78/MemoryProtectionMask/g' \
    -e 's/StackValue28/StackChecksum/g' \
    -e 's/auStack_d8/SystemStackBuffer/g' \
    -e 's/FUN_1801b0140()/InitializeSystemResourceQueue()/g' \
    -e 's/plStack_98/QueueHandle/g' \
    -e 's/uStack_a8/CallbackContext/g' \
    -e 's/uStack_b8/ValidationFlags/g' \
    -e 's/FUN_180198980/ProcessSystemQueueOperation/g' \
    -e 's/ContextIndex/ContextIdentifier/g' \
    -e 's/FUN_1801afca0()/InitializeSystemContextManager()/g' \
    -e 's/puStack_68/StringBufferPointer/g' \
    -e 's/puStack_60/ArrayBuffer/g' \
    -e 's/auStack_50/DataArray/g' \
    -e 's/uStack_58/BufferSize/g' \
    -e 's/uStack_54/DataType/g' \
    -e 's/uStack_a0/SystemDataPointer/g' \
    -e 's/ProcessSystemDataValidation/ValidateSystemDataAndCheckStatus/g' \
    -e 's/SystemProtocolDataTable/SystemConfigurationDataTable/g' \
    -e 's/pEncodedData3/EncodedDataBuffer/g' \
    -e 's/FUN_180319490/EncodeSystemDataBuffer/g' \
    -e 's/EncodedData2/EncodedValue/g' \
    -e 's/FUN_180060b80/ProcessEncodedData/g' \
    -e 's/func_0x0001801be740/InitializeSystemResourceHandler/g' \
    -e 's/StatusResult/ValidationStatus/g' \
    -e 's/pResourceLockPointer/ResourceLockPointerArray/g' \
    -e 's/SystemContextPointer/SystemContextHandle/g' \
    -e 's/uStack_a0._0_4_/SystemDataPointer.LowPart/g' \
    -e 's/uStack_a8._0_4_/ResourceLockPointerArray.LowPart/g' \
    -e 's/fStack_90/NormalizedValueX/g' \
    -e 's/fStack_8c/NormalizedValueY/g' \
    -e 's/uStack_a0._4_4_/SystemDataPointer.HighPart/g' \
    -e 's/uStack_a8._4_4_/ResourceLockPointerArray.HighPart/g' \
    -e 's/uStack_84/ProcessingFlags/g' \
    -e 's/puStack_68/StringBufferPointer/g' \
    -e 's/puStack_60/ArrayBuffer/g' \
    -e 's/uStack_58/BufferSize/g' \
    -e 's/uStack_54/DataType/g' \
    -e 's/fStack_38/ScaledValueX/g' \
    -e 's/uStack_2c/SystemFlags/g' \
    -e 's/uStack_30/ConfigurationFlags/g' \
    -e 's/fStack_34/ScaledValueY/g' \
    -e 's/FUN_1802ea790/ProcessSystemDataTransformation/g' \
    -e 's/ProcessSystemMemoryOptimization/OptimizeSystemMemoryUsage/g' \
    "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "变量名美化完成"