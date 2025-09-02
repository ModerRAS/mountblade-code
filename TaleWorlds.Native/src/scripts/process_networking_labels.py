#!/usr/bin/env python3
"""
网络模块标签美化脚本
用于批量处理05_networking.c文件中的剩余LAB_标签
"""

import re
import os

def process_networking_labels():
    """处理网络模块中的LAB_标签"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义标签替换映射
    label_mappings = {
        # 连接验证相关标签
        'LAB_18084a1fa': 'ConnectionHandleValidationFinalFailed',
        'LAB_18084a1a4': 'ConnectionHandleSecondaryValidationFailed',
        'LAB_18084a346': 'NetworkConnectionDataValidationFailed',
        'LAB_18084a2ef': 'NetworkConnectionSecondaryValidationFailed',
        'LAB_18084a498': 'NetworkOperationDataValidationFailed',
        'LAB_18084a43e': 'NetworkOperationSecondaryValidationFailed',
        
        # 数据传输相关标签
        'LAB_18084a5ea': 'NetworkDataTransferFailed',
        'LAB_18084a593': 'NetworkDataTransferSecondaryFailed',
        'LAB_18084a73a': 'NetworkPacketTransferFailed',
        'LAB_18084a6e4': 'NetworkPacketTransferSecondaryFailed',
        'LAB_18084a886': 'NetworkStreamTransferFailed',
        'LAB_18084a830': 'NetworkStreamTransferSecondaryFailed',
        
        # 错误处理相关标签
        'LAB_18084a9d2': 'NetworkErrorHandlerFailed',
        'LAB_18084a97c': 'NetworkErrorHandlerSecondaryFailed',
        'LAB_18084ab1e': 'NetworkCleanupFailed',
        'LAB_18084aac8': 'NetworkCleanupSecondaryFailed',
        
        # 状态检查相关标签
        'LAB_18084ac6a': 'NetworkStatusCheckFailed',
        'LAB_18084ac14': 'NetworkStatusSecondaryCheckFailed',
        'LAB_18084adb6': 'NetworkFinalStatusCheckFailed',
        'LAB_18084ad60': 'NetworkFinalStatusSecondaryCheckFailed',
    }
    
    # 应用替换
    for old_label, new_label in label_mappings.items():
        # 处理goto语句
        content = re.sub(rf'goto {old_label}', f'goto {new_label}', content)
        # 处理标签定义
        content = re.sub(rf'{old_label}:', f'{new_label}:', content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功处理网络模块标签美化")
    return True

if __name__ == "__main__":
    process_networking_labels()