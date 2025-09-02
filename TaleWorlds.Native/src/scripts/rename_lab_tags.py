#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def replace_lab_tags(file_path):
    """
    批量替换LAB_标签为语义化名称
    """
    
    # 标签映射字典
    tag_mapping = {
        # 系统初始化和清理相关的标签
        'LAB_180066971': 'SystemUtilityExecution',
        'LAB_180066bf4': 'SystemValidationStart',
        'LAB_180066ec4': 'MemoryBoundaryCheck',
        'LAB_1800718e9': 'SystemCleanupComplete',
        'LAB_1800715eb': 'SystemInitializationDone',
        'LAB_180071af3': 'SystemContextProcessing',
        'LAB_180071b69': 'SystemContextComplete',
        
        # 错误处理和异常管理相关的标签
        'LAB_180068c87': 'SystemErrorRecovery',
        'LAB_180068c92': 'SystemExceptionHandling',
        'LAB_180068c94': 'SystemErrorCleanup',
        'LAB_180075f4f': 'SystemErrorHandling',
        
        # 状态管理和流程控制相关的标签
        'LAB_180070a3f': 'SystemStateProcessing',
        'LAB_180070b00': 'SystemStateComplete',
        'LAB_180071c1a': 'StatusValidationStart',
        'LAB_180071c93': 'StatusProcessingStart',
        'LAB_180071d1f': 'StatusValidationComplete',
        'LAB_180071d94': 'SecondaryStatusCheck',
        'LAB_180071e34': 'MemoryAllocationCheck',
        'LAB_180071eb0': 'SecondaryStatusComplete',
        
        # 内存管理和资源分配相关的标签
        'LAB_180069842': 'MemoryBlockProcessing',
        'LAB_180069c2b': 'MemoryComparisonComplete',
        'LAB_180069dc3': 'MemoryAddressValidation',
        'LAB_180069dda': 'MemoryAllocationProceed',
        'LAB_180070db8': 'BufferProcessingStart',
        'LAB_180070e64': 'BufferValidationComplete',
        'LAB_180070ee8': 'BufferMemoryProcessing',
        'LAB_180070f81': 'BufferMemoryComplete',
        'LAB_180071000': 'BufferDataProcessing',
        'LAB_1800710b8': 'BufferDataComplete',
        'LAB_18007113f': 'BufferFinalProcessing',
        
        # 线程和系统事件相关的标签
        'LAB_180072d7b': 'ThreadStatusCheck',
        'LAB_180072120': 'ThreadProcessingStart',
        'LAB_1800721e1': 'ThreadDataProcessing',
        'LAB_1800722f5': 'ThreadConditionCheck',
        'LAB_180072521': 'ThreadSynchronization',
        'LAB_1800725ac': 'ThreadEventProcessing',
        
        # 系统数据验证相关的标签
        'LAB_180072662': 'SystemDataValidation',
        'LAB_1800726e7': 'SystemDataProcessing',
        'LAB_180072780': 'SystemDataCheck',
        'LAB_1800727ff': 'SystemDataComplete',
        'LAB_1800728ad': 'SystemBufferProcessing',
        'LAB_180072934': 'SystemMemoryCheck',
        'LAB_1800729bd': 'SystemMemoryComplete',
        
        # 渲染和图形相关的标签
        'LAB_180076feb': 'RenderStateProcessing',
        'LAB_18007738d': 'RenderBufferComplete',
        'LAB_180077847': 'RenderContextStart',
        'LAB_180077879': 'RenderContextComplete',
        'LAB_180077fcf': 'RenderValidationDone',
        
        # 系统配置和设置相关的标签
        'LAB_1800782d4': 'SystemConfigurationCheck',
        'LAB_1800782e0': 'SystemConfigurationComplete',
        
        # 继续添加其他标签...
    }
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 备份原始文件
    with open(file_path + '.backup', 'w', encoding='utf-8') as f:
        f.write(content)
    
    # 批量替换标签
    for old_tag, new_name in tag_mapping.items():
        # 替换标签定义
        pattern = r'^' + re.escape(old_tag) + r':'
        replacement = f'{new_name}: // 原始标签：{old_tag}，现已重命名为{new_name}'
        content = re.sub(pattern, replacement, content, flags=re.MULTILINE)
        
        # 替换goto语句
        goto_pattern = r'goto ' + re.escape(old_tag)
        goto_replacement = f'goto {new_name}'
        content = re.sub(goto_pattern, goto_replacement, content)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"LAB_标签重命名完成")
    print(f"处理文件: {file_path}")
    print(f"备份文件: {file_path}.backup")
    print(f"替换标签数量: {len(tag_mapping)}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python rename_lab_tags.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    replace_lab_tags(file_path)