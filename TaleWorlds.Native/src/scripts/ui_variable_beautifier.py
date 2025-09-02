#!/usr/bin/env python3
"""
UI系统变量名美化脚本
"""

import re

def beautify_ui_system():
    """美化UI系统文件中的变量名"""
    
    # 读取原始文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换LAB标签
    content = re.sub(r'LAB_180768039', 'UIResourceValidationFailed', content)
    content = re.sub(r'LAB_180650673', 'UIResourceSearchContinue', content)
    content = re.sub(r'LAB_180652228', 'UIResourceIndexMismatch', content)
    content = re.sub(r'LAB_1806505ad', 'UIResourceProcessingComplete', content)
    content = re.sub(r'LAB_180650c04', 'UIResourceSignatureCheck', content)
    
    # 替换UNK变量
    content = re.sub(r'UNK_1dd01c85c', 'UIUnknownResourceFlag', content)
    
    # 替换中文变量名
    content = re.sub(r'p无符号整型变量(\d+)', r'UIPointerToUnsignedInt\1', content)
    content = re.sub(r'a无符号整型变量(\d+)', r'UIArrayUnsignedInt\1', content)
    content = re.sub(r'无符号整型变量(\d+)', r'UIUnsignedInt\1', content)
    
    # 替换临时变量
    content = re.sub(r'tempPtr(\d+)', r'UITemporaryPointer\1', content)
    content = re.sub(r'tempArray(\d+)', r'UITemporaryArray\1', content)
    content = re.sub(r'psVar(\d+)', r'UIPointerShortVar\1', content)
    content = re.sub(r'sVar(\d+)', r'UIShortVar\1', content)
    content = re.sub(r'tempShort(\d+)', r'UITemporaryShort\1', content)
    
    # 替换栈变量
    content = re.sub(r'ppsStack_(\d+)', r'UIStackDoublePointer\1', content)
    content = re.sub(r'psStack_(\d+)', r'UIStackShortPointer\1', content)
    content = re.sub(r'puStack_(\d+)', r'UIStackPointer\1', content)
    content = re.sub(r'uStack_(\d+)', r'UIStackUnsignedLong\1', content)
    content = re.sub(r'lStack_(\d+)', r'UIStackLong\1', content)
    content = re.sub(r'auStack_(\d+)', r'UIStackArray\1', content)
    content = re.sub(r'alStack_(\d+)', r'UIStackLongArray\1', content)
    
    # 替换参数名
    content = re.sub(r'参数一', 'UIParameterOne', content)
    content = re.sub(r'参数二', 'UIParameterTwo', content)
    content = re.sub(r'参数三', 'UIParameterThree', content)
    content = re.sub(r'参数四', 'UIParameterFour', content)
    
    # 替换资源相关变量
    content = re.sub(r'resourceIndex', 'UIResourceIndex', content)
    content = re.sub(r'resourceIndex(\d+)', r'UIResourceIndex\1', content)
    content = re.sub(r'resourceEntry', 'UIResourceEntry', content)
    content = re.sub(r'SearchResult', 'UISearchResult', content)
    
    # 替换SIMD寄存器
    content = re.sub(r'in_XMM(\d+)', r'UISimdRegisterXMM\1', content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("UI系统变量美化完成")

if __name__ == "__main__":
    beautify_ui_system()