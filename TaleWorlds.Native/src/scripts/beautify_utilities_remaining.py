#!/usr/bin/env python3
"""
批量美化06_utilities.c文件中的变量名和标签
"""

import re

def beautify_utilities_file():
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换变量名
    replacements = [
        # lStackX_8 -> StackBufferPointer
        (r'\blStackX_8\b', 'StackBufferPointer'),
        
        # uStackX_c -> StackValidationContext
        (r'\buStackX_c\b', 'StackValidationContext'),
        
        # lStack0000000000000028 -> StackMemoryOffset
        (r'\blStack0000000000000028\b', 'StackMemoryOffset'),
        
        # uStack0000000000000030 -> StackValidationBuffer
        (r'\buStack0000000000000030\b', 'StackValidationBuffer'),
        
        # unaff_RDI -> UnaffectedRegisterValue
        (r'\bunaff_RDI\b', 'UnaffectedRegisterValue'),
        
        # unaff_R14 -> UnaffectedRegister14
        (r'\bunaff_R14\b', 'UnaffectedRegister14'),
        
        # LAB_1808918d2 -> ValidationSuccessLabel
        (r'\bLAB_1808918d2\b', 'ValidationSuccessLabel'),
        
        # LAB_180891a52 -> FinalizationSuccessLabel
        (r'\bLAB_180891a52\b', 'FinalizationSuccessLabel'),
        
        # LAB_180891fc0 -> ResourceValidationLabel
        (r'\bLAB_180891fc0\b', 'ResourceValidationLabel'),
        
        # in_stack_00000070 -> InputStackParameter
        (r'\bin_stack_00000070\b', 'InputStackParameter'),
    ]
    
    # 执行替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("文件美化完成")

if __name__ == "__main__":
    beautify_utilities_file()