#!/usr/bin/env python3
import re
import sys

def replace_concat_macros(file_path):
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换规则
    replacements = [
        # CONCAT44替换
        (r'CONCAT44\(ValidationContextParam,ValidationContext\)', 'CombineValidationContextAndParam(ValidationContextParam,ValidationContext)'),
        (r'CONCAT44\(ParameterRegister,ValidationRegister\)', 'CombineParameterAndValidationRegisters(ParameterRegister,ValidationRegister)'),
        (r'CONCAT44\(InputRegisterHigh,InputRegisterLow\)', 'CombineInputRegisters(InputRegisterHigh,InputRegisterLow)'),
        (r'CONCAT44\(SavedRegisterValue,ResourceIterationIndex\)', 'CombineSavedRegisterAndIndex(SavedRegisterValue,ResourceIterationIndex)'),
        (r'CONCAT44\(ResourceValidationFlag\.Field44,SystemCommandParameters\[0\]\)', 'CombineResourceValidationAndCommand(ResourceValidationFlag.Field44,SystemCommandParameters[0])'),
        (r'CONCAT44\(GraphicsPrimaryOperationFlag\.High28Bits,CleanupOption\)', 'CombineGraphicsOperationFlags(GraphicsPrimaryOperationFlag.High28Bits,CleanupOption)'),
        (r'CONCAT44\(GraphicsOperationFlagSecondary\.High28Bits,GraphicsTransformMatrix\[0\]\)', 'CombineGraphicsOperationFlags(GraphicsOperationFlagSecondary.High28Bits,GraphicsTransformMatrix[0])'),
        (r'CONCAT44\(GraphicsOperationFlagPrimary\.High28Bits,GraphicsDataFlag\)', 'CombineGraphicsOperationFlags(GraphicsOperationFlagPrimary.High28Bits,GraphicsDataFlag)'),
        (r'CONCAT44\(AudioBufferPointer\[0\]\.FloatValue,0xffffffff\)', 'CombineAudioBufferWithPadding(AudioBufferPointer[0].FloatValue,0xffffffff)'),
        (r'CONCAT44\(ValidationContext\.FloatValue,\*ValidationContext\)', 'CombineValidationContextWithResource(ValidationContext.FloatValue,*ValidationContext)'),
        (r'CONCAT44\(ValidationContext\.FloatValue,ResourceIndex\)', 'CombineValidationContextWithResource(ValidationContext.FloatValue,ResourceIndex)'),
        (r'CONCAT44\(RegisterParameter,loopCounter\)', 'CombineRegisterWithLoopCounter(RegisterParameter,loopCounter)'),
        (r'CONCAT44\(InputParameterValue,ResourceTableIndex\)', 'CombineInputWithResourceIndex(InputParameterValue,ResourceTableIndex)'),
        (r'CONCAT44\(RegisterStorageQuaternary,RegisterStorageQuinary\)', 'CombineRegisterStorageValues(RegisterStorageQuaternary,RegisterStorageQuinary)'),
        
        # CONCAT31替换
        (r'CONCAT31\(temporaryResourceValue\.High31Bits,1\)', 'CombineFloatWithHighBits(temporaryResourceValue.High31Bits,1)'),
        (r'CONCAT31\(FloatStackValue\.High31Bits,1\)', 'CombineFloatWithHighBits(FloatStackValue.High31Bits,1)'),
        (r'CONCAT31\(KernelResourceFloatValue\.High31Bits,1\)', 'CombineFloatWithHighBits(KernelResourceFloatValue.High31Bits,1)'),
        (r'CONCAT31\(HashValidationResult,StatusCharacter\)', 'CombineHashWithStatus(HashValidationResult,StatusCharacter)'),
        (r'CONCAT31\(ResourceValidationBuffer\[0\]\.ByteValue,ValidationFlag\)', 'CombineResourceWithChecksum(ResourceValidationBuffer[0].ByteValue,ValidationFlag)'),
        (r'CONCAT31\(ResourceCountArray\[0\]\.ByteValue,ResourceStatus != 0\)', 'CombineResourceWithStatus(ResourceCountArray[0].ByteValue,ResourceStatus != 0)'),
        (r'CONCAT31\(ResourceOperationBuffer\.ByteValue,\*\(uint8_t \*\)\(SystemContext \+ 0x5c\)\)', 'CombineResourceWithOperation(ResourceOperationBuffer.ByteValue,*(uint8_t *)(SystemContext + 0x5c))'),
        
        # CONCAT71替换
        (r'CONCAT71\((uint7)\(uint3\)\(ResourceDataSize >> 8\),1\)', 'CombineSystemContextWithValidation((uint7)(uint3)(ResourceDataSize >> 8),1)'),
        (r'CONCAT71\(0xff000000,\*\(void \*\*\*\)\(MemoryAddressIncrement \+ 0x70\) == &ExceptionList\)', 'CombineMemoryWithExceptionCheck(0xff000000,*(void ***)(MemoryAddressIncrement + 0x70) == &ExceptionList)'),
        (r'CONCAT71\(HashValidationResult,\*\(char \*\)\(SystemExecutionPointer \+ 0x77\) != \'\\0\'\)', 'CombineHashWithCharacterCheck(HashValidationResult,*(char *)(SystemExecutionPointer + 0x77) != \'\\0\')'),
        (r'CONCAT71\(HashValidationResult,\*\(char \*\)\(SystemExecutionPointer \+ 0x77\) == \'\\0\'\)', 'CombineHashWithCharacterCheck(HashValidationResult,*(char *)(SystemExecutionPointer + 0x77) == \'\\0\')'),
        
        # 其他CONCAT替换
        (r'CONCAT14\(HashValidationResult != 1,\*\(uint32_t \*\)\(ValidationContext \+ 0x230\)\)', 'CombineHashWithValidation(HashValidationResult != 1,*(uint32_t *)(ValidationContext + 0x230))'),
        (r'CONCAT62\(ValidationContext\.ShortValue,\(short\)HashValidationResult\)', 'CombineValidationContextWithChar(ValidationContext.ShortValue,(short)HashValidationResult)'),
        (r'CONCAT22\(SystemArrayUnionBuffer\[0\]\.ByteValue,\*\(uint8_t \*\)\(ValidationContext \+ 0x104\)\)', 'CombineSystemArrayWithByte(SystemArrayUnionBuffer[0].ByteValue,*(uint8_t *)(ValidationContext + 0x104))'),
        (r'CONCAT22\(SystemArrayUnionBuffer\[0\]\.ShortValue,\*\(uint16_t \*\)\(\(int64_t\)ValidationContext \+ 6\)\)', 'CombineSystemArrayWithShort(SystemArrayUnionBuffer[0].ShortValue,*(uint16_t *)((int64_t)ValidationContext + 6))'),
        (r'CONCAT22\(formattedHash\.ShortValue,\(short\)ResourceHash\)', 'CombineResourceHashWithFormat(formattedHash.ShortValue,(short)ResourceHash)'),
        (r'CONCAT22\(lengthBuffer\[0\]\.ShortValue,\(short\)dataLength\)', 'CombineLengthWithBuffer(lengthBuffer[0].ShortValue,(short)dataLength)'),
        (r'CONCAT22\(ResourceCountArray\[0\]\.ShortValue,ResourceContextOffset\)', 'CombineResourceCountWithOffset(ResourceCountArray[0].ShortValue,ResourceContextOffset)'),
    ]
    
    # 执行替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换完成: {file_path}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python3 replace_concat_macros.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    replace_concat_macros(file_path)