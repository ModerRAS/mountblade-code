#!/usr/bin/env python3
"""
批量替换网络系统文件中的LAB_标签为语义化名称
"""

import re
import sys

def replace_networking_labels():
    """替换网络系统文件中的LAB_标签为语义化名称"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义标签替换映射
    label_replacements = {
        'LAB_18085a2e9': 'NetworkConnectionSizeCheck',
        'LAB_18085a294': 'NetworkDataSizeValidation',
        'LAB_18085a4fd': 'NetworkConnectionStatusCheck',
        'LAB_18085a689': 'NetworkFlagsProcessing',
        'LAB_18085a66c': 'NetworkDataSizeUpperBoundCheck',
        'LAB_18085a652': 'NetworkDataSizeComparison',
        'LAB_18085a6ac': 'NetworkFlagsComparison',
        'LAB_18085a698': 'NetworkConnectionFlagCheck',
        'LAB_18085a6b0': 'NetworkConnectionStatusExit',
        'LAB_18085a7de': 'NetworkConnectionProcessingComplete',
        'LAB_180857f18': 'NetworkConnectionTableCheck',
        'LAB_180858c20': 'NetworkConnectionStatusProcessing',
        'LAB_180858e04': 'NetworkProcessingStatusCheck',
        'LAB_1808591d6': 'NetworkValidationStatusCheck',
        'LAB_18085add0': 'NetworkValidationProcessing',
        'LAB_18085c76e': 'NetworkValidationSizeCheck',
        'LAB_18085d424': 'NetworkConnectionIndexCheck',
        'LAB_18085ceec': 'NetworkIterationProcessing',
        'LAB_18085d2fd': 'NetworkContextProcessing',
        'LAB_18085d4e7': 'NetworkConnectionHandler',
        'LAB_18085d61f': 'NetworkConnectionStateHandler',
        'LAB_18085d78f': 'NetworkConnectionLocalContext',
        'LAB_18085e1d5': 'NetworkContextArrayCheck',
        'LAB_18085ea6d': 'NetworkTimeoutProcessing',
        'LAB_18085ebc2': 'NetworkLoopVariableCheck',
        'LAB_18085f8b2': 'NetworkStatusValidation',
        'LAB_1808605ab': 'NetworkOperationResultCheck',
        'LAB_1808605b0': 'NetworkContextEntryCheck',
        'LAB_1808607eb': 'NetworkConnectionStateHandler',
        'LAB_180860998': 'NetworkPrimaryStatusHandler',
        'LAB_1808609c2': 'NetworkContextArrayHandler',
        'LAB_180860a65': 'NetworkOctonaryHandler',
        'LAB_180860af6': 'NetworkConnectionStatusHandler',
        'LAB_180860c58': 'NetworkOperationResultHandler',
        'LAB_180860f7b': 'NetworkPrimaryStatusHandler',
        'LAB_18086142b': 'NetworkProcessingComplete',
        'LAB_180861693': 'NetworkConnectionExit',
        'LAB_18086154d': 'NetworkConnectionIndexCheck',
        'LAB_180861f94': 'NetworkDataTransferHandler',
        'LAB_18086223e': 'NetworkPrimaryStatusCheck',
        'LAB_180862261': 'NetworkDataPointerCheck',
        'LAB_180862804': 'NetworkConnectionDataCheck',
        'LAB_180863270': 'NetworkConnectionStatusFlag',
        'LAB_1808632ec': 'NetworkConnectionStatusLoop',
        'LAB_180863343': 'NetworkConnectionStatusCheck',
        'LAB_1808634f7': 'NetworkConnectionHandleCheck',
        'LAB_18086350f': 'NetworkConnectionIndexZero',
        'LAB_180863615': 'NetworkConnectionContextCheck',
        'LAB_180863724': 'NetworkConnectionProcessing',
        'LAB_18086378e': 'NetworkConnectionHandlePacket',
        'LAB_180863790': 'NetworkConnectionIndexMax',
        'LAB_180863795': 'NetworkConnectionComplete',
        'LAB_18086389c': 'NetworkPacketDataCheck',
        'LAB_180864019': 'NetworkProcessingStatusHandler',
        'LAB_1808640fb': 'NetworkConnectionIndexCheck',
        'LAB_18086428a': 'NetworkConnectionContextCheck',
        'LAB_1808642a1': 'NetworkConnectionStatusFlagCheck',
        'LAB_180864477': 'NetworkConnectionTimeoutCheck',
        'LAB_1808645f6': 'NetworkConnectionIndexCheck',
        'LAB_18086460a': 'NetworkConnectionStatusUpdate',
        'LAB_180864624': 'NetworkConnectionStatusFlag',
        'LAB_180864627': 'NetworkConnectionContextState',
        'LAB_180865076': 'NetworkOperationResultHandler',
        'LAB_1808659de': 'NetworkFloatValueCheck',
        'LAB_18086615c': 'NetworkTimeoutStatusCheck',
        'LAB_180866197': 'NetworkConnectionHandler',
        'LAB_1808668d6': 'NetworkConnectionLoop',
        'LAB_1808675ba': 'NetworkOperationResultCheck',
        'LAB_180867645': 'NetworkPacketDataCheck',
        'LAB_1808677af': 'NetworkConnectionValidation',
        'LAB_180867b18': 'NetworkOperationValidation',
        'LAB_180867f55': 'NetworkQuaternaryStatusCheck'
    }
    
    # 执行替换
    original_content = content
    for old_label, new_label in label_replacements.items():
        content = content.replace(old_label, new_label)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功替换了 {len(label_replacements)} 个网络系统标签")
        return True
    else:
        print("没有找到需要替换的标签")
        return False

if __name__ == "__main__":
    replace_networking_labels()