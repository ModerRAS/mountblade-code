#!/usr/bin/env python3
"""
替换网络模块中的LAB_标签为语义化标签
"""

import re

def replace_labels_in_file():
    """替换文件中的LAB_标签"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换规则
    replacements = {
        # 连接检查相关
        'LAB_1808469dd': 'NetworkConnectionCheckStart',
        'LAB_180846d91': 'NetworkConnectionValidateHandle',
        'LAB_180846df9': 'NetworkConnectionCheckSecondary',
        
        # 数据处理相关
        'LAB_18084749d': 'NetworkDataProcessStart',
        'LAB_1808477fa': 'NetworkDataValidatePrimary',
        'LAB_180847bfb': 'NetworkDataCheckTerminator',
        'LAB_180847c35': 'NetworkDataProcessSecondary',
        'LAB_180847dc9': 'NetworkDataContextCheck',
        'LAB_180847d83': 'NetworkDataContextValidate',
        
        # 传输相关
        'LAB_180848016': 'NetworkTransferValidateHandle',
        'LAB_180847fc4': 'NetworkTransferCheckSecondary',
        'LAB_180848132': 'NetworkTransferConnectionId',
        'LAB_18084820e': 'NetworkTransferCheckStatus',
        'LAB_1808483a6': 'NetworkTransferValidatePrimary',
        'LAB_180848354': 'NetworkTransferCheckSecondary',
        
        # 验证相关
        'LAB_1808490b9': 'NetworkValidationComplete',
        'LAB_1808491ce': 'NetworkValidationSkip',
        'LAB_1808492e6': 'NetworkValidationHandleCheck',
        'LAB_180849294': 'NetworkValidationSecondaryCheck',
        'LAB_180849462': 'NetworkValidationPrimaryCheck',
        'LAB_1808494eb': 'NetworkValidationDataPointer',
        'LAB_180849553': 'NetworkValidationHandleResult',
        
        # 状态相关
        'LAB_180849763': 'NetworkStatusSecondaryCheck',
        'LAB_1808498c8': 'NetworkStatusPrimaryCheck',
        'LAB_1808499fb': 'NetworkStatusTimeoutCheck',
        'LAB_180849ad3': 'NetworkStatusBufferCheck',
        'LAB_180849c81': 'NetworkStatusSecurityCheck',
        'LAB_180849c22': 'NetworkStatusTransferCheck',
    }
    
    # 执行替换
    for old_label, new_label in replacements.items():
        content = content.replace(old_label, new_label)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换了 {len(replacements)} 个LAB_标签")

if __name__ == '__main__':
    replace_labels_in_file()