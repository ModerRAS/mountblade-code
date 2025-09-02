#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

def read_file(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filename, content):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_ui_system(content):
    # 替换一些常见的中文变量名为英文
    replacements = {
        '长整型变量': 'LongVariable',
        '整型变量': 'IntVariable', 
        '无符号整型变量': 'UnsignedIntVariable',
        '无符号长整型变量': 'UnsignedLongVariable',
        '无符号semaphoreCount': 'UnsignedSemaphoreCount',
        '参数六': 'ParameterSix',
        '参数五': 'ParameterFive',
        '参数四': 'ParameterFour',
        '参数三': 'ParameterThree',
        '参数二': 'ParameterTwo'
    }
    
    for old, new in replacements.items():
        content = content.replace(old, new)
    
    # 替换一些LAB标签
    lab_replacements = {
        'LAB_180652228': 'UIResourceCleanupCheck',
        'LAB_18065258b': 'UIResourceCleanupLoop',
        'LAB_18065415f': 'UIAnimationProcessStart',
        'LAB_1806541f1': 'UIAnimationFrameCheck',
        'LAB_1806555a8': 'UIAnimationProcessEnd'
    }
    
    for old, new in lab_replacements.items():
        content = content.replace(old, new)
    
    return content

if __name__ == "__main__":
    filename = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    content = read_file(filename)
    content = beautify_ui_system(content)
    write_file(filename, content)
    print("UI System beautification completed")