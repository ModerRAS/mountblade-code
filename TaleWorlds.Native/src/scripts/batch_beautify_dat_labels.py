#!/usr/bin/env python3
"""
批量替换00_data_definitions.h文件中的DAT_标签为语义化名称
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

def replace_dat_labels(content):
    """替换DAT_标签为语义化名称"""
    
    # 定义DAT_标签的映射关系
    dat_mappings = {
        # 系统状态标志
        'DAT_1809fcc18': 'SystemStatusByte',
        'DAT_180c82853': 'SystemInitializationFlag',
        'DAT_180c82860': 'SystemConfigurationFlag',
        'DAT_180d49178': 'SystemMessageBuffer',
        'DAT_180d49158': 'SystemConfigData',
        'DAT_180d49160': 'SystemConfigPointer',
        'DAT_180d48d40': 'SystemActiveFlag',
        'DAT_180d48d64': 'SystemReadyFlag',
        'DAT_180d48da8': 'SystemRunningFlag',
        'DAT_180d48dac': 'SystemDebugFlag',
        'DAT_180d48daa': 'SystemVerboseFlag',
        'DAT_180d48dab': 'SystemTraceFlag',
        'DAT_180d48e30': 'SystemControlData',
        'DAT_180d49748': 'SystemProcessData',
        'DAT_180d496d0': 'SystemValidationData',
        'DAT_180d48de0': 'SystemModuleTable',
        'DAT_180d499e8': 'SystemLogBuffer',
        'DAT_180d499d0': 'SystemLogData',
        'DAT_180d49c08': 'SystemTempBuffer',
        'DAT_180d49d08': 'SystemConfigBuffer',
        'DAT_180c95bf0': 'SystemMemoryFlag',
        'DAT_180c924d0': 'SystemMemoryData',
        'DAT_180c95fe8': 'SystemThreadFlag',
        'DAT_180c96210': 'SystemProcessFlag',
        'DAT_180c961d8': 'SystemModuleFlag',
        'DAT_180c96080': 'SystemState0',
        'DAT_180c96078': 'SystemState1',
        'DAT_180c96070': 'SystemState2',
        'DAT_180c96050': 'SystemState3',
        'DAT_180c96030': 'SystemState4',
        'DAT_180c96010': 'SystemState5',
        'DAT_180c95ff0': 'SystemState6',
        'DAT_180c95fb8': 'SystemState7',
        'DAT_180c95fb0': 'SystemState8',
        'DAT_180c95fa8': 'SystemState9',
        'DAT_180c95fa0': 'SystemStateA',
        'DAT_180c95f90': 'SystemStateB',
        'DAT_180c95f88': 'SystemStateC',
        'DAT_180c95f80': 'SystemStateD',
        'DAT_180c95f70': 'SystemStateE',
        'DAT_180c95f68': 'SystemStateF',
        'DAT_180c95f64': 'SystemStateG',
        'DAT_180c95f5c': 'SystemStateH',
        'DAT_180c95f58': 'SystemStateI',
        'DAT_180c95f50': 'SystemStateJ',
        'DAT_180c95f48': 'SystemStateK',
        'DAT_180c95f40': 'SystemStateL',
        'DAT_180c95ef0': 'SystemStateM',
        'DAT_180c95ee8': 'SystemStateN',
        'DAT_180c95ee0': 'SystemStateO',
        'DAT_180c95ed8': 'SystemStateP',
        'DAT_180c95ed0': 'SystemStateQ',
        'DAT_180c95ec8': 'SystemStateR',
        'DAT_180c96098': 'SystemStateS',
        'DAT_180c960a0': 'SystemStateT',
        'DAT_180c960b8': 'SystemStateU',
        'DAT_180c82845': 'SystemInitFlag',
        'DAT_180c95fc8': 'SystemStringTable',
        'DAT_180c86920': 'SystemStringData',
        'DAT_180c91d14': 'SystemMemoryCounter',
        'DAT_180c91d18': 'SystemMemoryPointer',
        'DAT_180d49f6c': 'SystemLoopFlag',
        'DAT_180d49f98': 'SystemConfigPath',
        'DAT_180d49f90': 'SystemConfigSize',
        'DAT_180d49f70': 'SystemConfigData',
        'DAT_180d49f80': 'SystemConfigHandle',
        'DAT_180d49fd8': 'SystemTemplateData',
        'DAT_180d49fe0': 'SystemTemplatePointer',
        'DAT_180d49fe8': 'SystemTemplateSize',
        'DAT_180d49ff8': 'SystemTemplateBuffer',
        'DAT_180d49ff0': 'SystemTemplateFlag',
        'DAT_180bf66d8': 'SystemGlobalFlag',
        'DAT_180c96858': 'SystemCallbackPointer',
        'DAT_180bfbd80': 'SystemBufferPointer',
        'DAT_180bfbf64': 'SystemBufferFlag1',
        'DAT_180bfbf60': 'SystemBufferData1',
        'DAT_180bf7308': 'SystemBufferHandle1',
        'DAT_180bfbf7c': 'SystemBufferFlag2',
        'DAT_180bfbf78': 'SystemBufferData2',
        'DAT_180bf72a8': 'SystemBufferHandle2',
        'DAT_180c8efc8': 'SystemNetworkFlag',
        'DAT_180c8ed58': 'SystemModuleData',
        'DAT_180c8ed48': 'SystemModulePointer',
        'DAT_180c95fea': 'SystemPerformanceFlag',
        'DAT_180c8eced': 'SystemDebugFlag2',
        'DAT_180a04ee4': 'SystemDebugData1',
        'DAT_180a12e00': 'SystemDebugData2',
        'DAT_180a03a84': 'SystemDebugData3',
        'DAT_180c8ed64': 'SystemDebugCounter',
        'DAT_180bf664c': 'SystemThreadLocalIndex',
        'DAT_180c8f000': 'SystemSecurityFlag',
        'DAT_180bf66a8': 'SystemSecurityData',
        'DAT_180c8ed80': 'SystemSecurityBuffer',
        'DAT_180d49130': 'SystemSecurityFlag2',
        'DAT_180d49131': 'SystemSecurityFlag3',
        'DAT_180bfbd9c': 'SystemBufferFlag3',
        'DAT_180bfbd98': 'SystemBufferData3',
        'DAT_180bfbdb4': 'SystemBufferFlag4',
        'DAT_180bfbdb0': 'SystemBufferData4',
        'DAT_180bf4b20': 'SystemNetworkData',
        'DAT_180bfbd84': 'SystemDeviceTable',
        'DAT_180c8f020': 'SystemDeviceData',
        'DAT_180c967c8': 'SystemPerformanceCounter',
        'DAT_180d4913c': 'SystemPerformanceFlag2',
        'DAT_1ac76f654': 'SystemChecksumValue',
        'DAT_180c2e030': 'SystemProcessFlag2',
        'DAT_180be5740': 'SystemProcessData',
        'DAT_180c2e978': 'SystemProcessPointer',
        'DAT_180be12f0': 'SystemProcessConfig',
        'DAT_180c30370': 'SystemProcessFlag3',
        'DAT_180c4f4e8': 'SystemProcessBuffer',
        'DAT_180c4f4ac': 'SystemProcessSize',
        'DAT_180c4f4f0': 'SystemProcessData2',
        'DAT_180c4f4a0': 'SystemProcessPointer2',
        'DAT_180c4f818': 'SystemProcessFlag4',
        'DAT_180c58840': 'SystemThreadCounter',
        'DAT_180c58854': 'SystemThreadFlag1',
        'DAT_180c58853': 'SystemThreadFlag2',
        'DAT_180c58855': 'SystemThreadFlag3',
        'DAT_180c58850': 'SystemThreadFlag4',
        'DAT_180c698c0': 'SystemThreadId1',
        'DAT_180c698c8': 'SystemThreadId2',
        'DAT_180c69e20': 'SystemThreadFlag5',
        'DAT_180bf0080': 'SystemFileFlag',
        'DAT_180c69f88': 'SystemFileHandle',
        'DAT_180c69f90': 'SystemFileFunction1',
        'DAT_180c69f98': 'SystemFileFunction2',
        'DAT_180c69fa8': 'SystemFileFunction3',
        'DAT_180c69fd0': 'SystemFileModule',
        'DAT_180c69fd8': 'SystemFileFunction4',
        'DAT_180c69ef8': 'SystemFileFlag2',
        'DAT_180c6a14c': 'SystemFileFlag3',
        'DAT_180c6a14d': 'SystemFileFlag4',
        'DAT_180c6a140': 'SystemFileHandle2',
        'DAT_180c6a148': 'SystemFileSize',
        'DAT_180bf0082': 'SystemFileFlag5',
        'DAT_180c821d8': 'SystemCleanupFlag',
        'DAT_180c821d9': 'SystemCleanupFlag2',
        'DAT_180bf00a8': 'SystemCleanupData',
        'DAT_180c821e0': 'SystemCleanupData1',
        'DAT_180c821e8': 'SystemCleanupData2',
        'DAT_180c821f0': 'SystemCleanupData3',
        'DAT_180c821f8': 'SystemCleanupData4',
        'DAT_180c82200': 'SystemCleanupData5',
        'DAT_180c82208': 'SystemCleanupData6',
        'DAT_180c91d50': 'SystemCleanupFlag3',
        'DAT_180bfc100': 'SystemCleanupCounter1',
        'DAT_180bfc170': 'SystemCleanupCounter2',
        'DAT_180c95ef0': 'SystemCleanupFlag4',
        'DAT_180c96008': 'SystemCleanupFlag5',
        'DAT_180c96028': 'SystemCleanupFlag6',
        'DAT_180c96048': 'SystemCleanupFlag7',
        'DAT_180c96068': 'SystemCleanupFlag8',
        'DAT_180c96098': 'SystemCleanupFlag9',
        'DAT_180c960b8': 'SystemCleanupFlag10',
        'DAT_180c96100': 'SystemCleanupFlag11',
        'DAT_180c96140': 'SystemCleanupFlag12',
        
        # 字符串常量
        'DAT_180a06998': 'SystemMessageFormat',
        'DAT_180a06990': 'SystemMemoryFormat',
        'DAT_180a069a8': 'SystemConfigFormat',
        'DAT_180a069a0': 'SystemTempFormat',
        'DAT_180a3c074': 'SystemLogFormat',
        'DAT_180a06a48': 'SystemNetworkFormat',
        'DAT_180a0ba58': 'SystemProcessFormat',
        
        # 全局变量
        '_DAT_00000010': 'GlobalModulePointer',
        '_DAT_00000000': 'GlobalSystemTable',
        '_DAT_00000008': 'GlobalSystemState',
        'DAT_1dc4331ba': 'GlobalChecksum',
        '_DAT_180c8ece0': 'GlobalModuleConfig',
        '_DAT_180c91d18': 'GlobalMemoryManager',
        '_DAT_180c91d08': 'GlobalMemoryPool',
        '_DAT_180bfbf64': 'GlobalBufferFlag',
        '_DAT_180bfbf60': 'GlobalBufferData',
        '_DAT_180bf7308': 'GlobalBufferHandle',
        '_DAT_180bfbf7c': 'GlobalBufferFlag2',
        '_DAT_180bfbf78': 'GlobalBufferData2',
        '_DAT_180bf72a8': 'GlobalBufferHandle2',
        '_DAT_180c8ed58': 'GlobalModuleData',
        '_DAT_180c8ed48': 'GlobalModulePointer',
        '_DAT_180bf664c': 'GlobalThreadIndex',
        '_DAT_180bfbd9c': 'GlobalBufferFlag3',
        '_DAT_180bfbd98': 'GlobalBufferData3',
        '_DAT_180bfbdb4': 'GlobalBufferFlag4',
        '_DAT_180bfbdb0': 'GlobalBufferData4',
        '_DAT_180c967c8': 'GlobalPerformanceCounter',
        '_DAT_180c2e978': 'GlobalProcessPointer',
        '_DAT_180c69f88': 'GlobalFileHandle',
        '_DAT_180c69f90': 'GlobalFileFunction1',
        '_DAT_180c69f98': 'GlobalFileFunction2',
        '_DAT_180c69fa8': 'GlobalFileFunction3',
        '_DAT_180c69fd0': 'GlobalFileModule',
        '_DAT_180c69fd8': 'GlobalFileFunction4',
        '_DAT_180c6a140': 'GlobalFileHandle2',
        '_DAT_180bf00a8': 'GlobalCleanupData',
        '_DAT_180c821e0': 'GlobalCleanupData1',
        '_DAT_180c821e8': 'GlobalCleanupData2',
        '_DAT_180c821f0': 'GlobalCleanupData3',
        '_DAT_180c821f8': 'GlobalCleanupData4',
        '_DAT_180c82200': 'GlobalCleanupData5',
        '_DAT_180c82208': 'GlobalCleanupData6'
    }
    
    # 执行替换
    for dat_label, semantic_name in dat_mappings.items():
        # 替换 &DAT_ 格式
        content = content.replace(f'&{dat_label}', f'&{semantic_name}')
        # 替换 DAT_ 格式
        content = content.replace(dat_label, semantic_name)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h'
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换DAT_标签
    new_content = replace_dat_labels(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"成功美化文件: {file_path}")

if __name__ == '__main__':
    main()