#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

# 函数重命名映射表
function_rename_map = {
    'FUN_18086acf0': 'ValidateEncryptionEx',
    'FUN_18086ab10': 'ProcessSecurityPacketEx',
    'FUN_18086c290': 'ProcessConnectionContextHandler',
    'FUN_18086b2d0': 'ProcessConnectionDataTransfer',
    'FUN_18086b8b0': 'ValidateConnectionIntegrity',
    'FUN_180869d10': 'ProcessConnectionDataValidation',
    'FUN_18086be90': 'ProcessConnectionDataTransfer',
    'FUN_18086c670': 'InitializeConnectionPool',
    'FUN_18086c870': 'ProcessPacketTransferEx',
    'FUN_18086d070': 'ProcessConnectionContextHandler',
    'FUN_18086ce70': 'InitializeConnectionStackBuffer',
    'FUN_18086a710': 'ConnectionValidate',
    'FUN_18086d270': 'ProcessConnectionPacketTransferSecondInstance',
    'FUN_18086a510': 'ProcessConnectionPacketValidation',
    'FUN_180869f10': 'ProcessConnectionPacketTransmission',
    'FUN_18086ca70': 'ProcessConnectionDataValidation',
    'FUN_18086aed0': 'OptimizeNetworkPerformance',
    'FUN_180869b10': 'ProcessConnectionPacketTransfer',
    'FUN_18086b6b0': 'ProcessConnectionContext',
    'FUN_18086c470': 'CleanupConnectionHandler',
    'FUN_18086c090': 'ProcessConnectionSecurityValidation',
    'FUN_18086a110': 'ProcessConnectionPacketValidation',
    'FUN_18086b4b0': 'ProcessPacketArray',
    'FUN_18086a910': 'MonitorConnectionStatus',
    'FUN_18086bc90': 'ProcessConnectionPacketValidation',
    'FUN_18086ba90': 'MonitorConnectionPerformance',
    'FUN_18086a310': 'ProcessConnectionDataTransferOperation',
    'FUN_18086b0d0': 'ProcessConnectionDataTransfer',
    'FUN_18086cc70': 'ValidateConnectionState'
}

def replace_function_calls(content):
    """替换函数调用"""
    for old_name, new_name in function_rename_map.items():
        # 替换函数调用
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 replace_function_calls.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 替换函数调用
        new_content = replace_function_calls(content)
        
        if new_content != content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            print(f"Successfully replaced function calls in {file_path}")
        else:
            print(f"No function calls to replace in {file_path}")
    
    except Exception as e:
        print(f"Error processing {file_path}: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()