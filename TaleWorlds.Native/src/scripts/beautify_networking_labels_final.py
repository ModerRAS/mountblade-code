#!/usr/bin/env python3
"""
美化networking.c文件中的LAB_标签
将LAB_1808xxxx格式的标签替换为语义化的名称
"""

import re
import sys

def beautify_networking_labels():
    """美化networking.c文件中的LAB_标签"""
    
    # 读取原始文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # LAB_标签替换映射
    label_mappings = {
        'LAB_1808494eb': 'NetworkConnectionValidationCheck',
        'LAB_180849763': 'NetworkOperationSecondaryStatusCheck',
        'LAB_1808498c8': 'OperationPrimaryStatusCheck',
        'LAB_1808499fb': 'ConnectionTimeoutValidation',
        'LAB_180849ad3': 'BufferProcessingResultCheck',
        'LAB_180849c22': 'SecurityContextTransfer',
        'LAB_180849c81': 'SecurityContextValidation',
        'LAB_180849dd1': 'NetworkDataBufferCheck',
        'LAB_180849e6f': 'NetworkOperationTertiaryStatusCheck',
        'LAB_180849fd1': 'ConnectionHandleArrayCheck',
        'LAB_18084a06f': 'NetworkOperationSecondaryStatusFinal',
        'LAB_18084a1fa': 'ConnectionHandleValidation',
        'LAB_18084a1a4': 'ConnectionHandleSecondaryCheck',
        'LAB_18084a346': 'NetworkOperationDataArrayCheck',
        'LAB_18084a2ef': 'NetworkOperationDataValidation',
        'LAB_18084a498': 'NetworkOperationRouting',
        'LAB_18084a43e': 'NetworkOperationRoutingCheck',
        'LAB_18084a608': 'NetworkOperationFinalization',
        'LAB_18084a5b3': 'NetworkOperationFinalCheck',
        'LAB_18084a719': 'OperationPrimaryStatusFinal',
        'LAB_18084a83e': 'OperationPrimaryStatusValidation',
        'LAB_18084a986': 'NetworkConnectionPrimaryCheck',
        'LAB_18084a92f': 'NetworkConnectionPrimaryValidation',
        'LAB_18084aad6': 'NetworkConnectionSecondaryCheck',
        'LAB_18084aa7f': 'NetworkConnectionSecondaryValidation',
        'LAB_18084ac26': 'NetworkConnectionTertiaryCheck',
        'LAB_18084abcf': 'NetworkConnectionTertiaryValidation',
        'LAB_18084ad66': 'NetworkConnectionQuaternaryCheck',
        'LAB_18084ad14': 'NetworkConnectionQuaternaryValidation',
        'LAB_18084ae98': 'NetworkConnectionFinalCheck',
        'LAB_18084ae43': 'NetworkConnectionFinalValidation',
        'LAB_18084af88': 'TimeoutVarValidation',
        'LAB_18084af68': 'TimeoutVarCheck',
        'LAB_18084b131': 'NetworkOperationSecondaryFinal',
        'LAB_18084b46d': 'OperationPrimaryStatusLoop',
        'LAB_18084b4a9': 'OperationPrimaryStatusExit',
        'LAB_18084bb6f': 'NetworkOperationRoutingLoop',
        'LAB_18084bb9a': 'NetworkOperationRoutingExit',
        'LAB_18084bff4': 'NetworkOperationTransfer',
        'LAB_18084c510': 'NetworkOperationTransferLoop',
        'LAB_18084c923': 'ConnectionContextValidation',
        'LAB_18084ca76': 'ConnectionContextValidationExit',
        'LAB_18084cfd9': 'NetworkPacketProcessing',
        'LAB_18084d224': 'ConnectionParameterValidation',
        'LAB_18084d22e': 'ConnectionParameterCheck',
        'LAB_18084d4b4': 'NetworkDataProcessing',
        'LAB_18084d5b4': 'NetworkDataProcessingLoop',
        'LAB_18084d7db': 'NetworkDataTransfer',
        'LAB_18084e5ba': 'NetworkOperationResultCheck',
        'LAB_18084e841': 'OperationPrimaryStatusValidation',
        'LAB_18084e8ab': 'NetworkOperationValidationExit',
        'LAB_180853ee2': 'NetworkOperationFinalValidation',
        'LAB_18084efc3': 'NetworkOperationTertiaryValidation',
        'LAB_18084f0bc': 'NetworkContextProcessing',
        'LAB_18084f283': 'NetworkContextProcessingExit',
        'LAB_18084f34c': 'NetworkContextSecondaryProcessing',
        'LAB_18084f513': 'NetworkContextSecondaryExit',
        'LAB_18084f5dc': 'NetworkContextTertiaryProcessing',
        'LAB_18084f7a3': 'NetworkContextTertiaryExit',
        'LAB_18084f88c': 'NetworkContextFinalProcessing',
        'LAB_18084f933': 'NetworkContextFinalCheck',
        'LAB_18084f987': 'NetworkContextFinalExit',
        'LAB_18084f970': 'NetworkContextFinalValidation',
        'LAB_18084fc27': 'OperationPrimaryStatusFinalCheck',
        'LAB_18084fc83': 'OperationPrimaryStatusFinalValidation',
        'LAB_18084faac': 'QuinaryStatusFlagCheck',
        'LAB_18084fb35': 'QuinaryStatusFlagValidation',
        'LAB_18084fd6c': 'NetworkContextSecondaryFinal',
        'LAB_18084fe13': 'NetworkContextSecondaryFinalCheck',
        'LAB_18084fe67': 'NetworkContextSecondaryFinalExit',
        'LAB_18084fe50': 'NetworkContextSecondaryFinalValidation',
        'LAB_180850107': 'OperationSecondaryStatusFinalCheck',
        'LAB_180850163': 'OperationSecondaryStatusFinalValidation',
        'LAB_180850015': 'OperationSecondaryStatusFinalExit',
        'LAB_18085024c': 'NetworkContextTertiaryFinal',
        'LAB_1808502f3': 'NetworkContextTertiaryFinalCheck',
        'LAB_180850347': 'NetworkContextTertiaryFinalExit',
        'LAB_180850330': 'NetworkContextTertiaryFinalValidation',
        'LAB_1808505e7': 'OperationTertiaryStatusFinalCheck',
        'LAB_180850643': 'OperationTertiaryStatusFinalValidation',
        'LAB_1808504f5': 'OperationTertiaryStatusFinalExit',
        'LAB_18085072c': 'NetworkContextQuaternaryFinal',
        'LAB_1808507d3': 'NetworkContextQuaternaryFinalCheck',
        'LAB_180850827': 'NetworkContextQuaternaryFinalExit',
        'LAB_180850810': 'NetworkContextQuaternaryFinalValidation',
        'LAB_180850ac7': 'OperationQuaternaryStatusFinalCheck',
        'LAB_180850b23': 'OperationQuaternaryStatusFinalValidation',
        'LAB_1808509d5': 'OperationQuaternaryStatusFinalExit',
        'LAB_1808513ac': 'NetworkIterationValidation',
        'LAB_180850d88': 'NetworkIterationProcessing',
        'LAB_180850d95': 'NetworkIterationCheck',
        'LAB_180850d9b': 'NetworkIterationExit',
        'LAB_180850eb0': 'NetworkIterationFinal',
        'LAB_1808511a4': 'NetworkIterationFinalCheck',
        'LAB_1808513a8': 'NetworkIterationFinalExit',
        'LAB_1808513bf': 'NetworkIterationFinalValidation',
        'LAB_180851437': 'NetworkIterationComplete',
        'LAB_180851223': 'NetworkIterationSecondary',
        'LAB_180851913': 'LocalContextProcessing',
        'LAB_180851ce6': 'LocalContextValidation',
        'LAB_180851f6d': 'LocalContextCheck',
        'LAB_1808522f9': 'NetworkOperationProcessing',
        'LAB_180852282': 'NetworkOperationCheck',
        'LAB_180852302': 'NetworkOperationValidation',
        'LAB_18085243e': 'NetworkOperationTransferCheck',
        'LAB_180852518': 'NetworkOperationTransferProcessing',
        'LAB_1808524b7': 'NetworkOperationTransferExit',
        'LAB_1808526bf': 'NetworkOperationTransferFinal',
        'LAB_180852954': 'NetworkOperationTransferFinalCheck',
        'LAB_180852943': 'NetworkOperationTransferFinalExit',
        'LAB_180852980': 'NetworkOperationTransferComplete',
        'LAB_180852a22': 'NetworkOperationTertiaryFinal',
        'LAB_180852a9a': 'NetworkOperationTertiaryComplete',
        'LAB_180852f9c': 'OperationStatusFinal',
        'LAB_180852f2d': 'OperationStatusFinalCheck',
        'LAB_180852f31': 'OperationStatusFinalExit',
        'LAB_1808530ba': 'NetworkStackBufferValidation',
        'LAB_180853370': 'NetworkStackBufferProcessing',
        'LAB_180853663': 'NetworkStackBufferCheck',
        'LAB_180853766': 'NetworkStackBufferFinal',
        'LAB_180853768': 'NetworkStackBufferExit',
        'LAB_1808545a3': 'NetworkOperationQuaternaryFinal',
        'LAB_180854383': 'NetworkDataSizeCheck',
        'LAB_18085439a': 'NetworkDataSizeValidation',
        'LAB_1808547b7': 'DataPointerValidation',
        'LAB_1808547bc': 'DataPointerCheck',
        'LAB_180854958': 'NetworkOperationTertiaryFinalCheck',
        'LAB_180854920': 'NetworkOperationTertiaryFinalExit',
        'LAB_180854c5f': 'NetworkPacketProcessingCheck',
        'LAB_180854bfc': 'NetworkPacketProcessingExit',
        'LAB_180854bea': 'NetworkPacketProcessingValidation',
        'LAB_180854bed': 'NetworkPacketProcessingFinal',
        'LAB_180854d65': 'NetworkPacketProcessingComplete',
        'LAB_18085604d': 'NetworkPacketProcessingFinalCheck',
        'LAB_180856179': 'NetworkContextFinalCheck',
        'LAB_180856347': 'DataPointerFinalValidation',
        'LAB_180856636': 'NetworkConnectionProcessing',
        'LAB_18085691e': 'NetworkConnectionCheck',
        'LAB_180856a99': 'NetworkConnectionExit',
        'LAB_180856b7a': 'NetworkConnectionFinal',
        'LAB_180856bdf': 'NetworkConnectionFinalCheck',
        'LAB_180856b58': 'NetworkConnectionValidation',
        'LAB_180856a59': 'NetworkConnectionFinalExit'
    }
    
    # 应用替换
    original_content = content
    for old_label, new_label in label_mappings.items():
        content = content.replace(old_label, new_label)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功替换了 {len(label_mappings)} 个LAB_标签")
        return True
    else:
        print("未找到需要替换的LAB_标签")
        return False

if __name__ == "__main__":
    beautify_networking_labels()