#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
网络模块代码美化脚本
用于美化05_networking.c文件中的变量名和标签名
"""

import re
import sys

def beautify_networking_file():
    """美化网络模块文件"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换规则
    replacements = [
        # 标签名美化
        (r'LAB_18086dffb', 'Label_ConnectionValidationSuccess'),
        (r'LAB_18086e15b', 'Label_ConnectionProcessingComplete'),
        (r'LAB_18086e305', 'Label_ConnectionStatusCheck'),
        (r'LAB_18086e2ac', 'Label_ConnectionStatusValidation'),
        (r'LAB_18086e3eb', 'Label_ConnectionDataProcessed'),
        (r'LAB_18086e594', 'Label_NetworkOperationTimeout'),
        (r'LAB_18086e53b', 'Label_NetworkOperationCheck'),
        (r'LAB_18086e67b', 'Label_NetworkDataProcessed'),
        (r'LAB_18086e82b', 'Label_NetworkProcessingError'),
        (r'LAB_18086e7cb', 'Label_NetworkProcessingValidation'),
        (r'LAB_18086e91b', 'Label_NetworkConnectionEstablished'),
        
        # 变量名美化
        (r'SystemContextPointer', 'NetworkSystemContext'),
        (r'networkSessionIdentifier', 'NetworkSessionId'),
        (r'connectionParameters', 'NetworkConnectionParams'),
        (r'NetworkPacketDataBuffer', 'NetworkPacketBuffer'),
        (r'packetHandle', 'NetworkPacketHandle'),
        (r'ConnectionDetails', 'NetworkConnectionInfo'),
        (r'ConnectionId', 'NetworkConnectionId'),
        (r'PacketInformation', 'NetworkPacketInfo'),
        (r'PacketIndex', 'NetworkPacketIndex'),
        (r'PacketDataTable', 'NetworkPacketTable'),
        (r'PacketDataArray', 'NetworkPacketArray'),
        (r'PacketTableEntry', 'NetworkPacketEntry'),
        (r'ConnectionParameterSeven', 'NetworkConnectionParamSet'),
        (r'NetworkTableIndex', 'NetworkContextTableIndex'),
        (r'NetworkArrayIndex', 'NetworkContextArrayIndex'),
        (r'PacketArrayOffset', 'NetworkPacketArrayOffset'),
        (r'PacketEntry', 'NetworkPacketContext'),
        (r'SecurityValidationData', 'NetworkSecurityContext'),
        (r'connectionParameterCount', 'NetworkConnectionParamCount'),
        (r'NetworkContextIndex', 'NetworkContextDataIndex'),
        (r'NetworkContext', 'NetworkContextData'),
        (r'NetworkContextEntry', 'NetworkContextDataEntry'),
        (r'networkConnectionOperationResult', 'NetworkConnectionOpResult'),
        (r'pProcessingStatus', 'NetworkProcessingStatus'),
        (r'networkConnectionData', 'NetworkConnectionContext'),
        (r'networkContextArray', 'NetworkContextDataArray'),
        (r'NetworkOperationStatus', 'NetworkOpStatusCode'),
        (r'NetworkProcessingResult', 'NetworkProcessResult'),
        
        # 函数调用美化
        (r'FUN_1808b6e80', 'ProcessNetworkPacketEx'),
        (r'FUN_1808dec80', 'ValidateNetworkConnectionEx'),
        
        # 变量名美化（更语义化的名称）
        (r'local_.*', 'localVariable'),
        (r'param_.*', 'parameter'),
        (r'var_.*', 'variable'),
        (r'unk_.*', 'unknownVar'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("网络模块文件美化完成")

if __name__ == "__main__":
    beautify_networking_file()