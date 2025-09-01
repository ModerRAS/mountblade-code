#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
专门用于处理00_data_definitions.h文件中剩余未美化变量的小脚本
"""

import re

def beautify_remaining_variables():
    """美化剩余的变量名"""
    
    source_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    
    with open(source_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义需要替换的变量映射
    replacements = {
        # 字符串处理系统模块V相关变量
        '_DAT_180bf9d50': 'StringProcessingSystemV_BasePointer',
        '_DAT_180bf9d58': 'StringProcessingSystemV_BufferPointer',
        'DAT_180bf9d68': 'StringProcessingSystemV_DataBuffer',
        '_DAT_180bf9d60': 'StringProcessingSystemV_BufferSize',
        'UNK_180a22e70': 'StringProcessingSystemV_Template',
        
        # 字符串处理系统模块W相关变量
        '_DAT_180bf9db0': 'StringProcessingSystemW_BasePointer',
        '_DAT_180bf9db8': 'StringProcessingSystemW_BufferPointer',
        'DAT_180bf9dc8': 'StringProcessingSystemW_DataBuffer',
        '_DAT_180bf9dc0': 'StringProcessingSystemW_BufferSize',
        'UNK_180a22e58': 'StringProcessingSystemW_Template',
        
        # 字符串处理系统模块X相关变量
        '_DAT_180bf9e10': 'StringProcessingSystemX_BasePointer',
        '_DAT_180bf9e18': 'StringProcessingSystemX_BufferPointer',
        'DAT_180bf9e28': 'StringProcessingSystemX_DataBuffer',
        '_DAT_180bf9e20': 'StringProcessingSystemX_BufferSize',
        'UNK_180a22f28': 'StringProcessingSystemX_Template',
        
        # 字符串处理系统模块Y相关变量
        '_DAT_180bf9e70': 'StringProcessingSystemY_BasePointer',
        '_DAT_180bf9e78': 'StringProcessingSystemY_BufferPointer',
        'DAT_180bf9e88': 'StringProcessingSystemY_DataBuffer',
        '_DAT_180bf9e80': 'StringProcessingSystemY_BufferSize',
        'UNK_180a22f10': 'StringProcessingSystemY_Template',
        
        # 字符串处理系统模块Z相关变量
        '_DAT_180bf9ed0': 'StringProcessingSystemZ_BasePointer',
        '_DAT_180bf9ed8': 'StringProcessingSystemZ_BufferPointer',
        'DAT_180bf9ee8': 'StringProcessingSystemZ_DataBuffer',
        '_DAT_180bf9ee0': 'StringProcessingSystemZ_BufferSize',
        'UNK_180a22ef8': 'StringProcessingSystemZ_Template',
        
        # 字符串处理系统模块AA相关变量
        '_DAT_180bf9f30': 'StringProcessingSystemAA_BasePointer',
        '_DAT_180bf9f38': 'StringProcessingSystemAA_BufferPointer',
        'DAT_180bf9f48': 'StringProcessingSystemAA_DataBuffer',
        '_DAT_180bf9f40': 'StringProcessingSystemAA_BufferSize',
        'UNK_180a22ed8': 'StringProcessingSystemAA_Template',
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in replacements.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open(source_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功美化 {source_file} 中的剩余变量名")
        return True
    else:
        print("没有找到需要美化的变量名")
        return False

if __name__ == "__main__":
    beautify_remaining_variables()