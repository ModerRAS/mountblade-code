#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的DAT_变量
"""

import re

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_dat_variables(content):
    # 查找所有DAT_变量的定义
    dat_pattern = r'undefined (DAT_[0-9a-fA-F]{8});'
    
    # 替换DAT_变量为更有意义的名称
    replacements = {
        # 系统配置相关
        'DAT_180a00410': 'SystemConfigurationBuffer',
        'DAT_180a009f0': 'SystemConfigDataTable',
        'DAT_180a00c80': 'SystemConfigRuntimeData',
        'DAT_180a00c90': 'SystemConfigValidationData',
        'DAT_180a00ef8': 'SystemConfigMetadata',
        'DAT_180a01228': 'SystemConfigStateData',
        'DAT_180a012e0': 'SystemConfigProcessingData',
        'DAT_180a012f0': 'SystemConfigBufferPointer',
        
        # 系统状态相关
        'DAT_180c8aa50': 'SystemStatusTable',
        'DAT_180a02638': 'SystemStateData',
        'DAT_180a0263c': 'SystemStateFlags',
        'DAT_180a02640': 'SystemStateContext',
        'DAT_180a02644': 'SystemStateProcessor',
        'DAT_180a02648': 'SystemStateQueue',
        'DAT_180a0264c': 'SystemStateHandler',
        'DAT_180a06430': 'SystemStateController',
        
        # 内存管理相关
        'DAT_180c8a9b8': 'MemoryAllocationTable',
        'DAT_180a02fe8': 'MemoryPoolData',
        'DAT_180a035c0': 'MemoryBufferPointer',
        'DAT_180a036e0': 'MemoryAllocationStatus',
        'DAT_180c86970': 'MemoryManagementData',
        'DAT_180a03870': 'MemoryStackPointer',
        'DAT_180a038d8': 'MemoryHeapData',
        'DAT_180a035d0': 'MemoryAllocationTracker',
        'DAT_180c86978': 'MemoryPageTable',
        'DAT_180c8695c': 'MemorySegmentData',
        'DAT_180c86968': 'MemoryAllocationMap',
        
        # 系统数据相关
        'DAT_180a03e88': 'SystemDataTable',
        'DAT_180a03ec0': 'SystemDataBuffer',
        'DAT_180a03f00': 'SystemDataContext',
        'DAT_180a03f58': 'SystemDataProcessor',
        'DAT_18098d7b0': 'SystemDataController',
        'DAT_180a00320': 'SystemDataManager',
        
        # 网络相关
        'DAT_180c91198': 'NetworkStatusFlag',
        'DAT_180c8aa40': 'NetworkConnectionTable',
        'DAT_180c8aa58': 'NetworkPacketBuffer',
        
        # 字符和编码相关
        'DAT_180bfc049': 'CharacterEncodingFlag',
        'DAT_180a04a78': 'StringEncodingData',
        'DAT_180a03a84': 'CharacterTableData',
        'DAT_180a3f880': 'StringBufferPointer',
        'DAT_180a3f8f0': 'StringEncodingTable',
        'DAT_180a063b4': 'CharacterMappingData',
        
        # 系统运行时相关
        'DAT_180c8a9a8': 'SystemRuntimeData',
        'DAT_180c82862': 'SystemRuntimeFlags',
        'DAT_180c8ed80': 'SystemRuntimeContext',
        'DAT_180a08120': 'SystemRuntimeProcessor',
        'DAT_180a089e8': 'SystemRuntimeHandler',
        'DAT_180a00300': 'SystemRuntimeManager',
        'DAT_180a0ba20': 'SystemRuntimeController',
        
        # 原有的映射
        'DAT_180a0d5b8': 'DefaultStringConstant1',
        'DAT_180a0d5d0': 'DefaultStringConstant2', 
        'DAT_180a0e020': 'CompressionAlgorithmTable',
        'DAT_180a0ce08': 'EncryptionKeyTable',
        'DAT_180a0cf7c': 'SystemConfigData',
        'DAT_180a0cfc8': 'MemoryAllocationTable',
        'DAT_180c8aa20': 'NetworkProtocolTable',
        'DAT_1809fd7c8': 'GraphicsShaderData',
        'DAT_180c8aa28': 'AudioBufferTable',
        'DAT_1809fd518': 'InputMappingTable',
        'DAT_180a083b4': 'PhysicsMaterialTable',
        'DAT_180a089c4': 'AnimationDataTable',
        'DAT_180a0e8a0': 'UiLayoutTable',
        'DAT_180a0eb68': 'LocalizationStringTable',
        'DAT_180c8aa30': 'SaveGameFormatTable',
        'DAT_180c8aa38': 'MultiplayerConfigTable',
        'DAT_180a0f804': 'AchievementSystemTable',
        'DAT_180c8aa48': 'DlcContentTable',
        'DAT_180c91cf8': 'ModSupportTable',
        'DAT_180c91d00': 'DebugSystemTable',
    }
    
    # 应用替换
    for old_name, new_name in replacements.items():
        content = content.replace(f'undefined {old_name};', f'undefined {new_name};')
        content = content.replace(f'&{old_name}', f'&{new_name}')
        content = content.replace(old_name, new_name)
    
    return content

def main():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    content = read_file(filepath)
    
    # 美化DAT_变量
    content = beautify_dat_variables(content)
    
    write_file(filepath, content)
    print("DAT_变量美化完成")

if __name__ == "__main__":
    main()