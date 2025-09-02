#!/usr/bin/env python3
"""
美化网络模块中的LAB_标签
将逆向工程标签替换为语义化名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def beautify_network_labels(content):
    """美化网络模块中的LAB_标签"""
    
    # 网络连接状态相关标签
    replacements = [
        # 连接验证相关标签
        (r'LAB_18084fc83:', 'NetworkConnectionValidationStart:'),
        (r'LAB_18084faac:', 'NetworkConnectionValidationCheck:'),
        (r'LAB_18084fb35:', 'NetworkConnectionValidationComplete:'),
        
        # 连接处理相关标签
        (r'LAB_18084fd6c:', 'NetworkConnectionProcessingStart:'),
        (r'LAB_18084fe13:', 'NetworkConnectionDataProcessing:'),
        (r'LAB_18084fe50:', 'NetworkConnectionDataProcessed:'),
        (r'LAB_18084fe67:', 'NetworkConnectionProcessingComplete:'),
        
        # 连接状态检查标签
        (r'LAB_180850107:', 'NetworkConnectionStatusCheck:'),
        (r'LAB_180850163:', 'NetworkConnectionStatusVerified:'),
        (r'LAB_18084ff8c:', 'NetworkConnectionStatusValidation:'),
        (r'LAB_180850015:', 'NetworkConnectionStatusConfirmed:'),
        
        # 连接数据传输标签
        (r'LAB_18085024c:', 'NetworkDataTransferStart:'),
        (r'LAB_1808502f3:', 'NetworkDataTransferProcessing:'),
        (r'LAB_180850330:', 'NetworkDataTransferInProgress:'),
        (r'LAB_180850347:', 'NetworkDataTransferComplete:'),
        (r'LAB_1808505e7:', 'NetworkDataTransferValidation:'),
        (r'LAB_1808504f5:', 'NetworkDataTransferVerified:'),
        
        # 连接缓冲区管理标签
        (r'LAB_18085072c:', 'NetworkBufferManagementStart:'),
        (r'LAB_1808507d3:', 'NetworkBufferProcessing:'),
        (r'LAB_180850810:', 'NetworkBufferHandled:'),
        (r'LAB_180850827:', 'NetworkBufferManagementComplete:'),
        (r'LAB_180850ac7:', 'NetworkBufferValidation:'),
        (r'LAB_180850b23:', 'NetworkBufferValidated:'),
        (r'LAB_1808509d5:', 'NetworkBufferConfirmed:'),
        
        # 网络安全验证标签
        (r'LAB_180851437:', 'NetworkSecurityValidationStart:'),
        (r'LAB_1808513ac:', 'NetworkSecurityCheckPoint:'),
        (r'LAB_180850d88:', 'NetworkSecurityProcessing:'),
        (r'LAB_180850d95:', 'NetworkSecurityValidationPoint:'),
        (r'LAB_180850d9b:', 'NetworkSecurityVerified:'),
        (r'LAB_180850eb0:', 'NetworkSecurityComplete:'),
        
        # 网络迭代处理标签
        (r'LAB_1808511a4:', 'NetworkIterationProcessing:'),
        (r'LAB_1808513a8:', 'NetworkIterationValidation:'),
        (r'LAB_1808513bf:', 'NetworkIterationComplete:'),
        (r'LAB_180851913:', 'NetworkIterationContextSwitch:'),
        (r'LAB_180851ce6:', 'NetworkIterationNextStep:'),
        
        # 网络数据传输操作标签
        (r'LAB_180851f6d:', 'NetworkTransferOperationStart:'),
        (r'LAB_1808522f9:', 'NetworkTransferValidation:'),
        (r'LAB_180852282:', 'NetworkTransferProcessing:'),
        (r'LAB_180852302:', 'NetworkTransferOperation:'),
        (r'LAB_18085243e:', 'NetworkTransferDataHandling:'),
        (r'LAB_180852518:', 'NetworkTransferInProgress:'),
        (r'LAB_1808524b7:', 'NetworkTransferStatusCheck:'),
        
        # 网络传输状态管理标签
        (r'LAB_1808526bf:', 'NetworkTransferStatusProcessing:'),
        (r'LAB_180852954:', 'NetworkTransferStatusActive:'),
        (r'LAB_180852943:', 'NetworkTransferStatusCheck:'),
        (r'LAB_180852980:', 'NetworkTransferStatusComplete:'),
        (r'LAB_180852a22:', 'NetworkTransferFinalization:'),
        (r'LAB_180852a9a:', 'NetworkTransferCleanup:'),
        
        # 网络传输标志处理标签
        (r'LAB_180852f9c:', 'NetworkTransferFlagProcessing:'),
        (r'LAB_180852f2d:', 'NetworkTransferFlagValidation:'),
        (r'LAB_180852f31:', 'NetworkTransferFlagHandled:'),
        
        # 网络栈缓冲区处理标签
        (r'LAB_1808530ba:', 'NetworkStackBufferValidation:'),
        (r'LAB_18073d93d:', 'NetworkStackBufferProcessed:'),
        (r'LAB_180853370:', 'NetworkStackOperationStart:'),
        (r'LAB_180853663:', 'NetworkStackOperationProcessing:'),
        (r'LAB_180853766:', 'NetworkStackOperationComplete:'),
        (r'LAB_180853768:', 'NetworkStackNextOperation:'),
        
        # 网络操作状态标签
        (r'LAB_1808545a3:', 'NetworkOperationStatusCheck:'),
        (r'LAB_180854383:', 'NetworkOperationDataValidation:'),
        (r'LAB_18085439a:', 'NetworkOperationSizeCheck:'),
        (r'LAB_1808547b7:', 'NetworkOperationNullPointerCheck:'),
        (r'LAB_1808547bc:', 'NetworkOperationPointerValidation:'),
        (r'LAB_180854958:', 'NetworkOperationValidationComplete:'),
        (r'LAB_180854920:', 'NetworkOperationConfirmed:'),
        
        # 网络数据包处理标签
        (r'LAB_180854c5f:', 'NetworkPacketProcessingStart:'),
        (r'LAB_180854bfc:', 'NetworkPacketDataHandling:'),
        (r'LAB_180854bea:', 'NetworkPacketEncryptionCheck:'),
        (r'LAB_180854bed:', 'NetworkPacketEncryptionVerified:'),
        (r'LAB_180854d65:', 'NetworkPacketSizeValidation:'),
        
        # 网络连接索引标签
        (r'LAB_18085604d:', 'NetworkConnectionIndexProcessing:'),
        (r'LAB_180856179:', 'NetworkConnectionIndexValidation:'),
        (r'LAB_180856347:', 'NetworkConnectionIndexCheck:'),
        
        # 网络数据包传输标签
        (r'LAB_180856636:', 'NetworkPacketTransmissionStart:'),
        (r'LAB_18085691e:', 'NetworkPacketTransmissionProcessing:'),
        (r'LAB_180856a99:', 'NetworkPacketTransmissionComplete:'),
        (r'LAB_180856b7a:', 'NetworkPacketDataValidation:'),
        (r'LAB_180856bdf:', 'NetworkPacketDataVerified:'),
        (r'LAB_180856b58:', 'NetworkPacketSizeCheck:'),
        (r'LAB_180856a59:', 'NetworkPacketTransmissionVerified:'),
        
        # 网络连接管理标签
        (r'LAB_180856fce:', 'NetworkConnectionManagementStart:'),
        (r'LAB_180857786:', 'NetworkConnectionManagementComplete:'),
        (r'LAB_180857434:', 'NetworkConnectionDataProcessing:'),
        (r'LAB_1808574d9:', 'NetworkConnectionDataHandled:'),
        (r'LAB_1808574e7:', 'NetworkConnectionDataVerified:'),
        (r'LAB_180857632:', 'NetworkConnectionStatusUpdate:'),
        (r'LAB_180857610:', 'NetworkConnectionStatusUpdated:'),
        (r'LAB_180857774:', 'NetworkConnectionManagementFinal:'),
        
        # 网络错误处理标签
        (r'LAB_180857c4e:', 'NetworkErrorHandlingStart:'),
        (r'LAB_180857d77:', 'NetworkErrorProcessing:'),
        (r'LAB_180857d7c:', 'NetworkErrorHandlerCheck:'),
        (r'LAB_180857da6:', 'NetworkErrorHandled:'),
        (r'LAB_180857f16:', 'NetworkErrorRecoveryStart:'),
        (r'LAB_180857f82:', 'NetworkErrorRecoveryComplete:'),
        
        # 网络状态标志标签
        (r'LAB_1808580a0:', 'NetworkStatusFlagProcessing:'),
        (r'LAB_180859163:', 'NetworkStatusFlagValidation:'),
        (r'LAB_180858c20:', 'NetworkStatusFlagCheck:'),
        (r'LAB_1808591d6:', 'NetworkStatusFlagVerified:'),
        (r'LAB_180858e04:', 'NetworkStatusFlagComplete:'),
        
        # 网络数据传输最终处理标签
        (r'LAB_180859535:', 'NetworkTransferFinalStart:'),
        (r'LAB_180859665:', 'NetworkTransferFinalProcessing:'),
        (r'LAB_180859953:', 'NetworkTransferFinalValidation:'),
        (r'LAB_18085996b:', 'NetworkTransferFinalComplete:'),
        (r'LAB_1808597c2:', 'NetworkTransferFinalCheck:'),
        (r'LAB_180859ef9:', 'NetworkTransferFinalHandled:'),
        
        # 网络连接参数处理标签
        (r'LAB_18085a4c4:', 'NetworkConnectionParameterStart:'),
        (r'LAB_18085a4fd:', 'NetworkConnectionParameterCheck:'),
        (r'LAB_18085a294:', 'NetworkConnectionParameterValidation:'),
        (r'LAB_18085a2e9:', 'NetworkConnectionParameterVerified:'),
        (r'LAB_18085a4b5:', 'NetworkConnectionParameterComplete:'),
        
        # 网络数据范围检查标签
        (r'LAB_18085a652:', 'NetworkDataRangeValidation:'),
        (r'LAB_18085a66c:', 'NetworkDataRangeCheck:'),
        (r'LAB_18085a689:', 'NetworkDataRangeVerified:'),
        (r'LAB_18085a698:', 'NetworkDataRangeProcessing:'),
        (r'LAB_18085a6b0:', 'NetworkDataRangeComplete:'),
        (r'LAB_18085a6ac:', 'NetworkDataRangeConfirmed:'),
        
        # 网络标志验证标签
        (r'LAB_18085a742:', 'NetworkFlagValidationStart:'),
        (r'LAB_18085a746:', 'NetworkFlagValidationCheck:'),
        (r'LAB_18085a7de:', 'NetworkFlagVerification:'),
        (r'LAB_18085a8bd:', 'NetworkFlagVerified:'),
        (r'LAB_18085a8c1:', 'NetworkFlagValidationComplete:'),
        (r'LAB_18085a91b:', 'NetworkFlagHandlingComplete:'),
        
        # 网络连接状态标签
        (r'LAB_18085abe3:', 'NetworkConnectionStateStart:'),
        (r'LAB_180857f18:', 'NetworkConnectionStateProcessing:'),
        (r'LAB_18085add0:', 'NetworkConnectionStateComplete:'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    print("开始美化网络模块中的LAB_标签...")
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return 1
    
    # 美化标签
    beautified_content = beautify_network_labels(content)
    
    # 写入文件
    if write_file(file_path, beautified_content):
        print("网络模块LAB_标签美化完成!")
        return 0
    else:
        return 1

if __name__ == "__main__":
    sys.exit(main())