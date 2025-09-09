#!/bin/bash

# 美化02_core_engine.c文件中的变量名
# 专门处理InitializeSystemCharacterHandler函数

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 定义函数区域 - InitializeSystemCharacterHandler函数 (大约从250055行开始)
# 首先美化标签名
sed -i 's/LAB_180208d4a/SystemCharacterProcessingContinue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/LAB_180208aa2/SystemCharacterValidationCheck/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 美化栈变量名
sed -i 's/uStackX_10/StackUnsignedValue10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/lStack_60/StackLongValue60/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/lStack0000000000000058/StackLongValue58/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 美化函数调用
sed -i 's/FUN_1801efdb0/ProcessCharacterCodeValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_1801ef300/ValidateCharacterDataStructure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_1801ef620/ProcessCharacterVectorOperation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CoreEngineProcessSystemEvent/ProcessSystemEventHandling/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 美化变量名
sed -i 's/pSystemContextPrimaryFloat3/SystemContextPrimaryFloatPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/pNormalizedParameterValue/NormalizedParameterPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CoreEngineSignedValue48/SystemSignedValue48/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/SystemStackRegister58/SystemStackRegisterValue58/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CharacterValidationResult/CharacterDataValidationResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/SystemEventInitializationTemplate/SystemEventTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/MemoryPoolManager/SystemMemoryPoolManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/isSystemContextNull/SystemContextNullFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/PrimaryReturnCode/SystemPrimaryReturnCode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CharacterStatusBuffer7/CharacterStatusBufferCurrent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/StackProcessingParameter5/StackProcessingParameter5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/PrimaryProcessingStatusFlag4/PrimaryProcessingStatusFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/pContextPrimaryFloat9/ContextPrimaryFloatPointer9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/pPrimaryFloatValue/PrimaryFloatValuePointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/SystemRegisterR10D/SystemRegisterR10Value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/RegisterR12Value/RegisterR12Pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 美化函数参数名
sed -i 's/Utf16Char/ProcessedUtf16Character/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/MemoryAllocationIndex/MemoryAllocationCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/UnicodeCodePoint/ProcessedUnicodeCodePoint/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/SystemDataRegistry/SystemDataRegistryPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CalculatedCodePoint/CalculatedCharacterCodePoint/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CharacterInputDataLength/InputCharacterDataLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/BooleanByteFlag7/BooleanByteFlag7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/StringProcessingStatus/StringProcessingStatusPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/systemLoopCounter/SystemLoopCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/SystemStringIndex/SystemStringIndexValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/ValidationStatus/ValidationStatusPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/ValidationResult/ValidationResultValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/LoopIndex/LoopIndexCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/IntegerValue5/IntegerProcessingValue5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/MemoryAllocationHandle/MemoryAllocationHandleValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/LockOperationResult0/LockOperationResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/HighByte5/HighByteFlag5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/VectorCalculationResult/VectorCalculationResultValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/VectorCalculationResult_00/VectorCalculationResultValue2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/MemoryAllocationIndexAdditional/MemoryAllocationIndexAdditionalValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/MemoryAllocationIndex7/MemoryAllocationIndex7Value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/StackProcessingParameter4/StackProcessingParameter4Pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/StackProcessingParameter5/StackProcessingParameter5Value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/CharacterLimit/CharacterProcessingLimit/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/StringOffset/StringOffsetValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "变量名美化完成"