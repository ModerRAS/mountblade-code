#!/usr/bin/env python3
"""
批量替换网络模块中的LAB_标签
"""

import re

def create_replacement_map():
    """创建LAB_标签的替换映射"""
    replacements = {
        # 连接检查相关的标签
        'LAB_1808469dd': 'NetworkConnectionCheckStart',
        'LAB_180846d91': 'NetworkConnectionValidateHandle',
        'LAB_180846df9': 'NetworkConnectionCheckSecondary',
        
        # 数据处理相关的标签
        'LAB_18084749d': 'NetworkDataProcessStart',
        'LAB_1808477fa': 'NetworkDataValidatePrimary',
        'LAB_180847bfb': 'NetworkDataCheckTerminator',
        'LAB_180847c35': 'NetworkDataProcessSecondary',
        'LAB_180847dc9': 'NetworkDataContextCheck',
        'LAB_180847d83': 'NetworkDataContextValidate',
        
        # 传输相关的标签
        'LAB_180848016': 'NetworkTransferValidateHandle',
        'LAB_180847fc4': 'NetworkTransferCheckSecondary',
        'LAB_180848132': 'NetworkTransferConnectionId',
        'LAB_18084820e': 'NetworkTransferCheckStatus',
        'LAB_1808483a6': 'NetworkTransferValidatePrimary',
        'LAB_180848354': 'NetworkTransferCheckSecondary',
        
        # 验证相关的标签
        'LAB_1808490b9': 'NetworkValidationComplete',
        'LAB_1808491ce': 'NetworkValidationSkip',
        'LAB_1808492e6': 'NetworkValidationHandleCheck',
        'LAB_180849294': 'NetworkValidationSecondaryCheck',
        'LAB_180849462': 'NetworkValidationPrimaryCheck',
        'LAB_1808494eb': 'NetworkValidationDataPointer',
        'LAB_180849553': 'NetworkValidationHandleResult',
        
        # 状态相关的标签
        'LAB_180849763': 'NetworkStatusSecondaryCheck',
        'LAB_1808498c8': 'NetworkStatusPrimaryCheck',
        'LAB_1808499fb': 'NetworkStatusTimeoutCheck',
        'LAB_180849ad3': 'NetworkStatusBufferCheck',
        'LAB_180849c81': 'NetworkStatusSecurityCheck',
        'LAB_180849c22': 'NetworkStatusTransferCheck',
        
        # 数据缓冲区相关的标签
        'LAB_180849dd1': 'NetworkBufferValidateFirst',
        'LAB_180849e6f': 'NetworkBufferTertiaryCheck',
        'LAB_180849fd1': 'NetworkBufferValidateSecond',
        'LAB_18084a06f': 'NetworkBufferTertiaryCheck',
        
        # 连接句柄相关的标签
        'LAB_18084a1fa': 'NetworkHandleValidateFirst',
        'LAB_18084a1a4': 'NetworkHandleSecondaryCheck',
        'LAB_18084a346': 'NetworkHandleValidateSecond',
        'LAB_18084a2ef': 'NetworkHandleSecondaryCheck',
        
        # 操作数据相关的标签
        'LAB_18084a498': 'NetworkOperationDataCheck',
        'LAB_18084a43e': 'NetworkOperationSecondaryCheck',
        'LAB_18084a608': 'NetworkOperationValidateFirst',
        'LAB_18084a5b3': 'NetworkOperationSecondaryCheck',
        
        # 主要操作状态相关的标签
        'LAB_18084a719': 'NetworkOperationPrimaryFirst',
        'LAB_18084a83e': 'NetworkOperationPrimarySecond',
        'LAB_18084a986': 'NetworkOperationValidateSecond',
        'LAB_18084a92f': 'NetworkOperationSecondaryCheck',
        'LAB_18084aad6': 'NetworkOperationValidateThird',
        'LAB_18084aa7f': 'NetworkOperationSecondaryCheck',
    }
    
    # 为其他标签生成通用名称
    for i in range(0xac3, 0xffff):
        addr = f'18084{i:03x}'
        if addr not in replacements:
            replacements[f'LAB_{addr}'] = f'NetworkControl_{addr[6:]}'
    
    return replacements

def beautify_networking_file():
    """美化网络模块文件"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 创建替换映射
    replacement_map = create_replacement_map()
    
    # 执行替换
    for old_label, new_label in replacement_map.items():
        content = content.replace(old_label, new_label)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换了 {len(replacement_map)} 个LAB_标签")

if __name__ == '__main__':
    beautify_networking_file()