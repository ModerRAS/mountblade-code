#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化06_utilities.c文件中的变量名
这个脚本用于改进变量命名，使其更具语义化
"""

import re
import os

def beautify_utilities_file():
    """美化06_utilities.c文件"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量替换映射
    variable_replacements = {
        # 简单变量名替换
        'ResourceIndex': 'ResourcePosition',
        'operationStatusCode': 'OperationStatus',
        'OperationResult': 'ProcessingResult',
        'CleanupOption': 'CleanupParameter',
        'StringProcessingTemplate': 'StringTemplate',
        'SystemStringBufferA': 'SystemBufferA',
        'SystemStringBufferB': 'SystemBufferB',
        'SystemStringBufferC': 'SystemBufferC',
        'ResourceSecurityFlag': 'SecurityFlag',
        'ResourceValidationByteFirst': 'ValidationByteFirst',
        'ResourceValidationByteSecond': 'ValidationByteSecond',
        'ResourceValidationByteThird': 'ValidationByteThird',
        'ResourceQuaternaryFlag': 'QuaternaryFlag',
        'ResourceTopByteFlag': 'TopByteFlag',
        'resourceFlagLowBits': 'LowBitsFlag',
        'ResourceHighByteFlag': 'HighByteFlag',
        'ResourceMidByteFlag': 'MidByteFlag',
        'ResourceLowByteFlag': 'LowByteFlag',
        'ResourceTertiaryFlag': 'TertiaryFlag',
        'ResourceSecondaryFlag': 'SecondaryFlag',
        'ResourcePrimaryFlag': 'PrimaryFlag',
        'resourceFlagHighBits': 'HighBitsFlag',
        'ResourceHandleBackup': 'ResourceHandleTemp',
        'PrimaryOperationParameter': 'SecurityParameter',
        'SecurityEncryptionKey': 'EncryptionKey',
        'ResourceContext': 'ResourceContextPtr',
        'SecurityOperationData': 'OperationData',
        'ResourceIndexOutput': 'OutputHandle',
        'processPointer': 'ProcessPtr',
        'SecurityDataBuffer': 'SecurityBuffer',
        'ResourceValidationFlagHigh': 'ValidationFlagHigh',
        'ResourceValidationFlagLow': 'ValidationFlagLow',
        'resourcePrimaryByte': 'PrimaryByte',
        'resourceSecondaryByte': 'SecondaryByte',
        'resourceTertiaryByte': 'TertiaryByte',
        'resourceFlagByte4': 'FlagByte4',
        'resourceFlagByte5': 'FlagByte5',
        'resourceFlagByte6': 'FlagByte6',
        'resourceFlagByte7': 'FlagByte7',
        'resourceFlagByte8': 'FlagByte8',
        'resourceFlagPrimary': 'PrimaryFlag',
        'resourceSecondaryByte1': 'SecondaryByte1',
        'resourceFlagSecondary2': 'SecondaryFlag2',
        'resourceFlagSecondary3': 'SecondaryFlag3',
        'ResourceChecksumBuffer': 'ChecksumBuffer',
        
        # 函数参数美化
        'objectContext': 'ObjectContext',
        'validationContext': 'ValidationContext',
        'dataLength': 'DataLength',
        'ObjectContext': 'ObjectCtx',
        'ValidationContext': 'ValidationCtx',
        'DataLength': 'DataLen',
    }
    
    # 应用替换
    for old_name, new_name in variable_replacements.items():
        # 使用单词边界来确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已美化文件: {file_path}")
    print(f"替换了 {len(variable_replacements)} 个变量名")

if __name__ == "__main__":
    beautify_utilities_file()