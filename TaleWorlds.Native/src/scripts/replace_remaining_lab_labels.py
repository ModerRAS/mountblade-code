#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
简单的LAB标签替换脚本
"""

import re

def replace_remaining_lab_labels():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义剩余LAB标签的替换映射
    replacements = {
        'LAB_180857d77:': 'NetworkDataValidationComplete:',
        'LAB_180857d7c:': 'NetworkContextMatchFound:',
        'LAB_180857da6:': 'NetworkParameterValidation:',
        'LAB_180857f16:': 'NetworkIndexValidation:',
        'LAB_180857f82:': 'NetworkOperationComplete:',
        'LAB_1808580a0:': 'NetworkTimeoutCheck:',
        'LAB_180859163:': 'NetworkPacketValidation:',
        'LAB_180858c20:': 'NetworkConnectionReset:',
        'LAB_1808591d6:': 'NetworkDataTransfer:',
        'LAB_180858e04:': 'NetworkBufferCleanup:',
    }
    
    # 替换标签定义
    for old_label, new_label in replacements.items():
        content = content.replace(old_label, new_label)
    
    # 替换goto语句中的标签
    goto_replacements = {
        'goto LAB_180857d77': 'goto NetworkDataValidationComplete',
        'goto LAB_180857d7c': 'goto NetworkContextMatchFound',
        'goto LAB_180857da6': 'goto NetworkParameterValidation',
        'goto LAB_180857f16': 'goto NetworkIndexValidation',
        'goto LAB_180857f82': 'goto NetworkOperationComplete',
        'goto LAB_1808580a0': 'goto NetworkTimeoutCheck',
        'goto LAB_180859163': 'goto NetworkPacketValidation',
        'goto LAB_180858c20': 'goto NetworkConnectionReset',
        'goto LAB_1808591d6': 'goto NetworkDataTransfer',
        'goto LAB_180858e04': 'goto NetworkBufferCleanup',
    }
    
    for old_goto, new_goto in goto_replacements.items():
        content = content.replace(old_goto, new_goto)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("LAB标签美化完成")

if __name__ == '__main__':
    replace_remaining_lab_labels()