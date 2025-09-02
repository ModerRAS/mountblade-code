#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化脚本：将中文变量名转换为英文PascalCase
用于处理04_ui_system.c文件中的中文变量名
"""

import re

def create_variable_mapping():
    """创建中文变量名到英文PascalCase的映射"""
    return {
        '整型变量6': 'AnimationStatus',
        '无符号整型变量5': 'AnimationFrameValue',
        '长整型变量7': 'ResourceHandle',
        'p无符号整型变量8': 'pAnimationBuffer',
        '长整型变量9': 'AnimationFrameOffset',
        '整型变量11': 'ResourceCount',
        '整型变量13': 'LoopCounter',
        'p整型变量15': 'pResourceIndexArray',
        '整型变量16': 'ResourceIndex',
        '用户界面系统栈基址寄存器': 'UISystemStackBaseRegister',
        '长整型变量3': 'AnimationFrameHandle',
        '无符号整型变量2': 'AnimationBufferValue',
        '无符号整型变量3': 'AnimationFrameData',
        '无符号整型变量4': 'AnimationFrameSize',
        '无符号整型变量6': 'AnimationResourceIndex',
        '无符号整型变量7': 'AnimationResourceSize',
        '无符号整型变量8': 'AnimationResourceData',
        '无符号整型变量9': 'AnimationResourceOffset',
        '无符号整型变量10': 'AnimationResourceCount',
        '整型变量14': 'AnimationResourceIndex',
        '整型变量15': 'AnimationResourceSize',
        '整型变量17': 'AnimationResourceData',
        '整型变量18': 'AnimationResourceOffset',
        '整型变量19': 'AnimationResourceCount',
        '整型变量20': 'AnimationResourceStatus',
        '整型变量21': 'AnimationResourceType',
        '整型变量22': 'AnimationResourceFlag',
        '整型变量23': 'AnimationResourceHandle',
        '整型变量24': 'AnimationResourcePointer',
        '整型变量25': 'AnimationResourceBuffer',
        '整型变量26': 'AnimationResourceValue',
        '整型变量27': 'AnimationResourceIndex',
        '整型变量28': 'AnimationResourceSize',
        '整型变量29': 'AnimationResourceData',
        '整型变量30': 'AnimationResourceOffset',
        '整型变量31': 'AnimationResourceCount',
        '整型变量32': 'AnimationResourceStatus',
        '整型变量33': 'AnimationResourceType',
        '整型变量34': 'AnimationResourceFlag',
        '整型变量35': 'AnimationResourceHandle',
        '整型变量36': 'AnimationResourcePointer',
        '整型变量37': 'AnimationResourceBuffer',
        '整型变量38': 'AnimationResourceValue',
        '整型变量39': 'AnimationResourceIndex',
        '整型变量40': 'AnimationResourceSize',
        '整型变量41': 'AnimationResourceData',
        '整型变量42': 'AnimationResourceOffset',
        '整型变量43': 'AnimationResourceCount',
        '整型变量44': 'AnimationResourceStatus',
        '整型变量45': 'AnimationResourceType',
        '整型变量46': 'AnimationResourceFlag',
        '整型变量47': 'AnimationResourceHandle',
        '整型变量48': 'AnimationResourcePointer',
        '整型变量49': 'AnimationResourceBuffer',
        '整型变量50': 'AnimationResourceValue'
    }

def beautify_variables_in_file(file_path):
    """美化文件中的变量名"""
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            content = file.read()
        
        variable_mapping = create_variable_mapping()
        
        # 替换变量名
        for chinese_var, english_var in variable_mapping.items():
            # 替换变量声明
            content = re.sub(rf'\b{chinese_var}\b', english_var, content)
            # 替换指针变量
            content = re.sub(rf'\bp{chinese_var}\b', f'p{english_var}', content)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(content)
            
        print(f"成功美化文件: {file_path}")
        return True
        
    except Exception as e:
        print(f"处理文件时出错 {file_path}: {e}")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    beautify_variables_in_file(file_path)