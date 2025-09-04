#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
99_unmatched_functions.c 文件美化脚本
用于将 FUN_、UNK_、DAT_ 前缀的变量名和函数名转换为 PascalCase
"""

import re
import sys

def beautify_file(file_path):
    """美化指定的C文件"""
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    print(f"开始美化文件: {file_path}")
    
    # 1. 美化 FUN_ 函数名
    fun_replacements = {
        'FUN_18062b8b0': 'MemoryAllocationManager',
        'FUN_180628ca0': 'StringBufferAllocator',
        'FUN_18005ce30': 'DataBufferProcessor',
        'FUN_18009eae0': 'StringFormatHandler',
        'FUN_1800b4910': 'XmlDataProcessor',
        'FUN_1800b08e0': 'ResourceHandler',
        'FUN_180058080': 'ArrayIterator',
        'FUN_180075030': 'DataStreamProcessor',
        'FUN_180628d60': 'StringIndexer',
        'FUN_18005e890': 'ResourceAccessor',
        'FUN_180095000': 'XmlElementProcessor',
        'FUN_1800c1420': 'XmlFormatter',
        'FUN_1800b1230': 'DataValidator',
        'FUN_180094e80': 'ResourceInitializer',
        'FUN_1800763c0': 'ResourceFinalizer',
        'FUN_1800b31f0': 'StringComposer',
        'FUN_1800c0750': 'ContextInitializer',
        'FUN_1800c2d60': 'StringProcessor',
        'FUN_1800c3070': 'DataFormatter',
        'FUN_1800c2ab0': 'ElementProcessor',
        'FUN_1802c1260': 'ResourceLoader',
        'FUN_18009e9e0': 'StringCreator',
        'FUN_180299eb0': 'TextFormatter',
        'FUN_1800946d0': 'BufferManager',
        'FUN_1802c8dc0': 'ContextProcessor',
        'FUN_1800bd5c0': 'DataOrganizer',
        'FUN_1800b2450': 'ResourceBuilder',
        'FUN_18023a940': 'SystemContextProvider',
        'FUN_180081480': 'SystemDataAllocator',
        'FUN_1800b90a0': 'DefaultStringProvider',
        'FUN_1800b7b50': 'XmlProcessingFunction',
        'FUN_1800b8cdb': 'XmlCleanupFunction',
        'FUN_1800b8ce0': 'XmlResetFunction',
        'FUN_1800b9a8e': 'SystemInitialization',
        'FUN_1800b9e60': 'XmlDataFormatter',
        'FUN_1800b9f60': 'XmlFloatProcessor',
        'FUN_1800ba100': 'XmlContextCleaner',
        'FUN_1800ba168': 'XmlResourceCleaner',
        'FUN_1800ba180': 'XmlMemoryCleaner',
        'FUN_1800ba1b0': 'XmlBufferCleaner',
        'FUN_1800ba290': 'XmlArrayCleaner',
        'FUN_1800baa80': 'XmlUndefinedCleaner',
        'FUN_1800babf0': 'XmlUndefinedProcessor',
        'FUN_1800bc460': 'XmlElementCleaner',
        'FUN_1800bcab0': 'XmlUndefinedElementProcessor',
        'FUN_1800bdaf0': 'XmlDataHandler',
        'FUN_1800be440': 'XmlContextHandler',
        'FUN_1800be9a0': 'XmlStringHandler',
        'FUN_1800befa0': 'XmlFormatHandler',
        'FUN_1800bf050': 'XmlOutputHandler',
        'FUN_1800bf2a0': 'XmlBufferHandler',
        'FUN_1800bf6c0': 'XmlStreamHandler',
        'FUN_1800c0100': 'XmlResourceHandler',
        'FUN_1800c03c0': 'XmlDataProcessor',
        'FUN_1800c0570': 'XmlDataCleaner',
        'FUN_1800c0830': 'XmlSystemCleaner',
        'FUN_1800c0ad0': 'XmlFormatProcessor',
        'FUN_1800c0c20': 'XmlBufferProcessor',
        'FUN_1800c0da0': 'XmlElementDataProcessor',
        'FUN_1800c12e0': 'XmlTextProcessor',
        'FUN_1800c1420': 'XmlElementFormatter',
        'FUN_1800c1520': 'XmlStringFormatter',
        'FUN_1800c1670': 'XmlDataFormatter',
        'FUN_1800c1750': 'XmlIntFormatter',
        'FUN_1800c18f0': 'XmlUndefinedFormatter',
        'FUN_1800c19c0': 'XmlElementFormatter',
        'FUN_1800c19f0': 'XmlElementFormatter',
        'FUN_1800c1a20': 'XmlElementFormatter',
        'FUN_1800c1a80': 'SystemFinalizer',
        'FUN_1800c26d0': 'XmlUndefinedFunction',
        'FUN_1800c2970': 'XmlDataFunction',
        'FUN_1800c29fa': 'SystemStatusFunction',
        'FUN_1800c2a70': 'XmlElementFormatter',
        'FUN_1800c2ca0': 'XmlUndefinedFormatter',
        'FUN_1800c2ff0': 'XmlUndefinedFormatter',
        'FUN_1800c3240': 'XmlDataFormatter',
        'FUN_1800c3320': 'XmlDataFormatter',
        'FUN_1800c33e0': 'XmlContextCleaner',
        'FUN_1800c3730': 'SystemCleaner',
        'FUN_1800c3761': 'XmlUndefinedCleaner',
        'FUN_1800c37dd': 'XmlUndefinedCleaner',
        'FUN_1800c37f0': 'XmlContextCleaner',
        'FUN_1800c3bf0': 'XmlArrayCleaner',
        'FUN_1800c3c70': 'SystemMemoryCleaner',
        'FUN_1800c4620': 'XmlValidator',
        'FUN_1800c4720': 'XmlDataValidator',
        'FUN_1800c47c0': 'XmlContextValidator',
        'FUN_1800c4800': 'XmlFormatValidator',
        'FUN_1800c4960': 'XmlElementValidator',
        'FUN_1800c4da0': 'XmlResourceValidator',
        'FUN_1800c5020': 'XmlDataValidator',
        'FUN_1800c5600': 'XmlUndefinedValidator',
        'FUN_1800c6320': 'XmlUndefinedFormatter',
        'FUN_1800c6910': 'XmlUndefinedFormatter',
        'FUN_1800c78b0': 'XmlUndefinedFormatter',
        'FUN_1800c78fc': 'XmlDataFormatter',
        'FUN_1800c7ab5': 'SystemInitializer',
        'FUN_1800c7b10': 'XmlUndefinedFormatter',
        'FUN_1800c7cb0': 'XmlUndefinedFormatter',
        'FUN_1800c8190': 'XmlUndefinedFormatter',
        'FUN_1800c89a0': 'XmlUndefinedFormatter',
        'FUN_1800c9eb0': 'XmlUndefinedFormatter',
        'FUN_1800ca380': 'XmlUndefinedFormatter',
        'FUN_1800cbd80': 'XmlUndefinedFormatter',
        'FUN_1800cbddb': 'XmlContextCleaner',
        'FUN_1800cbeef': 'SystemFinalizer',
        'FUN_1800cbf90': 'XmlUndefinedFormatter',
        'FUN_1800cd1b0': 'XmlUndefinedFormatter',
        'FUN_1800cd350': 'XmlUndefinedFormatter',
        'FUN_1800cd410': 'XmlUndefinedFormatter',
        'FUN_1800cd7d0': 'XmlUndefinedFormatter',
        'FUN_1800cfb40': 'XmlUndefinedFormatter',
        'FUN_1800cfee0': 'XmlUndefinedFormatter',
        'FUN_1800d0950': 'XmlUndefinedFormatter',
    }
    
    # 2. 美化 UNK_ 变量名
    unk_replacements = {
        'UNK_180a01620': 'DefaultXmlContext',
        'UNK_180a028c8': 'DxgiFactoryInterface',
        'UNK_180a02718': 'DxgiFactoryInterfaceAlt',
        'UNK_180a02728': 'DxgiFactoryInterfaceAlt2',
        'UNK_180a026e0': 'NetworkContextString',
        'UNK_180a026d0': 'SecurityContextString',
        'UNK_180a026c0': 'ValidationContextString',
        'UNK_180a025d0': 'SystemErrorMessage',
        'UNK_180a01928': 'DefaultMessageString',
        'UNK_1809fcc28': 'XmlProcessingBuffer',
        'UNK_180a018e0': 'NetworkErrorMessage',
        'UNK_180a019a0': 'ValidationErrorMessage',
        'UNK_180a01940': 'SecurityErrorMessage',
        'UNK_180a019f8': 'ProcessingErrorMessage',
        'UNK_180a01a28': 'AuthenticationErrorMessage',
        'UNK_180a01a78': 'NetworkStatusErrorMessage',
        'UNK_180a01aa8': 'XmlErrorMessage',
        'UNK_180a01ba0': 'XmlSecurityErrorMessage',
        'UNK_180a01b40': 'XmlProcessingErrorMessage',
        'UNK_180a01c00': 'ResourceErrorMessage',
        'UNK_180a01cb0': 'MemoryErrorMessage',
        'UNK_180a02490': 'DataErrorMessage',
        'UNK_180a024f0': 'ConfigurationErrorMessage',
        'UNK_180a023e0': 'SystemStateErrorMessage',
        'UNK_180a02548': 'ResourceStringConstant',
        'UNK_180a0253c': 'ConfigurationStringConstant',
        'UNK_180a02560': 'StatusStringConstant',
        'UNK_180a02558': 'ContextStringConstant',
        'UNK_180a02580': 'ErrorStringConstant',
        'UNK_180a0256c': 'MemoryStringConstant',
        'UNK_1809fd0a0': 'SystemMessageFormat',
        'UNK_180a01db8': 'XmlProcessingString',
        'UNK_180a01df0': 'XmlValidationString',
        'UNK_180a01e30': 'XmlEntityString',
        'UNK_180a01e80': 'XmlAttributeString',
        'UNK_180a01ee0': 'XmlCommentString',
        'UNK_180a01f30': 'XmlCDataString',
        'UNK_180a01de0': 'XmlDeclarationString',
        'UNK_180a01e40': 'XmlDoctypeString',
        'UNK_180a01ed0': 'XmlElementString',
        'UNK_180a01f70': 'XmlTextString',
        'UNK_180a02954': 'XmlFormatPattern',
        'UNK_180a01ff8': 'XmlEntityReference',
        'UNK_180a01ff0': 'XmlEntityData',
        'UNK_180a01fc0': 'XmlEntityPattern',
        'UNK_180a02200': 'XmlEntityAmp',
        'UNK_180a02228': 'XmlEntityQuot',
        'UNK_180a02238': 'XmlEntityLt',
        'UNK_180a02248': 'XmlEntityGt',
        'UNK_180a02270': 'XmlEntityApos',
        'UNK_180a02218': 'XmlEntityU',
        'UNK_180a02258': 'XmlEntityA',
        'UNK_180a02290': 'XmlEntityM',
        'UNK_180a022a0': 'XmlEntityP',
        'UNK_180a022b8': 'XmlEntityL',
        'UNK_180a022d8': 'XmlEntityG',
        'UNK_180a02280': 'XmlEntityS',
        'UNK_180a02060': 'XmlAttributeId',
        'UNK_180a02158': 'XmlAttributeClass',
        'UNK_180a02628': 'XmlAttributeStyle',
        'UNK_180a01d04': 'XmlAttributeHref',
        'UNK_180a01cfc': 'XmlAttributeXmlns',
        'UNK_180a01d24': 'XmlAttributeXlink',
        'UNK_180a01d0c': 'XmlAttributeXmlLang',
        'UNK_180a01d1c': 'XmlAttributeXmlSpace',
        'UNK_180a01d14': 'XmlAttributeEncoding',
        'UNK_180a17458': 'ResourceDataPointer',
        'UNK_180a17010': 'ResourceHandlePointer',
        'UNK_18098bc00': 'MemoryPoolAddress',
        'UNK_180a02968': 'XmlContextPointer',
        'UNK_180a028e8': 'XmlFormatString',
        'UNK_180a028d8': 'XmlFormatTemplate',
        'UNK_180a028f8': 'XmlFormatSpecifier',
        'UNK_180a02918': 'XmlFormatPrecision',
        'UNK_180a02908': 'XmlFormatWidth',
        'UNK_180a02940': 'XmlFormatFloat',
        'UNK_180a02928': 'XmlFormatInteger',
        'UNK_180a02998': 'XmlFormatDefault',
        'UNK_180a02e68': 'XmlRootElement',
        'UNK_180a21720': 'XmlDocumentElement',
        'UNK_180a21690': 'XmlProcessingInstruction',
        'UNK_180a029b0': 'XmlContextDefault',
        'UNK_18098b928': 'XmlDefaultContext',
        'UNK_1809feda8': 'XmlStackBuffer',
        'UNK_1800adc10': 'SystemEventCallback',
        'UNK_1800adcc0': 'SystemMemoryAllocator',
        'UNK_180084660': 'SystemValidationFunction',
        'UNK_1800a1660': 'SystemDispatchTable',
        'UNK_18009ee10': 'SystemFileLockFunction',
        'UNK_18009edf0': 'SystemFileUnlockFunction',
        'UNK_180a030b8': 'XmlProcessingBuffer',
        'UNK_180a030c0': 'XmlFormatBuffer',
        'UNK_180a030d8': 'XmlTemplateBuffer',
        'UNK_180a030f8': 'XmlSpecifierBuffer',
        'UNK_180a03140': 'XmlPrecisionBuffer',
        'UNK_180a03150': 'XmlWidthBuffer',
        'UNK_180a03540': 'XmlDefaultBuffer',
        'UNK_180a035e0': 'XmlRootBuffer',
        'UNK_180a03638': 'XmlDocumentBuffer',
        'UNK_180a03688': 'XmlProcessingBuffer',
        'UNK_180a03670': 'XmlInstructionBuffer',
        'UNK_180a03650': 'XmlContextBuffer',
    }
    
    # 3. 美化 DAT_ 变量名
    dat_replacements = {
        'DAT_180c82868': 'SystemMemoryContext',
        'DAT_180c8aa50': 'ResourceContextHandle',
        'DAT_180c8aa08': 'XmlContextHandle',
        'DAT_180c86938': 'ComponentDataPointer',
        'DAT_180c86890': 'SystemDataArray',
        'DAT_180bf5210': 'StringDataBuffer',
        'DAT_180bf5218': 'StringDataLength',
        'DAT_1809fc8e4': 'StringSearchPattern',
        'DAT_1809fc7ec': 'StringFormatPattern',
        'DAT_180a02638': 'XmlAttributeData',
        'DAT_180a02640': 'XmlAttributeInfo',
        'DAT_180a02644': 'XmlAttributeValue',
        'DAT_180a02648': 'XmlAttributeType',
        'DAT_180a0264c': 'XmlAttributeNamespace',
        'DAT_180a0263c': 'XmlAttributePrefix',
        'DAT_180a06430': 'XmlFormatTemplate',
        'DAT_180c8a998': 'SystemDataAllocator',
        'DAT_180c86930': 'XmlDataProcessor',
    }
    
    # 执行替换
    original_content = content
    
    # 替换 FUN_ 函数名
    for old_name, new_name in fun_replacements.items():
        content = content.replace(old_name, new_name)
    
    # 替换 UNK_ 变量名
    for old_name, new_name in unk_replacements.items():
        content = content.replace(old_name, new_name)
    
    # 替换 DAT_ 变量名
    for old_name, new_name in dat_replacements.items():
        content = content.replace(old_name, new_name)
    
    # 保存美化后的文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    # 统计替换次数
    fun_count = sum(original_content.count(old_name) for old_name in fun_replacements.keys())
    unk_count = sum(original_content.count(old_name) for old_name in unk_replacements.keys())
    dat_count = sum(original_content.count(old_name) for old_name in dat_replacements.keys())
    
    print(f"美化完成！")
    print(f"FUN_ 函数名替换: {fun_count} 处")
    print(f"UNK_ 变量名替换: {unk_count} 处")
    print(f"DAT_ 变量名替换: {dat_count} 处")
    print(f"总计替换: {fun_count + unk_count + dat_count} 处")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("使用方法: python beautify_99_functions.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    beautify_file(file_path)