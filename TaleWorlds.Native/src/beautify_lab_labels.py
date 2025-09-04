#!/usr/bin/env python3
"""
批量美化99_unmatched_functions.c文件中的LAB_标签
"""

import re
import sys

def process_lab_labels(filename):
    """处理文件中的LAB_标签"""
    
    # 读取文件
    with open(filename, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义标签替换规则
    label_mappings = {
        # 字符串处理相关
        'LAB_1800a7617': 'LabelStringValidationStateC',
        'LAB_1800a7d91': 'LabelMemoryAllocationSkip',
        'LAB_1800a7ee0': 'LabelSystemMessageMemorySkip',
        'LAB_1800a7f91': 'LabelBufferAllocationSkip',
        'LAB_1800a8044': 'LabelFormatBufferSkip',
        'LAB_1800ad67f': 'LabelFloatProcessingExit',
        
        # 错误处理相关
        'LAB_1800aa86c': 'LabelStringCheckExit',
        'LAB_1800aa8e4': 'LabelStringValidationExit',
        'LAB_1800aa9f6': 'LabelResourceCleanup',
        'LAB_1800aaac8': 'LabelErrorHandling',
        'LAB_1800aaa97': 'LabelMemoryCleanup',
        
        # XML处理相关
        'LAB_1800ac67e': 'LabelXmlProcessingExit',
        'LAB_1800ac673': 'LabelXmlValidation',
        'LAB_1800ad94c': 'LabelArrayResizeSkip',
        
        # 系统初始化相关
        'LAB_1800aea92': 'LabelSystemInitError',
        'LAB_1800af096': 'LabelSystemInitPath1',
        'LAB_1800af0c8': 'LabelSystemInitPath2',
        'LAB_1800af16e': 'LabelSystemInitPath3',
        'LAB_1800af387': 'LabelSystemInitComplete',
        'LAB_1800af3ca': 'LabelSystemInitValidation',
        'LAB_1800af47e': 'LabelSystemInitState1',
        'LAB_1800af57a': 'LabelSystemInitState2',
        'LAB_1800af665': 'LabelSystemInitFlag',
        'LAB_1800af684': 'LabelSystemInitCheck1',
        'LAB_1800af68c': 'LabelSystemInitCheck2',
        'LAB_1800af89b': 'LabelSystemInitXmlCheck',
        'LAB_1800af8d7': 'LabelSystemInitState3',
        'LAB_1800af971': 'LabelSystemInitExit1',
        'LAB_1800af973': 'LabelSystemInitExit2',
        'LAB_1800afade': 'LabelSystemInitBranch1',
        'LAB_1800afc3f': 'LabelSystemInitBranch2',
        'LAB_1800afda6': 'LabelSystemInitBranch3',
        'LAB_1800aff9c': 'LabelSystemInitBranch4',
        'LAB_1800affe3': 'LabelSystemInitFinal',
    }
    
    # 处理goto语句
    for old_label, new_label in label_mappings.items():
        # 替换goto语句
        content = re.sub(rf'goto {old_label}', f'goto {new_label}', content)
        
        # 替换标签定义
        content = re.sub(rf'{old_label}:', f'{new_label}:', content)
    
    # 写回文件
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"处理完成: {filename}")

if __name__ == '__main__':
    filename = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    process_lab_labels(filename)