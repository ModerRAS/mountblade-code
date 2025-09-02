#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化06_utilities.c文件中的变量名
这个脚本会识别并美化未语义化的变量名
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
    """美化变量名"""
    
    # 变量名映射字典 - 针对06_utilities.c中发现的变量
    variable_mappings = {
        # 验证相关变量
        'ContextHashValidationResult': 'ResourceHashValidationResult',
        'SystemValidationCodeA': 'PrimaryValidationCode',
        'SystemValidationCodeB': 'SecondaryValidationCode',
        'HashValidationResultAddress': 'HashResultPointer',
        'OperationResultPointer': 'OperationStatusPointer',
        'PackageValidationStatusCodePointer': 'PackageStatusPointer',
        'OperationStatusCodePointer': 'OperationCodePointer',
        'LoopIncrement': 'IterationCounter',
        'LoopCondition': 'LoopTerminationCondition',
        'ContextValidationStatusCode': 'ValidationStatus',
        'ObjectContextValidation': 'ObjectValidationContext',
        'ResourceContextOffset': 'ResourceContextIndex',
        'ContextHandle': 'ResourceContextHandle',
        'ResourcePointer': 'ResourceDataPointer',
        'FloatConversionResult': 'FloatCastResult',
        'ProcessedFloatValue': 'ProcessedFloatParameter',
        'FloatUnion': 'FloatConversionUnion',
        'SystemConfigurationFlags': 'ConfigurationFlags',
        'ValidationStatus': 'FlagValidationStatus',
        'ResourceIdentifierPointer': 'ResourceIdPointer',
        'NextIterationCount': 'NextLoopCounter',
        'LoopStepIncrement': 'LoopStepCounter',
        'SystemExecutionPointer': 'SystemContextPointer',
        'RangeProcessingIndex': 'RangeIndexArray',
        'ClampedValue': 'ValueAfterClamping',
        
        # 系统相关变量
        'StackOffset': 'StackFrameOffset',
        'DataElementPointer': 'DataItemPointer',
        'SystemDataContext': 'SystemContextData',
        'ParameterFloatValue': 'InputFloatParameter',
        'IntegerConversionValue': 'ConvertedIntegerValue',
        'StatusFlagHighBits': 'HighOrderStatusBits',
        'VectorComponents': 'SimdVectorComponents',
        'SystemResourceTableAddress': 'ResourceTableAddress',
        'ValidationOperationResult': 'ValidationStatusResult',
        'SystemResourceTableHandle': 'ResourceTableHandle',
        'SystemResourceIndex': 'ResourceTableIndex',
        'SystemResourceTable': 'ResourceDataTable',
        'SystemManagerInitializationResult': 'ManagerInitStatus',
        'ResourceValidationDataBuffer': 'ResourceValidationBuffer',
        'ObjectContextInformationBuffer': 'ObjectContextBuffer',
        'ValidationContext': 'ValidationData',
        'MessageDataOffset': 'MessageBufferOffset',
        'RegisterValue': 'RegisterContent',
        'ValidatedContextPointer': 'ValidatedMemoryPointer',
        'extendedObjectHandle': 'ExtendedHandleParameter',
        'ObjectHandleMemoryOffset': 'HandleMemoryLocation',
        'AccessRequestParameters': 'AccessRequestData',
        'AccessValidationResult': 'AccessValidationStatus',
        'SystemObjectHandle': 'SystemHandleObject',
        'SystemValidationStatusCode': 'SystemValidationStatus',
        'SecurityValidationContext': 'SecurityContextData',
        'ObjectValidationResult': 'ObjectValidationStatus',
        'SystemValidationContext': 'SystemValidationData',
        'ResourceValidationContext': 'ResourceValidationData',
        'ContextHashValidationResult': 'ContextHashStatus',
        
        # 线程相关变量
        'ThreadLocalStorageDataOffset': 'ThreadLocalStorageOffset',
        'ThreadResourceStateOffset': 'ThreadResourceState',
        'ThreadResourceCountOffset': 'ThreadResourceCount',
        
        # 资源管理相关变量
        'ResourceManagementStateOffset': 'ResourceManagementState',
        'ResourceManagementCleanupOffset': 'ResourceManagementCleanup',
        'ResourceManagementStatusOffset': 'ResourceManagementStatus',
        
        # 内存管理相关变量
        'MemoryContextResourceTableOffset': 'MemoryResourceTableOffset',
        'MemoryContextCleanupDataOffset': 'MemoryCleanupDataOffset',
        'MemoryValidationContextData': 'MemoryValidationBuffer',
        'MemoryValidationContext': 'MemoryValidationPointer',
        
        # 系统配置相关变量
        'SystemConfigurationFlagsOffset': 'SystemConfigFlagsOffset',
        'SystemConfigurationValidationShift': 'SystemConfigValidationShift',
        'SystemConfigurationFloatCheckShift': 'SystemConfigFloatCheckShift',
        'ContextConfigurationFlagsOffset': 'ContextConfigFlagsOffset',
        'ExecutionContextSecondaryOffset': 'ExecutionSecondaryOffset',
        'ContextFloatValueOffset': 'ContextFloatOffset',
        'ContextUpdateFlagOffset': 'ContextUpdateFlag',
        
        # 上下文相关变量
        'ContextHandleRegistrationDataOffset': 'ContextRegistrationDataOffset',
        'ContextHandleSystemFlagsOffset': 'ContextSystemFlagsOffset',
        'ContextHandleResourceArrayOffset': 'ContextResourceArrayOffset',
        'ContextHandleResourceCountOffset': 'ContextResourceCountOffset',
        
        # 对象相关变量
        'ObjectInstancePointer': 'ObjectInstance',
        'ObjectContextPointer': 'ObjectContextData',
        'SystemObjectPointer': 'SystemObjectInstance',
        'ObjectHandleToValidate': 'TargetObjectHandle',
        'HandleMemoryBuffer': 'HandleBufferMemory',
        'MemoryPointer': 'MemoryAddressPointer',
        'SystemContextHandles': 'SystemHandleArray',
        'HandleBuffer': 'HandleDataBuffer',
        'ValidationStackBuffer': 'StackValidationBuffer',
        'ResourceValidationBuffer': 'ResourceValidateBuffer',
        'ResultBuffer': 'OperationResultBuffer',
        
        # 执行相关变量
        'SystemExecutionContextPrimaryOffset': 'SystemExecutionPrimaryOffset',
        'SystemExecutionContextSecondaryOffset': 'SystemExecutionSecondaryOffset',
        'SystemExecutionPointer': 'SystemExecutionContext',
        
        # 其他变量
        'ObjectValidationState': 'ObjectValidationStatus',
        'ProcessingStatusCode': 'ProcessingStatus',
        'CurrentObjectIndex': 'ObjectIndexCounter',
        'ProcessedObjectCount': 'ProcessedObjectCounter',
        'ObjectMetadataBuffer': 'ObjectMetadataData',
        'SystemHandleArray': 'SystemHandleData',
        'DataBuffer': 'DataMemoryBuffer',
        'BufferPosition': 'BufferLocation',
        'MaxProcessableObjects': 'MaxObjectsToProcess',
        'ProcessingWorkspace': 'WorkSpaceBuffer',
        'SecurityValidationKey': 'SecurityKeyData',
        'SystemResourceTableHandle': 'ResourceTableSystemHandle',
        'ValidationOperationResult': 'OperationValidationResult',
        'SystemResourceTable': 'ResourceSystemTable',
        'SystemResourceIndex': 'ResourceSystemIndex',
        'SystemManagerContextOffset': 'ManagerContextLocation',
        'SystemManagerMaxContextSize': 'ManagerMaxContextSize',
        'SystemManagerAllocationSize': 'ManagerAllocationSize',
        'SystemManagerValidationOffset': 'ManagerValidationLocation',
        'ValidationContext': 'ContextValidationData',
        'OperationResult': 'ProcessingOperationResult',
        'MessageDataOffset': 'MessageDataLocation',
        'ContextHandle': 'HandleContextData',
        'ResourceCount': 'ResourceCounter',
        'ResourceHash': 'ResourceHashValue',
        'SystemConfigurationFlags': 'SystemConfigFlags',
        'ValidationStatus': 'SystemValidationState',
        'FloatConversionResult': 'FloatConversionStatus',
        'ProcessedFloatValue': 'FloatProcessedValue',
        'ResourceIdentifierPointer': 'ResourceIdLocation',
        'NextIterationCount': 'NextIterationValue',
        'LoopStepIncrement': 'LoopStepValue',
        'RangeProcessingIndex': 'RangeProcessingArray',
        'ClampedValue': 'ValueAfterRangeClamp'
    }
    
    # 按长度排序，优先处理长变量名
    sorted_mappings = sorted(variable_mappings.items(), key=lambda x: len(x[0]), reverse=True)
    
    # 应用变量名替换
    for old_name, new_name in sorted_mappings:
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def beautify_function_names(content):
    """美化函数名"""
    
    # 函数名映射字典
    function_mappings = {
        'func_': 'Function_',
        'fn_': 'Function_',
        'function_': 'Function_',
        'proc_': 'Process_',
        'process_': 'Process_',
        'calc_': 'Calculate_',
        'compute_': 'Compute_',
        'get_': 'Get_',
        'set_': 'Set_',
        'is_': 'Is_',
        'has_': 'Has_',
        'can_': 'Can_',
        'should_': 'Should_',
        'do_': 'Do_',
        'init_': 'Initialize_',
        'create_': 'Create_',
        'destroy_': 'Destroy_',
        'delete_': 'Delete_',
        'update_': 'Update_',
        'find_': 'Find_',
        'search_': 'Search_',
        'sort_': 'Sort_',
        'filter_': 'Filter_',
        'map_': 'Map_',
        'reduce_': 'Reduce_',
        'apply_': 'Apply_',
        'transform_': 'Transform_',
        'convert_': 'Convert_',
        'validate_': 'Validate_',
        'check_': 'Check_',
        'verify_': 'Verify_',
        'compare_': 'Compare_',
        'copy_': 'Copy_',
        'move_': 'Move_',
        'swap_': 'Swap_',
        'clear_': 'Clear_',
        'reset_': 'Reset_',
        'enable_': 'Enable_',
        'disable_': 'Disable_',
        'start_': 'Start_',
        'stop_': 'Stop_',
        'pause_': 'Pause_',
        'resume_': 'Resume_',
        'open_': 'Open_',
        'close_': 'Close_',
        'read_': 'Read_',
        'write_': 'Write_',
        'send_': 'Send_',
        'receive_': 'Receive_',
        'allocate_': 'Allocate_',
        'free_': 'Free_',
        'malloc_': 'Malloc_',
        'realloc_': 'Realloc_',
        'calloc_': 'Calloc_',
    }
    
    # 按长度排序，优先处理长函数名
    sorted_mappings = sorted(function_mappings.items(), key=lambda x: len(x[0]), reverse=True)
    
    # 应用函数名替换
    for old_name, new_name in sorted_mappings:
        # 使用正则表达式确保只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始美化06_utilities.c文件...")
    
    # 读取文件内容
    content = read_file(file_path)
    
    # 美化变量名
    print("美化变量名...")
    content = beautify_variables(content)
    
    # 美化函数名
    print("美化函数名...")
    content = beautify_function_names(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("美化完成！")

if __name__ == "__main__":
    main()