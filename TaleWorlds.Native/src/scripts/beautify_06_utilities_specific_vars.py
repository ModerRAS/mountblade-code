#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

def beautify_specific_variables():
    """美化06_utilities.c文件中的特定变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 特定变量名映射表
    variable_mappings = {
        'StackPointer190': 'ResourceHashStackPointer',
        'LongValue8': 'ResourceContextDataPointer',
        'StackPointer178': 'SystemResourceCachePointer',
        'StackVariablePrimary': 'PrimaryStackVariable',
        'poperationParameter8': 'ResourceOperationParameter',
        'StackVariablee8': 'ResourceValidationStatus',
        'StackVariableec': 'ResourceValidationFlag',
        'StackArraye0': 'ResourceHashStackArray',
        'ResourceHashPointer6': 'ResourceHashValidationPointer',
        'ResourceHashPointer2': 'SecondaryResourceHashPointer',
        'StackPointer278': 'BufferContextStackPointer',
        'StackArray260': 'SecurityDataStackArray',
        'StackArrayBuffer': 'SecurityContextBuffer',
        'LocalContextBuffer': 'ResourceLocalContextBuffer',
        'ResourceValidationBuffer': 'ResourceValidationContextBuffer',
        'BufferContextSize': 'PrimaryBufferContextSize',
        'SecondaryBufferSize': 'SecondaryBufferContextSize',
        'PrimaryContextLength': 'PrimaryContextDataLength',
        'SecondaryContextLength': 'SecondaryContextDataLength',
        'ResourceIndex': 'CurrentResourceIndex',
        'LoopOffset': 'ResourceLoopOffset',
        'ResourceCheckResult': 'ResourceValidationResult',
        'ResourceDataLength': 'ResourceDataSize',
        'ResourceHandlerParam': 'ResourceHandlerParameter',
        'SystemDataPointer': 'SystemContextDataPointer',
        'ContextPackageValidationStatusCodePointer': 'ContextValidationStatusPointer',
        'ResourceSecurityFlag': 'ResourceSecurityValidationFlag',
        'SecurityEncryptionKey': 'SecurityContextEncryptionKey',
        'ResourceContextSecondary': 'SecondaryResourceContext',
        'ExecutionContextPointer': 'SystemExecutionContextPointer',
        'ContextHashValidationResult': 'ContextHashValidationStatus',
        'ResourceIterationIndex': 'ResourceProcessingIndex',
        'IntegerConversionValue': 'ConvertedIntegerValue',
        'ParameterFloatValue': 'InputParameterFloatValue',
        'SystemStatusFlags': 'CurrentSystemStatusFlags',
        'StatusFlagHighBits': 'SystemStatusHighBits',
        'VectorComponents': 'StatusVectorComponents',
        'SystemDataContext': 'SystemDataObjectContext',
        'OperationStatusFlags': 'CurrentOperationStatusFlags',
        'ValidationContext': 'ResourceValidationContext',
        'ObjectContext': 'ResourceObjectContext',
        'ResourceTable': 'SystemResourceTable',
        'SystemContext': 'SystemManagementContext',
        'ResourceDataOffset': 'ResourceDataBufferOffset',
        'ProcessStatus': 'OperationProcessStatus',
        'StackParameterContextExtended': 'ExtendedStackParameterContext',
        'SystemRegisterContext': 'SystemRegisterManagementContext',
        'calculationResult': 'CalculationResultPointer',
        'HashValidationResult': 'HashValidationStatus',
        'ObjectStackBufferSecondary': 'SecondaryObjectStackBuffer',
        'SystemResourceTemplateCache': 'SystemResourceTemplateCache',
        'SystemResourceTemplateDatabase': 'SystemResourceTemplateDatabase',
        'ResourceHashTemplate': 'ResourceHashTemplate',
        'ResourceHashValue0': 'PrimaryResourceHashValue',
        'ResourceHashBuffer': 'ResourceHashBuffer',
        'PrimaryResourceHash': 'PrimaryResourceHash',
        'ResourceRegisterPointer': 'ResourceRegisterManagementPointer',
        'ValidationCounterPointer': 'ValidationCounterDataPointer',
        'ResourceCount': 'ResourceProcessingCount',
        'loopIncrement': 'LoopIncrementValue',
        'ResourceContextOffset': 'ResourceContextBufferOffset',
        'LoopCondition': 'LoopValidationCondition',
        'ResourceStatus': 'ResourceProcessingStatus',
        'ResourceEntryPointer': 'ResourceEntryDataPointer',
        'ArrayIndex': 'ResourceArrayIndex',
        'OperationResult': 'ResourceOperationResult',
        'OperationStatusCode': 'ResourceOperationStatusCode',
        'OperationResultPointer': 'ResourceOperationResultPointer',
        'OperationStatusCodePointer': 'ResourceOperationStatusCodePointer',
        'ResourceContext': 'ResourceContextPointer',
        'ResourceTablePointer': 'ResourceTableManagementPointer',
        'OperationCompleted': 'ResourceOperationCompleted',
        'FifthFloatResult': 'FifthFloatCalculationResult',
        'CalculatedFloatResult': 'CalculatedFloatValue',
        'OperationStatusCode': 'SystemOperationStatusCode',
        'StatusChar': 'SystemStatusCharacter',
        'ContextValidationStatusCode': 'ContextValidationStatusCode',
        'ValidationStatusCode': 'SystemValidationStatusCode',
        'ResourceOffsetLimit': 'ResourceOffsetLimit',
        'ResourceHandlerFlag': 'ResourceHandlerStatusFlag',
        'ResourceIndexLimit': 'ResourceIndexLimit',
        'OperationParameterPointer': 'OperationParameterDataPointer',
        'StackVariableSecondary': 'SecondaryStackVariable',
        'StackVariableTertiary': 'TertiaryStackVariable',
        'StackBufferOffsetSecondary': 'SecondaryStackBufferOffset',
        'SecurityDataArray': 'SecurityContextDataArray',
        'ContextDataBuffer': 'ContextDataBufferPointer',
        'BufferTemplate1': 'PrimaryBufferTemplate'
    }
    
    # 应用变量名替换
    for old_name, new_name in variable_mappings.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("特定变量名美化完成")

if __name__ == "__main__":
    beautify_specific_variables()