#!/usr/bin/env python3
"""
美化06_utilities.c文件中的变量名
将LocalContextData、uStack、fStack等变量改为有意义的名称
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    # LocalContextData变量替换映射
    local_context_replacements = {
        'LocalContextData0': 'MatrixContextPointer',
        'LocalContextData1': 'ResourceValidationContext',
        'LocalContextData2': 'SystemMemoryContext',
        'LocalContextData3': 'NetworkConnectionContext',
        'LocalContextData4': 'ResourceContextIterator',
        'LocalContextData5': 'CommandIndex',
        'LocalContextData6': 'ThreadSynchronizationContext',
        'LocalContextData7': 'AudioBufferContext',
        'LocalContextData8': 'GraphicsRenderContext'
    }
    
    # uStack变量替换映射 (基于使用场景)
    ustack_replacements = {
        'uStack_1a0': 'ViewportWidth',
        'uStack_1a8': 'ViewportHeight',
        'uStack_1b0': 'RenderFlags',
        'uStack_1b8': 'TextureFlags',
        'uStack_1c8': 'ShaderFlags',
        'uStack_170': 'BufferFlags',
        'uStack_168': 'ValidationFlags',
        'uStack_160': 'MemoryFlags',
        'uStack_150': 'NetworkFlags',
        'uStack_130': 'SecurityFlags',
        'uStack_12c': 'CompressionFlags',
        'uStack_128': 'EncryptionFlags',
        'uStack_124': 'SerializationFlags',
        'uStack_120': 'DeserializationFlags',
        'uStack_11c': 'ThreadFlags',
        'uStack_114': 'SystemFlags',
        'uStack_f8': 'OperationFlags',
        'uStack_f0': 'ResourceFlags',
        'uStack_278': 'AudioFormat',
        'uStack_270': 'AudioChannels',
        'uStack_260': 'AudioSampleRate',
        'uStack_258': 'AudioBitDepth',
        'uStack_24c': 'GraphicsFormat',
        'uStack_248': 'GraphicsWidth',
        'uStack_244': 'GraphicsHeight',
        'uStack_240': 'GraphicsDepth',
        'uStack_23c': 'GraphicsFlags',
        'uStack_20': 'BufferSize',
        'uStack_2a4': 'NetworkPort',
        'uStack_2a0': 'NetworkProtocol',
        'uStack_29c': 'NetworkTimeout',
        'uStack_298': 'NetworkFlags',
        'uStack_34': 'MemoryAlignment',
        'uStack_30': 'MemorySize',
        'uStack_2c': 'MemoryFlags',
        'uStack_74': 'ThreadPriority',
        'uStack_6c': 'ThreadFlags'
    }
    
    # fStack变量替换映射
    fstack_replacements = {
        'fStack_1a4': 'MatrixScaleX',
        'fStack_19c': 'MatrixScaleY',
        'fStack_2c8': 'VolumeLevel'
    }
    
    # 其他变量替换映射
    other_replacements = {
        'integerValue6': 'ArrayIndexPointer',
        'longValue8': 'DataBufferOffset',
        'ResourceValidationResult0': 'ResourceValidationHandle',
        'ResourceValidationResult3': 'ResourceValidationCounter',
        'ResourceValidationResult4': 'ResourceValidationFlags',
        'StackParameter1a0': 'MatrixViewPortWidth',
        'StackParameter1a8': 'MatrixViewPortHeight',
        'StackVariable1a8': 'BufferSize',
        'StackParameter58': 'LoopIncrementParameter',
        'StackVariable58': 'LoopIncrementVariable',
        'SystemCommandArray': 'CommandQueue',
        'SystemCommandParams': 'CommandParameters',
        'ResourceHandlerParam': 'ResourceHandlerParameter',
        'ResourceHandlerArray': 'ResourceHandlerQueue',
        'ResourceContextPointer3': 'ResourceContextHandle',
        'ResourceIndex1': 'PrimaryResourceIndex',
        'ResourceIndex3': 'SecondaryResourceIndex',
        'ResourceIndex4': 'TertiaryResourceIndex',
        'ResourceIndex6': 'ResourceIterationIndex',
        'encryptionShiftValue7': 'EncryptionShiftAmount',
        'presourceHash2': 'ResourceHashPointer',
        'DataHandlerContextPointer': 'DataContextHandle',
        'SystemDataBufferPointer': 'SystemBufferPointer',
        'SystemDataBufferOffset': 'SystemBufferOffset',
        'SystemDataBufferFlags': 'SystemBufferFlags',
        'CompressionContextPointer': 'CompressionBufferPointer',
        'CompressionContextOffset': 'CompressionBufferOffset',
        'CompressionContextFlags': 'CompressionBufferFlags',
        'CompressionContextMode': 'CompressionMode',
        'EncodingContextPointer': 'EncodingBufferPointer',
        'EncodingContextOffset': 'EncodingBufferOffset',
        'EncodingContextFlags': 'EncodingBufferFlags',
        'SerializationContextPointer': 'SerializationBufferPointer',
        'SerializationContextOffset': 'SerializationBufferOffset',
        'SerializationContextFlags': 'SerializationBufferFlags',
        'SerializationContextMode': 'SerializationMode',
        'DeserializationContextPointer': 'DeserializationBufferPointer',
        'DeserializationContextOffset': 'DeserializationBufferOffset',
        'DeserializationContextFlags': 'DeserializationBufferFlags',
        'ResourceFlag2': 'PrimaryResourceFlag',
        'ResourceFlag3': 'SecondaryResourceFlag',
        'pResourceFlag1': 'ResourceFlagPointer',
        'ResourceFlag4': 'TertiaryResourceFlag',
        'ResourceHandlerFlag1': 'ResourceHandlerPrimaryFlag',
        'ResourceHandlerFlag2': 'ResourceHandlerSecondaryFlag',
        'resourceFlagLow': 'ResourceFlagLowBits',
        'InputRAX': 'InputRegister',
        'RegisterR15': 'ContextRegister',
        'pLoopIncrement': 'LoopIncrementPointer',
        'pResourceValidationResult2': 'ResourceValidationResultPointer',
        'StackBuffer48': 'TemporaryBuffer48',
        'ExecutionContextPointer': 'ExecutionContext',
        'ResourceValidationResult0': 'ResourceValidationBase',
        'StackBuffer58': 'TemporaryBuffer58',
        'in_stack_00000058': 'InputStackParameter58',
        'ObjectContextParameter': 'ObjectContext',
        'ValidationContextParameter': 'ValidationContext',
        'ResourceContextPointer4': 'ResourceContextIterator',
        'ResourceContextPointer0': 'ResourceContextBase',
        'ResourceContextPointer6': 'ResourceContextArray',
        'ResourceContextPointer9': 'ResourceContextExtended',
        'ResourceContextOffset': 'ResourceContextDifference',
        'ResourceCheckResult': 'ResourceValidationResult',
        'presourceHash2': 'ResourceHashPointer2',
        'ResourceContextPointer3': 'ResourceContextHandle3',
        'AudioSampleRate': 'AudioSampleFrequency',
        'PointerStack340': 'PointerBuffer340',
        'inputFloatValue8': 'InputFloatValue8',
        'ValidationFloatBuffer': 'ValidationFloatArray',
        'alStack_300': 'StackByte300',
        'auStack_2f0': 'StackArray2f0',
        'auStack_2a8': 'StackArray2a8',
        'MaxOperationCount': 'MaximumOperationLimit',
        'presourceHash5': 'ResourceHashPointer5',
        'ResourceRegisterPointer': 'ResourceRegisterArray',
        'ResourceCounter': 'ResourceCount',
        'ContextValidationStatusCode': 'ContextValidationResult',
        'OperationStatusCode': 'OperationResult',
        'ValidationStatusCode': 'ValidationResult',
        'resourceHash0': 'InitialResourceHash',
        'ContextValidationResult': 'ContextValidationValue',
        'OperationResult': 'OperationReturnValue',
        'ValidationResult': 'ValidationReturnValue',
        'ResourceTablePointer': 'ResourceTableHandle',
        'resourceTable': 'ResourceTableInstance',
        'ResourceIndex': 'ResourceTableIndex',
        'SystemContextPointer': 'SystemContextHandle',
        'dataContext': 'DataContextHandle',
        'SecurityValidationContext': 'SecurityValidationBuffer',
        'aStackContextBuffer': 'StackContextBuffer',
        'aResourceFlag5': 'ResourceFlagArray5',
        'aResourceFlag6': 'ResourceFlagArray6',
        'puStack_d8': 'StackPointerD8',
        'uStack_c8': 'StackValueC8',
        'uStack_d0': 'StackValueD0',
        'uStack_c0': 'StackValueC0',
        'uStack_a8': 'StackValueA8',
        'uStack_a0': 'StackValueA0',
        'uStack_e0': 'StackValueE0',
        'StackBuffer294': 'StackBuffer294',
        'uStack_28c': 'StackValue28C',
        'StackBuffer340': 'StackBuffer340',
        'inputFloatValue': 'InputFloatValue',
        'pinputFloatValue5': 'InputFloatValuePointer5',
        'calculatedFloatResult': 'CalculatedFloatResult',
        'floatValue9': 'FloatValue9',
        'loopCounter': 'LoopCounter',
        'elementPointer': 'ElementPointer',
        'newBufferPointer': 'NewBufferPointer',
        'bufferContext': 'BufferContext',
        'arrayPointer': 'ArrayPointer',
        'newSize': 'NewBufferSize',
        'newMemoryBlock': 'NewMemoryBlock',
        'SystemCommandArray': 'SystemCommandQueue',
        'SystemCommandParams': 'SystemCommandParameters',
        'resourceData1': 'ResourceDataFirst',
        'resourceData2': 'ResourceDataSecond',
        'executionContext': 'ExecutionContext',
        'LocalContextData5': 'CommandIndex',
        'ResourceIndex3': 'ResourceIndexThird',
        'StackBuffer48': 'TemporaryBuffer48',
        'ExecutionContextPointer': 'ExecutionContext',
        'ResourceValidationResult0': 'ResourceValidationBase',
        'ResourceValidationResult3': 'ResourceValidationCounter',
        'ResourceValidationResult4': 'ResourceValidationFlags',
        'StackVariable58': 'LoopIncrementVariable',
        'ResourceContextPointer4': 'ResourceContextIterator',
        'ResourceContextPointer0': 'ResourceContextBase',
        'ResourceContextPointer6': 'ResourceContextArray',
        'ResourceContextPointer9': 'ResourceContextExtended',
        'ResourceContextOffset': 'ResourceContextDifference',
        'integerValue6': 'ArrayIndexPointer',
        'ResourceCheckResult': 'ResourceValidationResult',
        'presourceHash2': 'ResourceHashPointer2',
        'ValidationFloatBuffer': 'ValidationFloatArray',
        'alStack_300': 'StackByte300',
        'auStack_2f0': 'StackArray2f0',
        'AudioSampleRate': 'AudioSampleFrequency',
        'PointerStack340': 'PointerBuffer340',
        'inputFloatValue8': 'InputFloatValue8',
        'MaxOperationCount': 'MaximumOperationLimit',
        'presourceHash5': 'ResourceHashPointer5',
        'ResourceRegisterPointer': 'ResourceRegisterArray',
        'ResourceCounter': 'ResourceCount',
        'ContextValidationStatusCode': 'ContextValidationResult',
        'OperationStatusCode': 'OperationResult',
        'ValidationStatusCode': 'ValidationResult',
        'resourceHash0': 'InitialResourceHash',
        'ContextValidationResult': 'ContextValidationValue',
        'OperationResult': 'OperationReturnValue',
        'ValidationResult': 'ValidationReturnValue',
        'ResourceTablePointer': 'ResourceTableHandle',
        'resourceTable': 'ResourceTableInstance',
        'ResourceIndex': 'ResourceTableIndex',
        'SystemContextPointer': 'SystemContextHandle',
        'dataContext': 'DataContextHandle',
        'SecurityValidationContext': 'SecurityValidationBuffer',
        'aStackContextBuffer': 'StackContextBuffer',
        'aResourceFlag5': 'ResourceFlagArray5',
        'aResourceFlag6': 'ResourceFlagArray6',
        'puStack_d8': 'StackPointerD8',
        'uStack_c8': 'StackValueC8',
        'uStack_d0': 'StackValueD0',
        'uStack_c0': 'StackValueC0',
        'uStack_a8': 'StackValueA8',
        'uStack_a0': 'StackValueA0',
        'uStack_e0': 'StackValueE0',
        'StackBuffer294': 'StackBuffer294',
        'uStack_28c': 'StackValue28C',
        'StackBuffer340': 'StackBuffer340',
        'inputFloatValue': 'InputFloatValue',
        'pinputFloatValue5': 'InputFloatValuePointer5',
        'calculatedFloatResult': 'CalculatedFloatResult',
        'floatValue9': 'FloatValue9',
        'loopCounter': 'LoopCounter',
        'elementPointer': 'ElementPointer',
        'newBufferPointer': 'NewBufferPointer',
        'bufferContext': 'BufferContext',
        'arrayPointer': 'ArrayPointer',
        'newSize': 'NewBufferSize',
        'newMemoryBlock': 'NewMemoryBlock'
    }
    
    # 合并所有替换映射
    all_replacements = {}
    all_replacements.update(local_context_replacements)
    all_replacements.update(ustack_replacements)
    all_replacements.update(fstack_replacements)
    all_replacements.update(other_replacements)
    
    # 按长度降序排序，避免部分匹配问题
    sorted_replacements = sorted(all_replacements.items(), key=lambda x: len(x[0]), reverse=True)
    
    # 执行替换
    for old_name, new_name in sorted_replacements:
        # 使用单词边界确保完整匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始美化06_utilities.c文件...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化变量名
    beautified_content = beautify_variables(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print("变量名美化完成！")

if __name__ == "__main__":
    main()