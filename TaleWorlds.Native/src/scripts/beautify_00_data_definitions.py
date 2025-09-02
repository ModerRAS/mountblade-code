#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
变量美化脚本
用于将00_data_definitions.h文件中的简单变量名替换为语义化名称
"""

import re
import sys
import os

def beautify_variables():
    """执行变量美化"""
    
    # 读取源文件
    source_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    
    with open(source_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量替换映射
    variable_mappings = {
        # 系统配置验证缓冲区
        '_DAT_180c69fd8': 'SystemConfigurationValidationBuffer',
        'DAT_180c69fd8': 'SystemConfigurationValidationBuffer',
        
        # 文件系统相关变量
        '_DAT_180c6a140': 'FileSystemHandle',
        'DAT_180c6a140': 'FileSystemHandle',
        
        # 文件系统状态变量
        '_DAT_180c6a148': 'FileSystemStatusCounter',
        'DAT_180c6a148': 'FileSystemStatusCounter',
        
        # 文件系统标志变量
        'DAT_180c6a14c': 'FileSystemOperationFlag',
        'DAT_180c6a14d': 'FileSystemValidationFlag',
        
        # 系统安全相关变量
        '_DAT_180bf00a8': 'SystemSecurityMask',
        'DAT_180bf00a8': 'SystemSecurityMask',
        
        # 系统初始化相关变量
        '_DAT_180c821e0': 'SystemInitializationBuffer',
        'DAT_180c821e0': 'SystemInitializationBuffer',
        '_DAT_180c821e8': 'SystemInitializationBuffer',
        'DAT_180c821e8': 'SystemInitializationBuffer',
        '_DAT_180c821f0': 'SystemInitializationBuffer',
        'DAT_180c821f0': 'SystemInitializationBuffer',
        '_DAT_180c821f8': 'SystemInitializationBuffer',
        'DAT_180c821f8': 'SystemInitializationBuffer',
        '_DAT_180c82200': 'SystemInitializationBuffer',
        'DAT_180c82200': 'SystemInitializationBuffer',
        '_DAT_180c82208': 'SystemInitializationBuffer',
        'DAT_180c82208': 'SystemInitializationBuffer',
        
        # 系统初始化标志
        'DAT_180c821d8': 'SystemInitializationFlag',
        'DAT_180c821d9': 'SystemInitializationCompleteFlag',
        
        # 系统字符串处理标志
        'DAT_180bf0082': 'SystemStringProcessingFlag',
        
        # 系统缓冲区指针
        'UNK_18098b490': 'SystemBufferPointer',
        'UNK_18098b470': 'SystemBufferPointer',
        
        # 系统缓冲区变量
        'DAT_180bfc100': 'SystemBufferFlag',
        'DAT_180bfc170': 'SystemBufferStatus',
        
        # 系统字符串缓冲区
        'DAT_180c91d50': 'SystemStringBufferFlag',
        'DAT_180c96008': 'SystemStringBufferFlag8',
        'DAT_180c96028': 'SystemStringBufferFlag28',
        'DAT_180c96048': 'SystemStringBufferFlag48',
        'DAT_180c96068': 'SystemStringBufferFlag68',
        'DAT_180c96098': 'SystemStringBufferFlag98',
        'DAT_180c960b8': 'SystemStringBufferFlagB8',
        'DAT_180c96100': 'SystemStringBufferFlag100',
        'DAT_180c96140': 'SystemStringBufferFlag140',
        'DAT_180c95ef0': 'SystemStringBufferFlagEF0',
        # 长整型变量
        'lVar2': 'LocalVariable2',
        'lVar3': 'LocalVariable3', 
        'lVar4': 'LocalVariable4',
        'lVar5': 'LocalVariable5',
        'lVar6': 'LocalVariable6',
        'lVar7': 'LocalVariable7',
        'lVar8': 'LocalVariable8',
        'lVar9': 'LocalVariable9',
        'lVar10': 'LocalVariable10',
        'lVar11': 'LocalVariable11',
        'lVar12': 'LocalVariable12',
        'lVar13': 'LocalVariable13',
        'lVar14': 'LocalVariable14',
        'lVar15': 'LocalVariable15',
        'lVar16': 'LocalVariable16',
        'lVar17': 'LocalVariable17',
        'lVar18': 'LocalVariable18',
        'lVar19': 'LocalVariable19',
        'lVar20': 'LocalVariable20',
        'lVar21': 'LocalVariable21',
        
        # 整型变量
        'iVar3': 'IntegerVariable3',
        'iVar5': 'IntegerVariable5',
        'iVar7': 'IntegerVariable7',
        'iVar8': 'IntegerVariable8',
        
        # 无符号整型变量
        'uVar6': 'UnsignedVariable6',
        'uVar7': 'UnsignedVariable7',
        'uVar8': 'UnsignedVariable8',
        'uVar9': 'UnsignedVariable9',
        
        # 字符型变量
        'cVar1': 'CharacterVariable1',
        'cVar2': 'CharacterVariable2',
        'cVar3': 'CharacterVariable3',
        'cVar4': 'CharacterVariable4',
        'cVar5': 'CharacterVariable5',
        'cVar6': 'CharacterVariable6',
        'cVar7': 'CharacterVariable7',
        'cVar8': 'CharacterVariable8',
        'cVar9': 'CharacterVariable9',
        'cVar10': 'CharacterVariable10',
        'cVar11': 'CharacterVariable11',
        'cVar12': 'CharacterVariable12',
        'cVar13': 'CharacterVariable13',
        'cVar14': 'CharacterVariable14',
        'cVar15': 'CharacterVariable15',
        'cVar16': 'CharacterVariable16',
        
        # 栈变量 - 指针类型
        'puStack_28': 'StackPointer28',
        'puStack_30': 'StackPointer30',
        'puStack_38': 'StackPointer38',
        'puStack_40': 'StackPointer40',
        'puStack_48': 'StackPointer48',
        'puStack_50': 'StackPointer50',
        'puStack_58': 'StackPointer58',
        'puStack_60': 'StackPointer60',
        'puStack_70': 'StackPointer70',
        'puStack_90': 'StackPointer90',
        'puStack_98': 'StackPointer98',
        'puStack_110': 'StackPointer110',
        'puStack_118': 'StackPointer118',
        'puStack_138': 'StackPointer138',
        'puStack_140': 'StackPointer140',
        'puStack_1b8': 'StackPointer1b8',
        'puStack_198': 'StackPointer198',
        'puStack_218': 'StackPointer218',
        'puStack_238': 'StackPointer238',
        
        # 栈变量 - 长整型
        'lStack_20': 'StackLong20',
        'lStack_28': 'StackLong28',
        'lStack_68': 'StackLong68',
        'lStack_d0': 'StackLongd0',
        'lStack_90': 'StackLong90',
        'lStack_210': 'StackLong210',
        'lStack_230': 'StackLong230',
        
        # 栈变量 - 整型
        'iStack_20': 'StackInteger20',
        'iStack_40': 'StackInteger40',
        'iStack_60': 'StackInteger60',
        
        # 栈变量 - 无符号长整型
        'uStack_58': 'StackUnsignedLong58',
        'uStack_100': 'StackUnsignedLong100',
        'uStack_a8': 'StackUnsignedLonga8',
        'uStack_d8': 'StackUnsignedLongd8',
        'uStack_98': 'StackUnsignedLong98',
        'uStack_208': 'StackUnsignedLong208',
        'uStack_228': 'StackUnsignedLong228',
        'uStack_2b0': 'StackUnsignedLong2b0',
        'uStack_20': 'StackUnsignedLong20',
        'uStackX_10': 'StackUnsignedLongX10',
        'uStackX_8': 'StackUnsignedLongX8',
        
        # 栈变量 - 字符型
        'in_stack_00000070': 'StackCharacter00000070',
        
        # 其他变量
        'in_EAX': 'RegisterEAX',
        'in_R11D': 'RegisterR11D',
        'in_RAX': 'RegisterRAX',
        'in_stack_00000070': 'StackParameter00000070',
        'unaff_RBP': 'UnaffectedRegisterRBP',
        'unaff_RDI': 'UnaffectedRegisterRDI',
        'unaff_EDI': 'UnaffectedRegisterEDI',
        'unaff_R14D': 'UnaffectedRegisterR14D',
        
        # 特殊变量
        'LoopCounter': 'LoopCounter',
        'LoopCounterValue': 'LoopCounterValue',
        'LoopCounter7': 'LoopCounter7',
        'LoopCounter8': 'LoopCounter8',
        'LoopCounter9': 'LoopCounter9',
        'StringIndex': 'StringIndex',
        'BufferSize': 'BufferSize',
        'BufferSize1': 'BufferSize1',
        'MemoryAddress': 'MemoryAddress',
        'MemoryAddress0': 'MemoryAddress0',
        'MemoryAddress1': 'MemoryAddress1',
        'MemoryAddress3': 'MemoryAddress3',
        'MemoryAddress4': 'MemoryAddress4',
        'MemoryAddress6': 'MemoryAddress6',
        'MemoryAddress7': 'MemoryAddress7',
        'total_elements': 'TotalElements',
        'processed_elements': 'ProcessedElements',
        'batch_processed_elements': 'BatchProcessedElements',
        
        # 结果变量
        'InitializationResult': 'InitializationResult',
        'StringProcessingResult': 'StringProcessingResult',
        'MemoryAllocationResult': 'MemoryAllocationResult',
        'NetworkRequestResult': 'NetworkRequestResult',
        'ModuleInitializationResult0': 'ModuleInitializationResult0',
        'ModuleInitializationResult5': 'ModuleInitializationResult5',
        'SystemStateValue': 'SystemStateValue',
        'SystemValidationStatus': 'SystemValidationStatus',
        'CallbackResult': 'CallbackResult',
        'StringSearchResult': 'StringSearchResult',
        
        # 函数参数和局部变量
        'MemoryPointerArray': 'MemoryPointerArray',
        'StringSearchResult': 'StringSearchResult',
        'GetMemoryAllocationSize': 'GetMemoryAllocationSize',
        'InitializeDataBuffer': 'InitializeDataBuffer',
        'ProcessBufferData': 'ProcessBufferData',
        
        # 其他特殊变量
        'SystemStringDataConstantE': 'SystemStringDataConstantE',
        'SystemConfigDataTemplateCB48': 'SystemConfigDataTemplateCB48',
        'SystemConfigDataTemplateCB80': 'SystemConfigDataTemplateCB80',
        'SystemConfigDataTemplateCB90': 'SystemConfigDataTemplateCB90',
        'SystemConfigDataTemplateCB60': 'SystemConfigDataTemplateCB60',
        'SystemConfigDataTemplateCB70': 'SystemConfigDataTemplateCB70',
        'SystemConfigDataTemplateCBE0': 'SystemConfigDataTemplateCBE0',
        'SystemConfigDataTemplateCBF0': 'SystemConfigDataTemplateCBF0',
        'SystemConfigDataTemplateCBA8': 'SystemConfigDataTemplateCBA8',
        
        # 系统配置字符串模板
        'SystemConfigStringTemplateA': 'SystemConfigStringTemplateA',
        'SystemConfigStringTemplateB': 'SystemConfigStringTemplateB',
        'SystemConfigStringTemplateC': 'SystemConfigStringTemplateC',
        'SystemConfigStringTemplateD': 'SystemConfigStringTemplateD',
        'SystemConfigStringTemplateE': 'SystemConfigStringTemplateE',
        'SystemConfigStringTemplateF': 'SystemConfigStringTemplateF',
        'SystemConfigStringTemplateG': 'SystemConfigStringTemplateG',
        'SystemConfigStringTemplateH': 'SystemConfigStringTemplateH',
        'SystemConfigStringTemplateI': 'SystemConfigStringTemplateI',
        'SystemConfigStringTemplateJ': 'SystemConfigStringTemplateJ',
        'SystemConfigStringTemplateK': 'SystemConfigStringTemplateK',
        'SystemConfigStringTemplateL': 'SystemConfigStringTemplateL',
        'SystemConfigStringTemplateM': 'SystemConfigStringTemplateM',
        'SystemConfigStringTemplateN': 'SystemConfigStringTemplateN',
        'SystemConfigStringTemplateO': 'SystemConfigStringTemplateO',
        'SystemConfigStringTemplateP': 'SystemConfigStringTemplateP',
        'SystemConfigStringTemplateQ': 'SystemConfigStringTemplateQ',
        'SystemConfigStringTemplateR': 'SystemConfigStringTemplateR',
        'SystemConfigStringTemplateS': 'SystemConfigStringTemplateS',
        'SystemConfigStringTemplateT': 'SystemConfigStringTemplateT',
        'SystemConfigStringTemplateU': 'SystemConfigStringTemplateU',
        'SystemConfigStringTemplateV': 'SystemConfigStringTemplateV',
        'SystemConfigStringTemplateW': 'SystemConfigStringTemplateW',
        'SystemConfigStringTemplateX': 'SystemConfigStringTemplateX',
        
        # 未知数据指针
        'UNK_1809fd318': 'UnknownDataPointer1809fd318',
        'UNK_1809fd328': 'UnknownDataPointer1809fd328',
        'UNK_1809fd340': 'UnknownDataPointer1809fd340',
        
        # 系统内存池
        'SystemMemoryPool': 'SystemMemoryPool',
        
        # 全局变量
        'g_stringProcessorDataPointerD': 'GlobalStringProcessorDataPointerD',
        'g_stringProcessorConfigPointerD': 'GlobalStringProcessorConfigPointerD',
        'g_stringProcessorBufferSizeD': 'GlobalStringProcessorBufferSizeD',
        'STRING_PROCESSOR_CONFIG_D': 'StringProcessorConfigD',
        'g_configDataBufferSizeA': 'GlobalConfigDataBufferSizeA',
        'g_configDataPointerA': 'GlobalConfigDataPointerA',
        'g_configDataPointerB': 'GlobalConfigDataPointerB',
        'g_configDataPointerC': 'GlobalConfigDataPointerC',
        'g_configDataPointerD': 'GlobalConfigDataPointerD',
        'g_configDataPointerE': 'GlobalConfigDataPointerE',
        'g_configDataPointerF': 'GlobalConfigDataPointerF',
        'g_configDataPointerG': 'GlobalConfigDataPointerG',
        'g_configDataPointerH': 'GlobalConfigDataPointerH',
        'g_stringProcessorJ_Base': 'GlobalStringProcessorJBase',
        
        # 配置数据缓冲区
        'CONFIG_DATA_BUFFER_A': 'ConfigDataBufferA',
        'CONFIG_DATA_BUFFER_B': 'ConfigDataBufferB',
        'CONFIG_DATA_BUFFER_C': 'ConfigDataBufferC',
        'CONFIG_DATA_BUFFER_D': 'ConfigDataBufferD',
        
        # 系统配置缓冲区
        'SystemConfigBufferA': 'SystemConfigBufferA',
        'SystemConfigBufferB': 'SystemConfigBufferB',
        'SystemConfigBufferC': 'SystemConfigBufferC',
        'SystemConfigBufferD': 'SystemConfigBufferD',
        'SystemConfigBufferE': 'SystemConfigBufferE',
        'SystemConfigBufferF': 'SystemConfigBufferF',
        'SystemConfigBufferG': 'SystemConfigBufferG',
        'SystemConfigBufferH': 'SystemConfigBufferH',
        'SystemConfigBufferI': 'SystemConfigBufferI',
        'SystemConfigBufferJ': 'SystemConfigBufferJ',
        
        # 系统配置字符串缓冲区
        'SystemConfigStringBufferA': 'SystemConfigStringBufferA',
        'SystemConfigStringBufferB': 'SystemConfigStringBufferB',
        'SystemConfigStringBufferC': 'SystemConfigStringBufferC',
        'SystemConfigStringBufferD': 'SystemConfigStringBufferD',
        'SystemConfigStringBufferE': 'SystemConfigStringBufferE',
        'SystemConfigStringBufferF': 'SystemConfigStringBufferF',
        'SystemConfigStringBufferG': 'SystemConfigStringBufferG',
        'SystemConfigStringBufferH': 'SystemConfigStringBufferH',
        'SystemConfigStringBufferI': 'SystemConfigStringBufferI',
        'SystemConfigStringBufferJ': 'SystemConfigStringBufferJ',
        'SystemConfigStringBufferK': 'SystemConfigStringBufferK',
        'SystemConfigStringBufferL': 'SystemConfigStringBufferL',
        'SystemConfigStringBufferM': 'SystemConfigStringBufferM',
        'SystemConfigStringBufferN': 'SystemConfigStringBufferN',
        'SystemConfigStringBufferO': 'SystemConfigStringBufferO',
        'SystemConfigStringBufferV': 'SystemConfigStringBufferV',
        'SystemConfigStringBufferW': 'SystemConfigStringBufferW',
        'SystemConfigStringBufferX': 'SystemConfigStringBufferX',
        
        # 系统配置数据大小
        'SystemConfigDataSizePrimary': 'SystemConfigDataSizePrimary',
        'SystemConfigDataSizeSecondary': 'SystemConfigDataSizeSecondary',
        'SystemConfigDataSizeTertiary': 'SystemConfigDataSizeTertiary',
        'SystemConfigDataSizeQuaternary': 'SystemConfigDataSizeQuaternary',
        'SystemConfigDataSizeF': 'SystemConfigDataSizeF',
        'SystemConfigDataSizeG': 'SystemConfigDataSizeG',
        'SystemConfigDataSizeH': 'SystemConfigDataSizeH',
        'SystemConfigDataSizeI': 'SystemConfigDataSizeI',
        'SystemConfigDataSizeJ': 'SystemConfigDataSizeJ',
        'SystemConfigDataSizeK': 'SystemConfigDataSizeK',
        'SystemConfigDataSizeL': 'SystemConfigDataSizeL',
        'SystemConfigDataSizeM': 'SystemConfigDataSizeM',
        'SystemConfigDataSizeN': 'SystemConfigDataSizeN',
        'SystemConfigDataSizeO': 'SystemConfigDataSizeO',
        'SystemConfigDataSizeP': 'SystemConfigDataSizeP',
        'SystemConfigDataSizeQ': 'SystemConfigDataSizeQ',
        'SystemConfigDataSizeR': 'SystemConfigDataSizeR',
        'SystemConfigDataSizeS': 'SystemConfigDataSizeS',
        'SystemConfigDataSizeT': 'SystemConfigDataSizeT',
        'SystemConfigDataSizeU': 'SystemConfigDataSizeU',
        'SystemConfigDataSizeV': 'SystemConfigDataSizeV',
        'SystemConfigDataSizeW': 'SystemConfigDataSizeW',
        'SystemConfigDataSizeX': 'SystemConfigDataSizeX',
        
        # 系统配置数据指针
        'SystemConfigDataPointerPrimary': 'SystemConfigDataPointerPrimary',
        'SystemConfigDataPointerSecondary': 'SystemConfigDataPointerSecondary',
        'SystemConfigDataPointerTertiary': 'SystemConfigDataPointerTertiary',
        'SystemConfigDataPointerQuaternary': 'SystemConfigDataPointerQuaternary',
        'SystemConfigDataPointerQuinary': 'SystemConfigDataPointerQuinary',
        'SystemConfigDataPointerSenary': 'SystemConfigDataPointerSenary',
        'SystemConfigDataPointerSeptenary': 'SystemConfigDataPointerSeptenary',
        'SystemConfigDataPointerOctonary': 'SystemConfigDataPointerOctonary',
        'SystemConfigDataPointerF': 'SystemConfigDataPointerF',
        'SystemConfigDataPointerG': 'SystemConfigDataPointerG',
        'SystemConfigDataPointerH': 'SystemConfigDataPointerH',
        'SystemConfigDataPointerI': 'SystemConfigDataPointerI',
        'SystemConfigDataPointerJ': 'SystemConfigDataPointerJ',
        'SystemConfigDataPointerK': 'SystemConfigDataPointerK',
        'SystemConfigDataPointerL': 'SystemConfigDataPointerL',
        'SystemConfigDataPointerM': 'SystemConfigDataPointerM',
        'SystemConfigDataPointerN': 'SystemConfigDataPointerN',
        'SystemConfigDataPointerO': 'SystemConfigDataPointerO',
        'SystemConfigDataPointerP': 'SystemConfigDataPointerP',
        'SystemConfigDataPointerQ': 'SystemConfigDataPointerQ',
        'SystemConfigDataPointerR': 'SystemConfigDataPointerR',
        'SystemConfigDataPointerS': 'SystemConfigDataPointerS',
        'SystemConfigDataPointerT': 'SystemConfigDataPointerT',
        'SystemConfigDataPointerU': 'SystemConfigDataPointerU',
        'SystemConfigDataPointerV': 'SystemConfigDataPointerV',
        'SystemConfigDataPointerW': 'SystemConfigDataPointerW',
        'SystemConfigDataPointerX': 'SystemConfigDataPointerX',
        'SystemConfigDataPointerY': 'SystemConfigDataPointerY',
        'SystemConfigDataPointerZ': 'SystemConfigDataPointerZ',
        'SystemConfigDataPointerAA': 'SystemConfigDataPointerAA',
        'SystemConfigDataPointerAB': 'SystemConfigDataPointerAB',
        'SystemConfigDataPointerAC': 'SystemConfigDataPointerAC',
        'SystemConfigDataPointerAD': 'SystemConfigDataPointerAD',
        'SystemConfigDataPointerAE': 'SystemConfigDataPointerAE',
        'SystemConfigDataPointerAF': 'SystemConfigDataPointerAF',
        'SystemConfigDataPointerAG': 'SystemConfigDataPointerAG',
        'SystemConfigDataPointerAH': 'SystemConfigDataPointerAH',
        'SystemConfigDataPointerAI': 'SystemConfigDataPointerAI',
        'SystemConfigDataPointerAJ': 'SystemConfigDataPointerAJ',
        'SystemConfigDataPointerAK': 'SystemConfigDataPointerAK',
        'SystemConfigDataPointerAL': 'SystemConfigDataPointerAL',
        'SystemConfigDataPointerAM': 'SystemConfigDataPointerAM',
        'SystemConfigDataPointerAN': 'SystemConfigDataPointerAN',
        'SystemConfigDataPointerAO': 'SystemConfigDataPointerAO',
        'SystemConfigDataPointerAP': 'SystemConfigDataPointerAP',
        'SystemConfigDataPointerAQ': 'SystemConfigDataPointerAQ',
        'SystemConfigDataPointerAR': 'SystemConfigDataPointerAR',
        'SystemConfigDataPointerAS': 'SystemConfigDataPointerAS',
        
        # 系统配置数据地址
        'SystemConfigDataAddressV': 'SystemConfigDataAddressV',
        'SystemConfigDataAddressW': 'SystemConfigDataAddressW',
        'SystemConfigDataAddressX': 'SystemConfigDataAddressX',
        'SystemConfigDataAddressY': 'SystemConfigDataAddressY',
        'SystemConfigDataAddressZ': 'SystemConfigDataAddressZ',
        'SystemConfigDataAddressAA': 'SystemConfigDataAddressAA',
        
        # 系统互斥锁地址
        'SystemMutexAddressA': 'SystemMutexAddressA',
        
        # 系统模块入口点
        'SystemModuleEntryPointA': 'SystemModuleEntryPointA',
        
        # 系统全局数据模板
        'SystemGlobalDataTemplateA': 'SystemGlobalDataTemplateA'
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in variable_mappings.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open(source_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功美化 {source_file} 中的变量名")
        return True
    else:
        print("没有找到需要美化的变量名")
        return False

if __name__ == "__main__":
    beautify_variables()