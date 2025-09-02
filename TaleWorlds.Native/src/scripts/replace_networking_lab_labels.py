#!/usr/bin/env python3
"""
批量替换05_networking.c文件中的LAB标签
"""

import re

def replace_lab_labels():
    """替换LAB标签为语义化名称"""
    
    # LAB标签替换映射
    lab_replacements = {
        'LAB_18086223e': 'LAB_NetworkConnectionOperationComplete',
        'LAB_180862261': 'LAB_NetworkConnectionProcessingStart',
        'LAB_180862804': 'LAB_NetworkConnectionValidationStart',
        'LAB_180863270': 'LAB_NetworkParameterConfigurationStart',
        'LAB_1808632ec': 'LAB_TimestampUpdateLoop',
        'LAB_180863343': 'LAB_TimestampComparisonStart',
        'LAB_1808634f7': 'LAB_ConnectionHandleLoop',
        'LAB_18086350f': 'LAB_ConnectionHandleFailure',
        'LAB_180863615': 'LAB_NetworkContextProcessing',
        'LAB_180863724': 'LAB_NetworkContextValidation',
        'LAB_180863790': 'LAB_NetworkStatusCheck',
        'LAB_180863795': 'LAB_NetworkOperationComplete',
        'LAB_18086389c': 'LAB_PacketDataValidation',
        'LAB_1808639bc': 'LAB_ConnectionStateUpdate',
        'LAB_180864019': 'LAB_NetworkStatusValidation',
        'LAB_1808640fb': 'LAB_ConnectionIndexValidation',
        'LAB_18086428a': 'LAB_NetworkContextProcessingSecondary',
        'LAB_1808642a1': 'LAB_NetworkContextValidationSecondary',
        'LAB_180864477': 'LAB_ConnectionTimeoutCheck',
        'LAB_1808645f6': 'LAB_ConnectionStatusLoop',
        'LAB_18086460a': 'LAB_ConnectionStatusValidation',
        'LAB_180864624': 'LAB_ConnectionProcessingComplete',
        'LAB_180864627': 'LAB_ConnectionOperationComplete',
        'LAB_180865076': 'LAB_NetworkOperationResult',
        'LAB_1808659de': 'LAB_PacketProcessingComplete',
        'LAB_18086615c': 'LAB_NetworkTimeoutValidation',
        'LAB_180866197': 'LAB_NetworkTimeoutComplete',
        'LAB_1808668d6': 'LAB_NetworkDataProcessing',
        'LAB_1808675ba': 'LAB_NetworkOperationStatus',
        'LAB_180867645': 'LAB_PacketDataComparison',
        'LAB_1808677af': 'LAB_ConnectionValidationComplete',
        'LAB_180867b18': 'LAB_NetworkDataTransferComplete',
        'LAB_180867f55': 'LAB_ConnectionStatusCodeValidation',
        'LAB_1808683fc': 'LAB_PacketArrayProcessing',
        'LAB_1808685dc': 'LAB_NetworkContextValidationTertiary',
        'LAB_180868794': 'LAB_NetworkProcessingComplete',
        'LAB_180868b10': 'LAB_NetworkConnectionDataProcessing',
        'LAB_180868c96': 'LAB_NetworkSecurityValidation',
        'LAB_180868ceb': 'LAB_NetworkProcessingCompleteSecondary',
        'LAB_1808691e9': 'LAB_ConnectionContextProcessing',
        'LAB_180869379': 'LAB_ConnectionContextProcessingComplete',
        'LAB_180869509': 'LAB_ConnectionDataProcessing',
        'LAB_180869699': 'LAB_ConnectionDataProcessingComplete',
        'LAB_180869829': 'LAB_ConnectionPacketTransfer',
        'LAB_1808699bc': 'LAB_ConnectionPacketTransferComplete',
        'LAB_180869c61': 'LAB_ConnectionArrayProcessing',
        'LAB_180869c72': 'LAB_ConnectionArrayProcessingComplete',
        'LAB_180869c7a': 'LAB_ConnectionArrayValidation',
        'LAB_180869e61': 'LAB_ConnectionStateManagerProcessing',
        'LAB_180869e72': 'LAB_ConnectionStateManagerProcessingComplete',
        'LAB_180869e7a': 'LAB_ConnectionStateManagerValidation',
        'LAB_18086a061': 'LAB_ConnectionErrorHandlerProcessing',
        'LAB_18086a072': 'LAB_ConnectionErrorHandlerProcessingComplete',
        'LAB_18086a07a': 'LAB_ConnectionErrorHandlerValidation',
        'LAB_18086a261': 'LAB_ConnectionPacketValidationProcessing',
        'LAB_18086a272': 'LAB_ConnectionPacketValidationProcessingComplete',
        'LAB_18086a27a': 'LAB_ConnectionPacketValidationValidation',
        'LAB_18086a461': 'LAB_ConnectionDataTransferOperationProcessing',
        'LAB_18086a472': 'LAB_ConnectionDataTransferOperationProcessingComplete',
        'LAB_18086a47a': 'LAB_ConnectionDataTransferOperationValidation',
    }
    
    try:
        # 读取文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 执行替换
        for old_label, new_label in lab_replacements.items():
            # 使用正则表达式确保只替换完整的标签名
            pattern = r'\b' + re.escape(old_label) + r'\b'
            content = re.sub(pattern, new_label, content)
        
        # 写入文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
            f.write(content)
        
        print("LAB标签替换完成")
        return True
        
    except Exception as e:
        print(f"处理过程中发生错误: {e}")
        return False

if __name__ == "__main__":
    replace_lab_labels()