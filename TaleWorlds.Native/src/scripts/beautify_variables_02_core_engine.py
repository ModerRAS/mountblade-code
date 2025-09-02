#!/usr/bin/env python3
"""
美化02_core_engine.c文件中的变量名
将lVar, iStack, uStack等变量重命名为语义化名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    """美化变量名称"""
    # 变量映射表 - 根据上下文来替换
    variable_mappings = {
        # 通用变量
        'lVar[0-9]+': 'SystemLongVariable',
        'iStack_[0-9a-f]+': 'StackInteger',
        'uStack_[0-9a-f]+': 'StackUnsigned',
        'puStack_[0-9a-f]+': 'StackPointer',
        'pcStack_[0-9a-f]+': 'StackCharPointer',
        'pbStack_[0-9a-f]+': 'StackBytePointer',
        'cStack_[0-9a-f]+': 'StackChar',
        'bVar[0-9]+': 'ByteVariable',
        'fVar[0-9]+': 'FloatVariable',
        'dVar[0-9]+': 'DoubleVariable',
        'auStack_[0-9a-f]+': 'StackArray',
        'acStack_[0-9a-f]+': 'StackCharArray',
        'ppuStack_[0-9a-f]+': 'StackPointerPointer',
        'ppppuStack_[0-9a-f]+': 'StackMultiPointer',
        'pppppuStack_[0-9a-f]+': 'StackMultiPointerArray',
        'ppppppuStack_[0-9a-f]+': 'StackMultiPointerStructure',
    }
    
    # 特殊变量替换（需要根据上下文）
    special_mappings = {
        'iStack_f8': 'EventProcessIndex',
        'uStack_120': 'MemoryAllocationSize',
        'puStack_130': 'MemoryAllocationBuffer',
        'uStack_128': 'BufferSize',
        'puStack_118': 'MemoryAllocationHandler',
        'puStack_110': 'MemoryBufferPointer',
        'puStack_158': 'EventProcessingBuffer',
        'puStack_150': 'EventDataBuffer',
        'uStack_148': 'EventDataSize',
        'puStack_98': 'SystemEventBuffer',
        'puStack_78': 'DataProcessingBuffer',
        'iStack_c0': 'StringProcessingLength',
        'lStack_c8': 'StringProcessingBuffer',
        'pSystemFlagC': 'SystemFlagPointer',
        'pSystemFlagD': 'SystemDataPointer',
        'puStack_90': 'DataBufferPointer',
        'uStack_80': 'DataBufferSize',
        'uStack_60': 'MemoryBlockSize',
        'uStack_30': 'EncryptionKey',
        'auStack_178': 'SystemStackBuffer',
        'uStack_68': 'SystemContextValue',
        'lVar9': 'SystemIterator',
        'SystemLongVariable12': 'SystemBaseOffset',
        'LongVariable14': 'SystemDataSize',
        'ProcessState': 'SystemProcessState',
        'IntegerValue3': 'LoopCounter',
        'ReturnValue8': 'SystemDataPointer',
        'pSystemDataTablePointer': 'SystemDataTablePointer',
        'ReturnValue0': 'DataAddress',
        'UnsignedComparisonValue': 'DataEndAddress',
        'IntegerValue7': 'IterationCounter',
        'memoryAddressMask': 'MemoryAddressMask',
        'UnsignedComparisonValue': 'MemoryStartAddress',
        'memoryEndAddress': 'MemoryEndAddress',
        'memoryAllocationSize': 'MemoryAllocationSize',
        'ReturnValue0': 'ReturnAddress',
        'lVar9': 'MemoryBlockSize',
        'auStack_98': 'SystemBuffer',
        'uStack_28': 'BufferKey',
        'auStack_38': 'StringBuffer',
        'puStack_48': 'StringPointer',
        'puStack_98': 'SystemBufferPointer',
        'uStack_80': 'BufferSize',
        'puStack_90': 'DataPointer',
        'StackValidationData': 'StackOffset',
        'acStack_60': 'ProcessingBuffer',
        'SystemDataTablePointer': 'BufferDataPointer',
        'memoryAllocationSize': 'AllocationSize',
        'IntegerVariable7': 'DataSize',
        'uStack_a0': 'SystemFlagA',
        'uStack_a8': 'SystemFlagB',
        'uStack_38': 'ValidationFlag',
        'pbVar5': 'ByteProcessingPointer',
        'UnsignedVariable2': 'ByteComparisonValue',
        'puStack_390': 'BufferPointer',
        'uStack_2f8': 'BufferSize',
        'uStack_2f0': 'BufferType',
        'puStack_290': 'DataStructurePointer',
        'puStack_288': 'BufferData',
        'auStack_278': 'SystemStringBuffer',
        'uStack_280': 'StringLength',
        'LocalDataPointer8': 'LocalDataPointer',
        'uStack_2c0': 'ArraySize',
        'iStack_374': 'ArrayIndex',
        'DataBuffer7': 'DataSource',
        'DataBuffer3': 'DataEnd',
        'uStack_268': 'StringData',
        'uStack_318': 'StringSize',
        'puStack_328': 'MemoryAllocationPointer',
        'uStack_320': 'MemoryFlag',
        'LongVariable18': 'StringLength',
        'UnsignedVariable22': 'MemoryMask',
        'SystemOffsetValue': 'MemoryAddress',
        'ReturnValue6': 'MemoryOffset',
        'initializationStatus0': 'StringDataSize',
        'ppppppuStack_360': 'PointerArray',
        'ppppppuStack_350': 'PointerStart',
        'ppppppDataBuffer4': 'PointerIterator',
        'ppppppDataBuffer': 'PointerCurrent',
        'ppppppuStack_358': 'PointerEnd',
        'uStack_338': 'AllocationType',
        'puStack_2b0': 'PrimaryPointer',
        'puStack_2a8': 'PrimaryData',
        'puStack_2a0': 'SecondaryPointer',
        'systemVariable7': 'SystemFlag',
        'iStack_370': 'SystemCounter',
        'uStack_2d0': 'SystemState',
        'SystemIntegerValue': 'SystemValue',
        'UnsignedVariable24': 'AddressMask',
        'SystemLongVariable12': 'SystemAddress',
        'uStack_378': 'BufferFlag',
        'SystemVariable9': 'ProcessingResult',
        'uStack_48': 'DefaultValue',
        'uStack_3c': 'SystemState',
        'ppppppuStack_358': 'SystemPointerStart',
        'systemContextPointer5': 'ContextPointer',
        'puStack_2a0': 'ContextData',
        'uStack_388': 'BufferSize',
        'uStack_378': 'BufferFlags',
        'SystemVariable9': 'OperationResult',
        'uStack_268': 'BufferData',
        'SystemLongVariable12': 'OperationAddress',
        'uStack_2d0': 'OperationState',
        'uStack_2f0': 'ResetFlag',
        'uStack_38': 'SystemBufferKey',
        'auStack_98': 'SystemStackBuffer',
    }
    
    # 应用特殊变量映射
    for old_var, new_var in special_mappings.items():
        # 只替换完整的变量名（避免部分匹配）
        content = re.sub(rf'\b{old_var}\b', new_var, content)
    
    # 应用通用变量映射（使用正则表达式）
    for pattern, replacement in variable_mappings.items():
        # 为每个匹配生成唯一的变量名
        def replace_func(match):
            var_name = match.group(0)
            # 为每个变量生成唯一的后缀
            suffix = hash(var_name) % 1000
            return f"{replacement}{suffix}"
        
        content = re.sub(rf'\b{pattern}\b', replace_func, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python beautify_variables.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化变量
    beautified_content = beautify_variables(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print(f"变量美化完成: {file_path}")

if __name__ == "__main__":
    main()