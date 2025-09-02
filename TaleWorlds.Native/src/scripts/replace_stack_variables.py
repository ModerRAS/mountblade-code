#!/usr/bin/env python3
"""
栈变量美化脚本
替换所有auStack_, puStack_, uStack_开头的变量为有意义的名称
"""

import re

def main():
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 需要修复的错误替换
    content = content.replace('aStackParameter3', 'auStack_80')
    
    # 剩余的栈变量替换
    replacements = {
        'uStack_158': 'StackParameter16',
        'uStack_348': 'StackParameter17',
        'puStack_268': 'StackBufferPointer15',
        'uStack_2f0': 'StackParameter18',
        'uStack_150': 'StackParameter19',
        'puStack_90': 'StackBufferPointer16',
        'uStack_38': 'StackParameter20',
        'auStack_368': 'StackArrayBuffer1',
        'puStack_310': 'StackBufferPointer17',
        'puStack_128': 'StackBufferPointer18',
        'puStack_e8': 'StackBufferPointer19',
        'puStack_148': 'StackBufferPointer20',
        'puStack_108': 'StackBufferPointer21',
        'uStack_130': 'StackParameter21',
        'uStack_110': 'StackParameter22',
        'auStack_348': 'StackArrayBuffer2',
        'puStack_138': 'StackBufferPointer22',
        'puStack_130': 'StackBufferPointer23',
        'uStack_120': 'StackParameter23',
        'uStack_48': 'StackParameter24',
        'auStack_168': 'StackArrayBuffer3',
        'auStack_298': 'StackArrayBuffer4',
        'uStack_210': 'StackParameter25',
        'cStack_208': 'StackCharBuffer1',
        'pplStack_220': 'StackPointerPointer1',
        'auStack_180': 'StackArrayBuffer5',
        'uStack_188': 'StackParameter26',
        'uStack_100': 'StackParameter27',
        'ppuStack_1b0': 'StackPointerPointer2',
        'auStack_248': 'StackArrayBuffer6',
        'plStack_68': 'StackLongPointer1',
        'ppplStack_b8': 'StackTriplePointer1',
        'pppplStackX_20': 'StackQuadPointer1',
        'auStack_90': 'StackArrayBuffer7',
        'pppppppuStack_188': 'StackMultiPointer1',
        'puStack_1a0': 'StackBufferPointer24',
        'auStack_258': 'StackArrayBuffer8',
        'auStack_238': 'StackArrayBuffer9',
        'puStack_260': 'StackBufferPointer25',
        'uStack_250': 'StackParameter28',
        'auStack_260': 'StackArrayBuffer10',
        'uStack_28': 'StackParameter29',
        'auStack_2f8': 'StackArrayBuffer11',
        'auStack_228': 'StackArrayBuffer12',
        'auStack_218': 'StackArrayBuffer13',
        'auStack_248': 'StackArrayBuffer14',
        'puStack_50': 'StackBufferPointer26',
        'auStack_38': 'StackArrayBuffer15',
        'uStack_40': 'StackParameter30',
        'auStack_78': 'StackArrayBuffer16',
        'auStack_58': 'StackArrayBuffer17',
        'pplStack_68': 'StackPointerPointer3',
        'puStack_20': 'StackBufferPointer27',
        'puStack_18': 'StackBufferPointer28',
        'puStack_68': 'StackBufferPointer29',
        'puStack_60': 'StackBufferPointer30',
        'uStack_118': 'StackParameter31',
        'uStack_114': 'StackParameter32',
        'uStack_110': 'StackParameter33',
        'fStack_138': 'StackFloatBuffer1',
        'fStack_178': 'StackFloatBuffer2',
        'fStack_128': 'StackFloatBuffer3',
        'fStack_168': 'StackFloatBuffer4',
        'auStack_50': 'StackArrayBuffer18',
        'auStack_30': 'StackArrayBuffer19',
        'acStack_2ff': 'StackCharArray1',
        'puStack_2e8': 'StackBufferPointer31',
        'plStack_2f8': 'StackLongPointer2',
        'puStack_140': 'StackBufferPointer32',
        'puStack_118': 'StackBufferPointer33',
        'uStack_128': 'StackParameter34',
        'puStack_110': 'StackBufferPointer34',
        'uStack_108': 'StackParameter35',
        'uStack_100': 'StackParameter36',
        'puStack_90': 'StackBufferPointer35',
        'uStack_80': 'StackParameter37',
        'puStack_40': 'StackBufferPointer36',
        'uStack_98': 'StackParameter38',
        'puStack_90': 'StackBufferPointer37',
        'uStack_80': 'StackParameter39',
        'uStack_78': 'StackParameter40',
        'puStack_70': 'StackBufferPointer38',
        'auStack_98': 'StackArrayBuffer20',
        'uStack_30': 'StackParameter41',
        'auStack_98': 'StackArrayBuffer21'
    }
    
    # 执行替换
    for old, new in replacements.items():
        content = content.replace(old, new)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("栈变量替换完成")

if __name__ == "__main__":
    main()