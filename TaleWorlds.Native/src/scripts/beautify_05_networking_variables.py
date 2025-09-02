#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换05_networking.c文件中的变量名
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

def replace_variables(content):
    """替换变量名"""
    replacements = {
        # 变量名替换
        r'\baContextArrayBuffer\b': 'NetworkContextArrayBuffer',
        r'\bnetworkConnectionnetworkDataBuffer\b': 'NetworkConnectionDataBuffer',
        r'\bContextBuffer\b': 'NetworkContextBuffer',
        r'\bContextBufferArray\b': 'NetworkContextBufferArray',
        r'\bContextBufferPointer\b': 'NetworkContextBufferPointer',
        r'\bConnectionHandlePrimary\b': 'PrimaryConnectionHandle',
        r'\bConnectionHandlePrimaryBuffer\b': 'PrimaryConnectionHandleBuffer',
        r'\bConnectionHandleArray\b': 'ConnectionHandleBuffer',
        r'\bNetworkPrimaryHandle\b': 'PrimaryNetworkHandle',
        r'\bnetworkSecurityContextData\b': 'NetworkSecurityContext',
        r'\bSecurityBufferArray\b': 'NetworkSecurityBuffer',
        r'\bNetworkProcessingStartTime\b': 'NetworkProcessingOffset',
        r'\bNetworkPrimaryStatus\b': 'NetworkPrimaryStatusCode',
        r'\bNetworkOperationResult\b': 'NetworkOperationStatusCode',
        r'\bNetworkConnectionBufferValidationFailed\b': 'NetworkConnectionBufferValidationFailure',
        r'\bNetworkOperationTertiaryFinalFailed\b': 'NetworkOperationTertiaryFailure',
        r'\bNetworkBufferValidationFinalFailed\b': 'NetworkBufferValidationFailure',
        r'\bConnectionHandleFinalValidationFailed\b': 'ConnectionHandleFinalFailure',
        r'\bConnectionHandleSecondaryValidationFailed\b': 'ConnectionHandleSecondaryFailure',
        r'\bpNetworkStackBufferSecurity8\b': 'NetworkSecurityStackBuffer',
        r'\bNetworkStatusBuffer\b': 'NetworkStatusCodeBuffer',
        r'\bNetworkBufferTemplate\b': 'NetworkBufferConfigurationTemplate',
        r'\bProtocolTemplate\b': 'NetworkProtocolTemplate',
        r'\bNetworkConfigurationTemplate\b': 'NetworkProtocolConfigurationTemplate',
        r'\bNetworkIterationCounter\b': 'NetworkProcessingIterationCounter',
        r'\bContextArrayOctonary\b': 'NetworkContextOctonaryArray',
        r'\bContextArraySenary\b': 'NetworkContextSenaryArray',
        r'\bNetworkContextInitialArray\b': 'NetworkContextInitialBuffer',
        r'\bNetworkContextSeptenaryArray\b': 'NetworkContextSeptenaryBuffer',
        r'\bConnectionParameter\b': 'NetworkConnectionParameter',
        r'\bdataPointer1\b': 'NetworkDataPointer',
        r'\bNetworkContextData78\b': 'NetworkContextProcessingOffset',
        r'\bNetworkContextData2B8\b': 'NetworkContextHandleBuffer',
        r'\bNetworkContextData2A0\b': 'NetworkContextOffsetBuffer',
        r'\bpnetworkSecurityContextData8\b': 'NetworkSecurityContextDataPointer',
        r'\bNetworkStatusData27C\b': 'NetworkSecurityStatusCode',
        r'\bnetworkConnectionDataLow0\b': 'NetworkConnectionLowByteData',
        r'\bNetworkConnectionData2D0\b': 'NetworkConnectionStatusData',
        r'\bNetworkConnectionData2D8\b': 'NetworkConnectionConfigData',
        r'\bNetworkConnectionData2E0\b': 'NetworkConnectionParameterData',
        r'\bNetworkConnectionData2E8\b': 'NetworkConnectionAttributeData',
        r'\bNetworkConnectionData2F0\b': 'NetworkConnectionPropertyData',
        r'\bNetworkConnectionData2F8\b': 'NetworkConnectionMetadata',
        r'\bnetworkDataBuffer278\b': 'NetworkSecurityDataBuffer',
        r'\bnetworkContextPointer\b': 'NetworkContextIndex',
        r'\bnetworkConnectionDataLow8\b': 'NetworkConnectionLowByteStructure',
        r'\bnetworkContextArray3\b': 'NetworkContextTertiaryArray',
        r'\bnetworkconnectionStatusBuffer298\b': 'NetworkConnectionStatusBuffer',
        r'\bNetworkProcessingStartTime3\b': 'NetworkProcessingOffsetTertiary',
        r'\bValidationStatus4\b': 'ValidationStatusCodeTertiary',
        r'\bextraout_XMM0_Qa_03\b': 'NetworkContextParameterTertiary',
        r'\bextraout_XMM0_Qa_04\b': 'NetworkContextParameterQuaternary',
        r'\bnetworkPacketFlags\b': 'NetworkPacketFlagData',
        r'\bValidationStatus3\b': 'ValidationStatusCodeSecondary',
        r'\bpConnectionHandlePacket\b': 'ConnectionHandlePacketData',
        r'\bConnectionBuffer\b': 'NetworkConnectionBuffer',
        r'\bNetworkConnectionOperationResult\b': 'NetworkConnectionOperationStatusCode',
        r'\bnet\b': 'NetworkContextSecondary',
        r'\bStackPacketDataLow\b': 'NetworkPacketDataLow',
        r'\bStackPacketDataHigh\b': 'NetworkPacketDataHigh',
        r'\bStackValidation2\b': 'NetworkValidationSecondary',
        r'\bnetworkConnectionFlags\b': 'NetworkConnectionFlagData',
        r'\bvalidationData\b': 'NetworkValidationData',
        r'\bNetworkValidationStatus\b': 'NetworkValidationStatusCode',
        r'\bData2\b': 'NetworkByteData',
        r'\bnetworkContextArray\b': 'NetworkContextArray',
        r'\bNetworkConnectionTable\b': 'NetworkConnectionHandleTable',
        r'\bConnectionTableOffset\b': 'ConnectionTableBufferOffset',
        r'\bContextPointer\b': 'NetworkContextPointer',
        r'\bSecondPhaseStatus\b': 'NetworkSecondPhaseStatusCode',
        r'\bcumulativeProcessedSize\b': 'NetworkCumulativeProcessedSize',
        r'\bsecondProcessingOffset\b': 'NetworkSecondaryProcessingOffset',
        r'\bfirstProcessingOffset\b': 'NetworkPrimaryProcessingOffset',
        r'\bSecondaryProcessedSize\b': 'NetworkSecondaryProcessedSize',
        r'\bNetworkConnectionOffset\b': 'NetworkConnectionBufferOffset',
        r'\bnetworkTransferConfigStatus\b': 'NetworkTransferConfigurationStatus',
        r'\bdualValidationStatus\b': 'NetworkDualValidationStatus',
        r'\bisValidConnection\b': 'ConnectionValidityStatus',
        r'\bpProcessingStatus\b': 'NetworkProcessingStatusPointer',
        r'\bConnectionFlagsBuffer\b': 'NetworkConnectionFlagBuffer',
        r'\bPacketTemplateBuffer\b': 'NetworkPacketTemplateBuffer',
        r'\bpNetworkContext\b': 'NetworkContextPointer',
        r'\bNetworkContextSecondaryArray\b': 'NetworkContextSecondaryBuffer',
        r'\bConnectionValidator\b': 'NetworkConnectionValidator',
        r'\bConnectionValidationConfig\b': 'NetworkConnectionValidationConfiguration',
        r'\bConnectionTemplate\b': 'NetworkConnectionTemplate',
        r'\bNetworkOperationResultPointer\b': 'NetworkOperationStatusPointer',
        r'\bSecurityContext\b': 'NetworkSecurityContext',
        r'\bnetworkContext\b': 'NetworkContextHandle',
        r'\bNetworkContextParameter\b': 'NetworkContextParameterData',
        r'\bnetworkConnectionHandle\b': 'NetworkConnectionHandleArray',
        r'\bConnectionParameter\b': 'NetworkConnectionParameter',
        r'\bnetworkContextIterator\b': 'NetworkContextIterator',
        r'\bSecurityValidationData\b': 'NetworkSecurityValidationData',
        r'\bnetworkConnectionData\b': 'NetworkConnectionBufferData',
        r'\bSecurityGuardCleanup\b': 'NetworkSecurityGuardCleanup',
        r'\bnetworkSecurityContextArray\b': 'NetworkSecurityContextBuffer',
        r'\bSecurityKey\b': 'NetworkSecurityKey',
        r'\bpNetworkStackBufferSecurity8\b': 'NetworkSecurityStackBufferPointer',
        r'\bLogConnectionError\b': 'NetworkConnectionErrorLog',
        r'\bConnectionIdInitialize\b': 'NetworkConnectionIdInitialize',
        r'\bConnectionHandleInitialize\b': 'NetworkConnectionHandleInitialize',
        r'\bConnectionHandleRelease\b': 'NetworkConnectionHandleRelease',
        r'\bValidateBufferSize\b': 'NetworkValidateBufferSize',
        r'\bProcessBufferData\b': 'NetworkProcessBufferData',
        r'\bProcessEncryption\b': 'NetworkProcessEncryption',
        r'\bValidateAndProcessConnectionData\b': 'NetworkValidateAndProcessConnectionData',
        r'\bNetworkCreateConnectionHandle\b': 'NetworkCreateConnectionHandle',
        r'\bValidateSecurityContext\b': 'NetworkValidateSecurityContext',
        r'\bProcessBuffer\b': 'NetworkProcessBuffer',
        r'\bValidateConnectionParameters\b': 'NetworkValidateConnectionParameters',
        r'\bProcessConnectionRequest\b': 'NetworkProcessConnectionRequest',
        r'\bValidateConnectionSecurity\b': 'NetworkValidateConnectionSecurity',
        r'\bValidateConnectionData\b': 'NetworkValidateConnectionData',
        r'\bCleanupConnectionResources\b': 'NetworkCleanupConnectionResources',
        r'\bValidateConnectionContext\b': 'NetworkValidateConnectionContext',
        r'\bProcessBufferTemplate\b': 'NetworkProcessBufferTemplate',
        r'\bSetNetworkParameter\b': 'NetworkSetParameter',
        r'\bPerformSecondaryPacketValidation\b': 'NetworkPerformSecondaryPacketValidation',
        r'\bReleaseConnectionResource\b': 'NetworkReleaseConnectionResource',
        r'\bValidateConnectionResource\b': 'NetworkValidateConnectionResource'
    }
    
    # 执行替换
    for pattern, replacement in replacements.items():
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换变量名
    new_content = replace_variables(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print("变量名替换完成")

if __name__ == '__main__':
    main()