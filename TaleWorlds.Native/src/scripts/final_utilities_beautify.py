#!/usr/bin/env python3
"""
美化06_utilities.c文件中的变量名
"""

import re

def beautify_variables():
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 变量名映射
    variable_map = {
        'ObjectValidationState': 'ObjectValidationStatusCode',
        'ProcessingResult': 'ProcessingStatusCode',
        'ProcessedObjectCount': 'ProcessedObjectItemCount',
        'ObjectMetadataBuffer': 'ObjectMetadataDataBuffer',
        'SystemHandleArray': 'SystemContextHandleArray',
        'BufferPosition': 'CurrentBufferPosition',
        'MaxProcessableObjects': 'MaximumProcessableObjects',
        'ProcessingWorkspace': 'ProcessingDataWorkspace',
        'SecurityValidationKey': 'SecurityValidationKeyValue',
        'ValidationResult': 'ValidationStatusCode',
        'RetrievedCount': 'RetrievedItemCount',
        'ObjectIdentifier': 'ObjectIdentifierCode',
        'DataPosition': 'CurrentDataPosition',
        'ProcessedCount': 'ProcessedItemCount',
        'CollectionBuffer': 'ObjectCollectionDataBuffer',
        'ObjectContext': 'ObjectContextData',
        'SystemContext': 'SystemContextData',
        'ContextData': 'ContextDataPointer',
        'OperationResult': 'OperationStatusCode',
        'ResourceCounter': 'ResourceCounterValue',
        'ObjectPointer': 'ObjectDataPointer',
        'ObjectHandleIdentifier': 'ObjectHandleIdentifierValue',
        'AdjustedObjectMemoryPointer': 'AdjustedObjectMemoryDataPointer',
        'HandleMemoryBuffer': 'HandleMemoryDataBuffer',
        'ObjectHandleToValidate': 'ObjectHandleForValidation',
        'CharacterToValidate': 'CharacterParameterToValidate',
        'SecurityHash': 'SecurityHashValue',
        'ContextHandles': 'ContextHandleArray',
        'ObjectMetadataBuffer': 'ObjectMetadataDataBuffer',
        'RetrievedObjectDataBuffer': 'RetrievedObjectDataBuffer',
        'SystemObjectDataBuffer': 'SystemObjectCollectionBuffer',
        'ProcessResult': 'ProcessOperationResult',
        'ThreadCleanupStatus': 'ThreadCleanupStatusCode',
        'ResourceManagementStatus': 'ResourceManagementStatusCode',
        'RegistrationHandle': 'ResourceRegistrationHandle',
        'RegistrationEntryArray': 'RegistrationEntryDataArray',
        'RegistrationCounter': 'RegistrationItemCount',
        'CalculatedNewSize': 'CalculatedNewArraySize',
        'TargetSize': 'TargetArraySize',
        'RegistrationArrayCurrentSize': 'RegistrationArrayCurrentSize',
        'ResourceTablePointer': 'ResourceTableDataPointer',
        'PackageValidationStatus': 'PackageValidationStatusCode',
        'ValidationContext': 'ValidationContextData',
    }
    
    # 应用替换
    for old_name, new_name in variable_map.items():
        # 使用单词边界确保只匹配完整变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_variables()