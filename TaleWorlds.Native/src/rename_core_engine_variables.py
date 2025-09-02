#!/usr/bin/env python3
"""
批量重命名02_core_engine.c中的变量名
"""

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_variables(content):
    # 定义需要重命名的变量映射
    variable_mappings = {
        # 内存相关变量
        'pmemorySize': 'MemorySizePointer',
        'memoryEndAddress': 'MemoryEndAddress',
        'memoryBlockSize': 'MemoryBlockSize',
        'lVar8': 'LoopVariable8',
        'lVar9': 'LoopVariable9',
        'ReturnValue0': 'ReturnValue',
        'bVar11': 'BooleanVariable11',
        'ReferenceCountPointer': 'ReferenceCountPointer',
        'IntegerVariable2': 'IntegerVariable2',
        'UnsignedVariable3': 'UnsignedVariable3',
        'UnsignedVariable4': 'UnsignedVariable4',
        'piVar1': 'IntegerPointer1',
        
        # 系统上下文相关
        'SystemContext': 'SystemContext',
        'DataBuffer': 'DataBuffer',
        'EventFlags': 'EventFlags',
        'ReservedParameter': 'ReservedParameter',
        'MemoryFlags': 'MemoryFlags',
        'ResourceFlags': 'ResourceFlags',
        
        # 节点相关
        'CurrentNode': 'CurrentNode',
        'PreviousNode': 'PreviousNode',
        'NextNode': 'NextNode',
        'ResultPointer': 'ResultPointer',
        'DataNodePointer': 'DataNodePointer',
        
        # 队列相关
        'QueuePoolPointer': 'QueuePoolPointer',
        'PreviousQueueNode': 'PreviousQueueNode',
        'CurrentQueueNode': 'CurrentQueueNode',
        'NextQueueNode': 'NextQueueNode',
        'NewQueuePointer': 'NewQueuePointer',
        
        # 缓冲区相关
        'primaryDataPointer': 'PrimaryDataPointer',
        'secondaryDataPointer': 'SecondaryDataPointer',
        'memoryBaseAddress': 'MemoryBaseAddress',
        'memoryOffset': 'MemoryOffset',
        'memoryMask': 'MemoryMask',
        'referenceCountPointer': 'ReferenceCountPointer',
        'bufferAllocationStatus': 'BufferAllocationStatus',
        'NewMemoryAllocation': 'NewMemoryAllocation',
        'oldBufferStart': 'OldBufferStart',
        'currentBufferEnd': 'CurrentBufferEnd',
        'newBufferStart': 'NewBufferStart',
        'endOffset': 'EndOffset',
        'startOffset': 'StartOffset',
        
        # 临时变量
        'uVar5': 'UnsignedVariable5',
        'uVar9': 'UnsignedVariable9',
        'uStack_50': 'StackVariable50',
        'uStack_268': 'StackVariable268',
        'uStack_308': 'StackVariable308',
        'uStack_2e8': 'StackVariable2e8',
        'uStack_48': 'StackVariable48',
        'uStack_360': 'StackVariable360',
        'uStack_c8': 'StackVariablec8',
        'uStack_168': 'StackVariable168',
        'uStack_1b8': 'StackVariable1b8',
        'uStack_70': 'StackVariable70',
        'uStack_2a0': 'StackVariable2a0',
        'uStack_318': 'StackVariable318',
        'uStack_2c0': 'StackVariable2c0',
        'uStack_280': 'StackVariable280',
        'uStack_260': 'StackVariable260',
        'uStack_98': 'StackVariable98',
        'uStack_b8': 'StackVariableb8',
        'uStack_58': 'StackVariable58',
        'uStack_68': 'StackVariable68',
        'uStack_88': 'StackVariable88',
        'uStack_a8': 'StackVariablea8',
        'uStack_180': 'StackVariable180',
        'uStack_200': 'StackVariable200',
        'uStack_1c0': 'StackVariable1c0',
        'uStack_1e0': 'StackVariable1e0',
        'uStack_c8': 'StackVariablec8',
        'uStack_330': 'StackVariable330',
        'uStack_160': 'StackVariable160',
        'uStack_f0': 'StackVariablef0',
        'uStack_240': 'StackVariable240',
        'uStack_260': 'StackVariable260',
        'uStack_140': 'StackVariable140',
        'uStack_1a0': 'StackVariable1a0',
        'uStack_2e8': 'StackVariable2e8',
        'uStack_308': 'StackVariable308',
        'uStack_330': 'StackVariable330',
        'uStack_240': 'StackVariable240',
        'uStack_2d8': 'StackVariable2d8',
        'uStack_2b0': 'StackVariable2b0',
        'uStack_290': 'StackVariable290',
        'uStack_2d8': 'StackVariable2d8',
        'uStack_2b0': 'StackVariable2b0',
        'uStack_30': 'StackVariable30',
        'uStack_d0': 'StackVariabled0',
        'uStack_c0': 'StackVariablec0',
        'uStack_b0': 'StackVariableb0',
        'uStack_a0': 'StackVariablea0',
        'uStack_90': 'StackVariable90',
        'uStack_80': 'StackVariable80',
        'uStack_70': 'StackVariable70',
        'uStack_60': 'StackVariable60',
        'uStack_50': 'StackVariable50',
        'uStack_40': 'StackVariable40',
        'uStack_30': 'StackVariable30',
        'uStack_20': 'StackVariable20',
        'uStack_10': 'StackVariable10',
        'uStack_8': 'StackVariable8',
        'uStack_4': 'StackVariable4',
        'uStack_2': 'StackVariable2',
        'uStack_1': 'StackVariable1',
        
        # 长整型变量
        'LongVariable10': 'LongVariable10',
        'LongVariable12': 'LongVariable12',
        'LongVariable20': 'LongVariable20',
        'LongVariable30': 'LongVariable30',
        'LongVariable40': 'LongVariable40',
        'LongVariable50': 'LongVariable50',
        'LongVariable60': 'LongVariable60',
        'LongVariable70': 'LongVariable70',
        'LongVariable80': 'LongVariable80',
        'LongVariable90': 'LongVariable90',
        'LongVariable100': 'LongVariable100',
        
        # 指针变量
        'pLongVariable1': 'LongPointer1',
        'pLongVariable2': 'LongPointer2',
        'pLongVariable3': 'LongPointer3',
        'pLongVariable4': 'LongPointer4',
        'pLongVariable5': 'LongPointer5',
        'pLongVariable6': 'LongPointer6',
        'pLongVariable7': 'LongPointer7',
        'pLongVariable8': 'LongPointer8',
        'pLongVariable9': 'LongPointer9',
        'pLongVariable10': 'LongPointer10',
        
        # 字符指针
        'pCharacterVariable3': 'CharacterPointer3',
        'pCharacterVariable4': 'CharacterPointer4',
        'pCharacterVariable5': 'CharacterPointer5',
        'pCharacterVariable6': 'CharacterPointer6',
        'pCharacterVariable7': 'CharacterPointer7',
        'pCharacterVariable8': 'CharacterPointer8',
        'pCharacterVariable9': 'CharacterPointer9',
        'pCharacterVariable10': 'CharacterPointer10',
        
        # 数据缓冲区
        'DataBuffer0': 'DataBuffer0',
        'DataBuffer1': 'DataBuffer1',
        'DataBuffer2': 'DataBuffer2',
        'DataBuffer3': 'DataBuffer3',
        'DataBuffer4': 'DataBuffer4',
        'DataBuffer5': 'DataBuffer5',
        'DataBuffer6': 'DataBuffer6',
        'DataBuffer7': 'DataBuffer7',
        'DataBuffer8': 'DataBuffer8',
        'DataBuffer9': 'DataBuffer9',
        'DataBuffer10': 'DataBuffer10',
        
        # 超时相关
        'TimeoutValueStorage': 'TimeoutValueStorage',
        'TimeoutValue': 'TimeoutValue',
        'TimeoutCounter': 'TimeoutCounter',
        'TimeoutFlag': 'TimeoutFlag',
        
        # 引用计数
        'referenceCount': 'ReferenceCount',
        'referenceCountPointer': 'ReferenceCountPointer',
        'referenceCountValue': 'ReferenceCountValue',
        
        # 状态标志
        'statusFlag': 'StatusFlag',
        'statusFlags': 'StatusFlags',
        'statusValue': 'StatusValue',
        
        # 引擎上下文
        'engineContext': 'EngineContext',
        'systemContext': 'SystemContext',
        'systemContextPtr': 'SystemContextPointer',
        
        # 配置相关
        'SystemConfigurationPointer': 'SystemConfigurationPointer',
        'SystemConfigTemplate': 'SystemConfigTemplate',
        'SystemConfigBuffer': 'SystemConfigBuffer',
        'EngineConfigBuffer': 'EngineConfigBuffer',
        'MemoryConfigBuffer': 'MemoryConfigBuffer',
        'ValidationConfigBuffer': 'ValidationConfigBuffer',
        
        # 模板相关
        'EngineDataTemplate': 'EngineDataTemplate',
        'SystemDataTemplate': 'SystemDataTemplate',
        'SystemInfoHandlerTemplate': 'SystemInfoHandlerTemplate',
        
        # 异常处理
        'ExceptionList': 'ExceptionList',
        
        # 系统资源
        'CoreEngineMemoryContext': 'CoreEngineMemoryContext',
        'EngineSystemData': 'EngineSystemData',
        
        # 函数指针
        'func_0x00018064e870': 'FunctionPointer18064e870',
        
        # 内存分配
        'memoryAllocationBuffer': 'MemoryAllocationBuffer',
        'NewMemoryAllocation': 'NewMemoryAllocation',
        
        # 系统信息
        'SystemInfo': 'SystemInfo',
        'SystemInfoHandler': 'SystemInfoHandler',
        
        # 其他变量
        'currentElement': 'CurrentElement',
        'bufferInfo': 'BufferInfo',
        'sourceString': 'SourceString',
        'ResourceIdentifier': 'ResourceIdentifier',
        'ReturnValue0': 'ReturnValue0',
        'ReturnValue': 'ReturnValue',
        'IntegerVariable8': 'IntegerVariable8',
        'UnsignedVariable2': 'UnsignedVariable2',
        'UnsignedVariable20': 'UnsignedVariable20',
        'UnsignedVariable4': 'UnsignedVariable4',
        'plStackX_8': 'PointerLongStack8',
        'plStack_20': 'PointerLongStack20',
        'auStackX_8': 'ArrayUnsignedStack8',
        'auStack_1b8': 'ArrayUnsignedStack1b8',
        'auStack_338': 'ArrayUnsignedStack338',
        'auStack_334': 'ArrayUnsignedStack334',
        'aStackConfigurationFlag': 'ArrayStackConfigurationFlag',
        'ppppppDataBuffer4': 'PointerPointerPointerPointerPointerPointerDataBuffer4',
        'pppppDataBuffer9': 'PointerPointerPointerPointerPointerDataBuffer9',
        'ppppppuStack_360': 'PointerPointerPointerPointerPointerPointerUnsignedStack360',
        'ppuStack_68': 'PointerPointerUnsignedStack68',
    }
    
    # 应用变量重命名
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只匹配完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    print("读取文件...")
    content = read_file(file_path)
    
    print("重命名变量...")
    content = rename_variables(content)
    
    print("写入文件...")
    write_file(file_path, content)
    
    print("完成!")

if __name__ == '__main__':
    main()