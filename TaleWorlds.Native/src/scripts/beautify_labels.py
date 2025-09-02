#!/usr/bin/env python3
"""
美化标签和变量名的脚本
用于将逆向工程生成的标签名转换为语义化的名称
"""

import re

def beutify_labels_and_variables():
    """美化标签和变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 标签替换规则
    label_replacements = {
        'LAB_180054ec9': 'StringProcessingComplete',
        'LAB_180054d28': 'CharacterDataProcessingComplete', 
        'LAB_180054d57': 'PathSeparatorFound',
        'LAB_180056228': 'ValidationSuccess',
        'LAB_18005726e': 'MemoryCleanupComplete',
        'LAB_1800580f9': 'DataStructureProcessingComplete',
        'LAB_180058138': 'ByteComparisonComplete',
        'LAB_1800590e2': 'MatchFoundComplete',
        'LAB_1800591a6': 'ComparisonComplete',
        'LAB_180059885': 'SystemInitializationComplete',
        'LAB_1800602f0': 'MemoryBlockProcessingStart',
        'LAB_18006031a': 'MemoryBlockProcessingContinue',
        'LAB_1800602a0': 'MemoryBlockProcessingJump',
        'LAB_18006039b': 'TargetDataStructureValidation',
        'LAB_1800604d1': 'MemoryBlockListProcessing',
        'LAB_1800607cc': 'SystemEventProcessingComplete',
        'LAB_180060993': 'SystemResourceCleanupComplete',
        'LAB_18006357e': 'KeyValidationComplete',
        'LAB_180063de9': 'StringProcessingFinalComplete',
        'LAB_180065009': 'SystemConfigurationComplete',
        'LAB_180064eed': 'SystemDataProcessingComplete',
        'LAB_180065a3e': 'MemoryValidationComplete',
        'LAB_180066971': 'SystemProcessingComplete',
        'LAB_18006650a': 'SystemConfigurationValidationComplete',
        'LAB_180066bf4': 'SystemValidationLoopContinue',
        'LAB_180066ec4': 'MemoryBoundaryCheckComplete',
        'LAB_180068c92': 'MemoryAllocationComplete',
        'LAB_180068c87': 'MemoryAllocationStart',
        'LAB_180068c94': 'MemoryAllocationContinue',
        'LAB_180069842': 'MemoryBlockListProcessingComplete',
        'LAB_180069c2b': 'MemoryBlockProcessingFinalComplete',
        'LAB_180069dc3': 'MemoryComparisonComplete',
        'LAB_180069dda': 'MemoryComparisonFinalComplete'
    }
    
    # 应用替换
    for old_label, new_label in label_replacements.items():
        # 替换 goto 语句
        content = re.sub(rf'goto {old_label}', f'goto {new_label}', content)
        # 替换标签定义（如果存在）
        content = re.sub(rf'{old_label}:', f'{new_label}: // 原始标签：{old_label}', content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("标签美化完成")

if __name__ == '__main__':
    beutify_labels_and_variables()