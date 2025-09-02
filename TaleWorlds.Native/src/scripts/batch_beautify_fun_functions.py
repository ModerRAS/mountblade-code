#!/usr/bin/env python3
"""
批量替换00_data_definitions.h文件中的FUN_函数为语义化名称
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

def replace_fun_functions(content):
    """替换FUN_函数为语义化名称"""
    
    # 定义FUN_函数的映射关系
    fun_mappings = {
        # 系统配置相关函数
        'FUN_180943090': 'GetNetworkConfigTemplate',
        'FUN_1809430b0': 'GetSystemConfigTemplate',
        'FUN_1806090b0': 'ProcessSystemConfiguration',
        'FUN_180629850': 'ValidateSystemConfiguration',
        'FUN_180627b90': 'CleanupSystemConfiguration',
        'FUN_18064fe90': 'InitializeSystemConfiguration',
        'FUN_180650050': 'SetupSystemConfiguration',
        'FUN_1806500b0': 'GetSystemConfigurationCallback',
        'FUN_180650490': 'AllocateSystemMemory',
        'FUN_1806502e0': 'ConfigureSystemMemory',
        'FUN_18064fcc0': 'FinalizeSystemConfiguration',
        'FUN_18062f1f0': 'ProcessNetworkRequest',
        'FUN_180627340': 'InitializeNetworkConnection',
        'FUN_180626ee0': 'ValidateNetworkConnection',
        'FUN_180631420': 'ProcessNetworkData',
        'FUN_180631780': 'HandleNetworkResponse',
        'FUN_180627ce0': 'FormatNetworkMessage',
        'FUN_180632160': 'SendNetworkMessage',
        'FUN_180627c50': 'EncodeNetworkPacket',
        'FUN_18010cbc0': 'ProcessSystemMemory',
        'FUN_1802c0460': 'AllocateStringMemory',
        'FUN_18064f4b0': 'InitializeExceptionHandling',
        'FUN_1806502e0': 'SetupExceptionHandling',
        'FUN_18064f980': 'StartExceptionMonitoring',
        'FUN_18064e2a0': 'GetSystemModuleHandle',
        'FUN_18064e0d0': 'InitializeSystemModule',
        'FUN_1806470a0': 'StartSystemModule',
        'FUN_1806478d0': 'ConfigureSystemModule',
        'FUN_18062b680': 'ReallocateSystemMemory',
        'FUN_18064d630': 'GetSystemPerformanceData',
        'FUN_1801a9fd0': 'ProcessSystemGraphics',
        'FUN_1801aa0f0': 'RenderSystemGraphics',
        'FUN_180635b80': 'CalculateSystemTransform',
        'FUN_180633110': 'UpdateSystemTransform',
        'FUN_180742250': 'ProcessSystemAudio',
        'FUN_18076a440': 'InitializeAudioDevice',
        'FUN_180769ed0': 'ConfigureAudioDevice',
        'FUN_1808156f0': 'StartAudioProcessing',
        'FUN_180815080': 'StopAudioProcessing',
        'FUN_180815200': 'PauseAudioProcessing',
        'FUN_180742650': 'ProcessAudioStream',
        'FUN_180815ba0': 'FinalizeAudioProcessing',
        'FUN_1807c3d8b': 'HandleAudioEvent',
        'FUN_18084da10': 'AllocateSystemResources',
        'FUN_1808c6dd0': 'InitializeSystemThread',
        'FUN_1808c7400': 'CreateSystemThread',
        'FUN_1808d0850': 'ConfigureSystemThread',
        'FUN_1808ce360': 'StartSystemThread',
        'FUN_1808f1d70': 'MonitorSystemThread',
        'FUN_1808f6cb0': 'GetSystemThreadStatus',
        'FUN_1808f0650': 'ControlSystemThread',
        'FUN_1808ee390': 'StopSystemThread',
        'FUN_1808f6f40': 'ResumeSystemThread',
        'FUN_1808ef250': 'ProcessSystemMessage',
        'FUN_1808f4a70': 'SystemThreadWorker1',
        'FUN_1808f34b0': 'SystemThreadWorker2',
        'FUN_1808f9200': 'InitializeFileSystem',
        'FUN_1808f9de0': 'GetFileSystemHandle',
        'FUN_1808fb790': 'ConfigureFileSystem',
        'FUN_1808fb9a0': 'ProcessFileSystem',
        'FUN_1808fba20': 'WriteFileSystemData',
        'FUN_1808fbae0': 'CleanupFileSystem',
        'FUN_1808fd254': 'FinalizeFileSystem',
        'FUN_1808fd610': 'ValidateFileSystem'
    }
    
    # 执行替换
    for fun_function, semantic_name in fun_mappings.items():
        # 替换函数调用
        content = content.replace(f'{fun_function}(', f'{semantic_name}(')
        # 替换函数指针
        content = content.replace(f'&{fun_function}', f'&{semantic_name}')
        # 替换函数名
        content = content.replace(fun_function, semantic_name)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h'
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换FUN_函数
    new_content = replace_fun_functions(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"成功美化文件: {file_path}")

if __name__ == '__main__':
    main()