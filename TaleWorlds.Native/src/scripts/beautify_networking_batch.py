#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def beautify_networking_functions():
    """批量美化05_networking.c文件中的函数名"""
    
    # 函数名映射字典
    FUNCTION_MAPPINGS = {
        'FUN_180887280': 'ProcessNetworkConnectionDataTransferSeventhInstance',
        'FUN_180887980': 'ProcessNetworkConnectionDataTransferEighthInstance',
        'FUN_180888080': 'ProcessNetworkConnectionDataTransferNinthInstance',
        'FUN_180888b00': 'ProcessNetworkConnectionDataTransferTenthInstance',
        'FUN_180889900': 'ProcessNetworkConnectionDataTransferEleventhInstance',
        'FUN_18088e700': 'ProcessNetworkDataStream',
        'FUN_18088ad30': 'ProcessNetworkConnectionData',
        'FUN_18088ac50': 'ValidateNetworkConnectionStatus',
        'FUN_18088a270': 'GetNetworkConnectionValidationStatus',
        'FUN_18088aee0': 'ValidateNetworkPacketData',
        'FUN_18088af30': 'ProcessNetworkConnectionDataTransfer',
        'FUN_18088cee0': 'SendNetworkTimeoutNotification',
        'FUN_18088c1b0': 'ValidateNetworkConnectionParameters',
        'FUN_18088c290': 'GetNetworkConnectionHandleFirstInstance',
        'FUN_18088c390': 'GetNetworkConnectionHandleSecondInstance',
        'FUN_18088c401': 'GetNetworkConnectionHandleThirdInstance',
        'FUN_18088c449': 'GetNetworkConnectionHandleFourthInstance',
        'FUN_18088c4ba': 'GetNetworkConnectionHandleFifthInstance',
        'FUN_18088c4ea': 'GetNetworkConnectionHandleSixthInstance',
        'FUN_18088c7c0': 'ProcessNetworkConnectionValidation',
        'FUN_18088ca20': 'InitializeNetworkContextArray',
        'FUN_18088cae0': 'ProcessConnectionContextQueue',
        'FUN_18088cbb0': 'GetNetworkConnectionData',
        'FUN_18088ccd0': 'CleanupConnectionStatusType5',
        'FUN_18088cd80': 'CleanupConnectionContextFinal',
        'FUN_18088cf2e': 'GetNetworkConnectionHandleSeventhInstance',
        'FUN_18088d0c0': 'ReleaseNetworkResource1',
        'FUN_18088e6d0': 'CleanupNetworkConnectionResources',
        'FUN_18088e892': 'GetNetworkConnectionHandleEighthInstance',
        'FUN_18088e970': 'ProcessNetworkPacketConditionalExecution',
        'FUN_18088ea60': 'ProcessConnectionParameterStatus',
        'FUN_18088eb60': 'ValidateNetworkConnectionData',
        'FUN_18088ef0e': 'GetNetworkConnectionHandleNinthInstance',
        'FUN_18088efaa': 'GetNetworkConnectionHandleTenthInstance',
        'FUN_18088efe0': 'ValidateNetworkConnectionSecurityContext',
        'FUN_18088f06b': 'ValidateNetworkSecurityContext',
        'FUN_18088f0f7': 'InitializeNetworkSystemConfiguration',
        'FUN_18088f530': 'ProcessNetworkConnectionFirstInstance',
        'FUN_18088f54e': 'GetNetworkConnectionHandleEleventhInstance',
        'FUN_18088f59d': 'EmptyNetworkOperation',
        'FUN_18088f5a8': 'GetNetworkConstantValue',
        'FUN_18088f5c0': 'ProcessNetworkConnectionDataSecondInstance',
        'FUN_18088f620': 'ProcessNetworkConnectionThirdInstance',
        'FUN_18088f643': 'GetNetworkConnectionHandleTwelfthInstance',
        'FUN_18088f6f7': 'ProcessNetworkConnectionFourthInstance',
        'FUN_18088fa00': 'ProcessNetworkConnectionFifthInstance',
        'FUN_18088fa22': 'ProcessNetworkConnectionSixthInstance',
        'FUN_18088fd22': 'ValidateNetworkConnectionFirstInstance',
        'FUN_18088fd3d': 'ValidateNetworkConnectionSecondInstance',
        'FUN_18088fd59': 'GetNetworkConnectionHandleThirteenthInstance',
        'FUN_18088fd75': 'GetNetworkConnectionHandleFourteenthInstance',
        'FUN_18088fdb0': 'ProcessNetworkConnectionSeventhInstance',
        'FUN_18088fdce': 'GetNetworkConnectionHandleFifteenthInstance',
        'FUN_18088fe51': 'NetworkSystemNoOperation',
        'FUN_18088fe60': 'ProcessNetworkConnectionEighthInstance',
        'FUN_18088fea0': 'ProcessNetworkConnectionNinthInstance',
        'FUN_18088febe': 'GetNetworkConnectionHandleSixteenthInstance',
        'FUN_18088fedd': 'ProcessNetworkConnectionTenthInstance',
        'FUN_18088ff94': 'ValidateConnectionIndexAndStatus',
        'FUN_18088fb40': 'ProcessNetworkTimeoutOperation',
        'FUN_18088d720': 'ProcessNetworkConnectionContextData',
        'FUN_18088ed70': 'ProcessNetworkDataBuffer',
        'FUN_18088c970': 'ValidateNetworkContextData'
    }
    
    # 读取文件
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换函数定义
    for old_name, new_name in FUNCTION_MAPPINGS.items():
        # 替换函数定义
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已美化文件: {file_path}")

if __name__ == "__main__":
    beautify_networking_functions()