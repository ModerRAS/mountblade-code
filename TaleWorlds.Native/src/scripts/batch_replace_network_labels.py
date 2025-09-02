#!/usr/bin/env python3
"""
批量替换网络文件中的LAB标签
"""

import re

# 定义标签映射规则
LABEL_MAPPINGS = {
    # 数据传输相关
    'LAB_18084fd6c': 'NetworkDataTransferStart',
    'LAB_18084fe13': 'NetworkDataTransferValidate',
    'LAB_18084fe50': 'NetworkDataTransferProcess',
    'LAB_18084fe67': 'NetworkDataTransferComplete',
    'LAB_18085024c': 'NetworkDataTransferSecondary',
    'LAB_1808502f3': 'NetworkDataTransferSecondaryCheck',
    'LAB_180850330': 'NetworkDataTransferSecondaryProcess',
    'LAB_180850347': 'NetworkDataTransferSecondaryComplete',
    'LAB_18085072c': 'NetworkDataTransferTertiary',
    'LAB_1808507d3': 'NetworkDataTransferTertiaryCheck',
    'LAB_180850810': 'NetworkDataTransferTertiaryProcess',
    'LAB_180850827': 'NetworkDataTransferTertiaryComplete',
    
    # 网络包处理相关
    'LAB_180850107': 'NetworkPacketProcessStart',
    'LAB_180850163': 'NetworkPacketProcessComplete',
    'LAB_1808505e7': 'NetworkPacketErrorHandling',
    'LAB_180850643': 'NetworkPacketErrorComplete',
    'LAB_18085046c': 'NetworkPacketErrorCheck',
    'LAB_1808504f5': 'NetworkPacketErrorResolved',
    'LAB_180850ac7': 'NetworkPacketTertiaryStart',
    'LAB_180850b23': 'NetworkPacketTertiaryComplete',
    'LAB_18085094c': 'NetworkPacketTertiaryCheck',
    'LAB_1808509d5': 'NetworkPacketTertiaryResolved',
    
    # 连接状态相关
    'LAB_180851437': 'NetworkConnectionStatusValidate',
    'LAB_180850d88': 'NetworkConnectionProcessStart',
    'LAB_180850d95': 'NetworkConnectionProcessCheck',
    'LAB_180850d9b': 'NetworkConnectionProcessError',
    'LAB_1808513ac': 'NetworkConnectionProcessComplete',
    'LAB_180850eb0': 'NetworkConnectionDataTransfer',
    'LAB_1808511a4': 'NetworkConnectionValidation',
    'LAB_1808513a8': 'NetworkConnectionValidationCheck',
    'LAB_1808513bf': 'NetworkConnectionValidationComplete',
    'LAB_180851223': 'NetworkConnectionSecondaryProcess',
    'LAB_180851913': 'NetworkConnectionContextSetup',
    'LAB_180851ce6': 'NetworkConnectionContextValidate',
    'LAB_180851f6d': 'NetworkConnectionContextComplete',
    
    # 数据传输操作相关
    'LAB_1808522f9': 'NetworkTransferOperationStart',
    'LAB_180852302': 'NetworkTransferOperationCheck',
    'LAB_180852282': 'NetworkTransferOperationComplete',
    'LAB_18085243e': 'NetworkTransferDataProcess',
    'LAB_180852518': 'NetworkTransferDataValidate',
    'LAB_1808524b7': 'NetworkTransferDataError',
    'LAB_1808526bf': 'NetworkTransferDataComplete',
    'LAB_180852954': 'NetworkTransferDataSuccess',
    'LAB_180852943': 'NetworkTransferDataFailed',
    'LAB_180852980': 'NetworkTransferDataCleanup',
    'LAB_180852a22': 'NetworkTransferOperationEnd',
    'LAB_180852a9a': 'NetworkTransferOperationComplete',
    
    # 网络状态相关
    'LAB_180852f9c': 'NetworkStatusCheckStart',
    'LAB_180852f2d': 'NetworkStatusCheckProcess',
    'LAB_180852f31': 'NetworkStatusCheckComplete',
    'LAB_1808530ba': 'NetworkContextValidation',
    'LAB_180853370': 'NetworkContextSetup',
    'LAB_180853663': 'NetworkContextProcess',
    'LAB_180853766': 'NetworkContextValidate',
    'LAB_180853768': 'NetworkContextComplete',
    
    # 四级状态相关
    'LAB_1808545a3': 'NetworkQuaternaryStatusStart',
    'LAB_180854383': 'NetworkQuaternaryStatusCheck',
    'LAB_18085439a': 'NetworkQuaternaryStatusValidate',
    'LAB_1808547b7': 'NetworkQuaternaryStatusProcess',
    'LAB_1808547bc': 'NetworkQuaternaryStatusComplete',
    'LAB_180854958': 'NetworkQuaternaryStatusEnd',
    'LAB_180854920': 'NetworkQuaternaryStatusResolved',
    'LAB_180854c5f': 'NetworkQuaternaryDataProcess',
    'LAB_180854bfc': 'NetworkQuaternaryDataComplete',
    'LAB_180854bea': 'NetworkQuaternaryDataCheck',
    'LAB_180854bed': 'NetworkQuaternaryDataValidate',
    'LAB_180854d65': 'NetworkQuaternaryDataEnd',
    
    # 数据处理相关
    'LAB_18085604d': 'NetworkDataProcessingStart',
    'LAB_180856179': 'NetworkDataProcessingCheck',
    'LAB_180856347': 'NetworkDataProcessingProcess',
    'LAB_180856636': 'NetworkDataProcessingValidate',
    'LAB_18085691e': 'NetworkDataProcessingComplete',
    'LAB_180856a99': 'NetworkDataProcessingEnd',
    'LAB_180856b7a': 'NetworkDataProcessingError',
    'LAB_180856bdf': 'NetworkDataProcessingFailed',
    'LAB_180856b58': 'NetworkDataProcessingCheck',
    'LAB_180856a59': 'NetworkDataProcessingResolved',
    'LAB_180856fce': 'NetworkDataTransferStart',
    'LAB_180857434': 'NetworkDataTransferProcess',
    'LAB_1808574d9': 'NetworkDataTransferValidate',
    'LAB_1808574e7': 'NetworkDataTransferComplete',
    'LAB_180857632': 'NetworkDataTransferEnd',
    'LAB_180857610': 'NetworkDataTransferError',
    'LAB_180857786': 'NetworkDataTransferFailed',
    'LAB_180857774': 'NetworkDataTransferCleanup',
    
    # 错误处理相关
    'LAB_180857c4e': 'NetworkErrorHandlingStart',
    'LAB_180857d7c': 'NetworkErrorHandlingProcess',
    'LAB_180857d77': 'NetworkErrorHandlingCheck',
    'LAB_180857da6': 'NetworkErrorHandlingComplete',
    'LAB_180857f16': 'NetworkErrorValidation',
    'LAB_180857f82': 'NetworkErrorResolved',
    'LAB_180857f18': 'NetworkErrorComplete',
    
    # 网络标志相关
    'LAB_1808580a0': 'NetworkFlagProcessStart',
    'LAB_180859163': 'NetworkFlagProcessComplete',
    'LAB_180858c20': 'NetworkFlagValidation',
    'LAB_1808591d6': 'NetworkFlagCheck',
    'LAB_180858e04': 'NetworkFlagResolved',
    'LAB_180859535': 'NetworkFlagProcessing',
    'LAB_180859665': 'NetworkFlagValidationComplete',
    'LAB_180859953': 'NetworkFlagProcess',
    'LAB_18085996b': 'NetworkFlagProcessEnd',
    'LAB_1808597c2': 'NetworkFlagError',
    'LAB_180859ef9': 'NetworkFlagComplete',
    
    # 数据验证相关
    'LAB_18085a4c4': 'NetworkDataValidationStart',
    'LAB_18085a4fd': 'NetworkDataValidationComplete',
    'LAB_18085a4b5': 'NetworkDataValidationProcess',
    'LAB_18085a294': 'NetworkDataValidationCheck',
    'LAB_18085a2e9': 'NetworkDataValidationValidate',
    'LAB_18085a91b': 'NetworkDataValidationEnd',
    'LAB_18085a652': 'NetworkDataSizeCheck',
    'LAB_18085a66c': 'NetworkDataSizeValidate',
    'LAB_18085a689': 'NetworkDataSizeComplete',
    'LAB_18085a698': 'NetworkDataSizeProcess',
    'LAB_18085a6ac': 'NetworkDataSizeEnd',
    'LAB_18085a6b0': 'NetworkDataSizeError',
    'LAB_18085a742': 'NetworkDataTransferValidation',
    'LAB_18085a746': 'NetworkDataTransferComplete',
    'LAB_18085a7de': 'NetworkDataTransferCheck',
    'LAB_18085a8bd': 'NetworkDataTransferProcess',
    'LAB_18085a8c1': 'NetworkDataTransferEnd',
    'LAB_18085abe3': 'NetworkDataTertiaryStatus',
}

def process_file(file_path):
    """处理文件中的LAB标签"""
    print(f"正在处理文件: {file_path}")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 统计替换次数
    total_replacements = 0
    
    # 替换标签
    for old_label, new_label in LABEL_MAPPINGS.items():
        # 替换 goto 语句
        goto_pattern = f'goto {old_label};'
        if goto_pattern in content:
            count = content.count(goto_pattern)
            content = content.replace(goto_pattern, f'goto {new_label};')
            total_replacements += count
            print(f"替换 {goto_pattern} -> goto {new_label}; ({count}次)")
        
        # 替换标签定义
        label_pattern = f'{old_label}:'
        if label_pattern in content:
            count = content.count(label_pattern)
            content = content.replace(label_pattern, f'{new_label}:')
            total_replacements += count
            print(f"替换 {label_pattern} -> {new_label}: ({count}次)")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件处理完成，总共替换了 {total_replacements} 处")
    return total_replacements

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    process_file(file_path)