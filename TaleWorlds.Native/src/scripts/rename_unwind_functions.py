#!/usr/bin/env python3
"""
批量重命名unwind函数的脚本
将Unwind_18090xxxx开头的函数重命名为有意义的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_unwind_functions(content):
    """重命名unwind函数"""
    
    # 定义函数名映射
    function_mappings = {
        # 资源清理相关
        'Unwind_180902a60': 'CleanupResourceHandleA',
        'Unwind_180902a70': 'CleanupResourceHandleB', 
        'Unwind_180902a80': 'CleanupResourceHandleC',
        'Unwind_180902a90': 'CleanupResourceHandleD',
        'Unwind_180902ab0': 'CleanupResourceHandleE',
        'Unwind_180902af0': 'CleanupResourceHandleF',
        'Unwind_180902b00': 'CleanupResourceHandleG',
        'Unwind_180902b30': 'CleanupResourceHandleH',
        'Unwind_180902b60': 'CleanupResourceHandleI',
        'Unwind_180902b70': 'CleanupResourceHandleJ',
        'Unwind_180902b80': 'CleanupResourceHandleK',
        'Unwind_180902b90': 'CleanupResourceHandleL',
        'Unwind_180902ba0': 'CleanupResourceHandleM',
        'Unwind_180902bb0': 'CleanupResourceHandleN',
        'Unwind_180902bc0': 'CleanupResourceHandleO',
        'Unwind_180902bd0': 'CleanupResourceHandleP',
        'Unwind_180902be0': 'CleanupResourceHandleQ',
        'Unwind_180902bf0': 'CleanupResourceHandleR',
        'Unwind_180902c00': 'CleanupResourceHandleS',
        'Unwind_180902c10': 'CleanupResourceHandleT',
        'Unwind_180902c20': 'CleanupResourceHandleU',
        'Unwind_180902c30': 'CleanupResourceHandleV',
        'Unwind_180902c40': 'CleanupResourceHandleW',
        'Unwind_180902c50': 'CleanupResourceHandleX',
        'Unwind_180902c90': 'CleanupResourceHandleY',
        'Unwind_180902ca0': 'CleanupResourceHandleZ',
        'Unwind_180902cb0': 'CleanupResourceHandleAA',
        'Unwind_180902cc0': 'CleanupResourceHandleBB',
        'Unwind_180902cd0': 'CleanupResourceHandleCC',
        'Unwind_180902ce0': 'CleanupResourceHandleDD',
        'Unwind_180902cf0': 'CleanupResourceHandleEE',
        'Unwind_180902d00': 'CleanupResourceHandleFF',
        'Unwind_180902d10': 'CleanupResourceHandleGG',
        'Unwind_180902d20': 'CleanupResourceHandleHH',
        'Unwind_180902d30': 'CleanupResourceHandleII',
        'Unwind_180902d40': 'CleanupResourceHandleJJ',
        'Unwind_180902d50': 'CleanupResourceHandleKK',
        'Unwind_180902d70': 'CleanupResourceHandleLL',
        'Unwind_180902d90': 'CleanupResourceHandleMM',
        'Unwind_180902db0': 'CleanupResourceHandleNN',
        'Unwind_180902dd0': 'CleanupResourceHandleOO',
        'Unwind_180902df0': 'CleanupResourceHandlePP',
        'Unwind_180902e10': 'CleanupResourceHandleQQ',
        'Unwind_180902e30': 'CleanupResourceHandleRR',
        'Unwind_180902e40': 'CleanupResourceHandleSS',
        'Unwind_180902e50': 'CleanupResourceHandleTT',
        'Unwind_180902e60': 'CleanupResourceHandleUU',
        'Unwind_180902e70': 'CleanupResourceHandleVV',
        'Unwind_180902e80': 'CleanupResourceHandleWW',
        'Unwind_180902e90': 'CleanupResourceHandleXX',
        'Unwind_180902eb0': 'CleanupResourceHandleYY',
        'Unwind_180902ec0': 'CleanupResourceHandleZZ',
        'Unwind_180902ed0': 'CleanupResourceHandleAAA',
        'Unwind_180902ee0': 'CleanupResourceHandleBBB',
        'Unwind_180902f60': 'CleanupResourceHandleCCC',
        'Unwind_180902fa0': 'CleanupResourceHandleDDD',
        
        # 上下文清理相关
        'Unwind_180903030': 'CleanupObjectContextA',
        'Unwind_180903040': 'CleanupObjectContextB',
        'Unwind_180903050': 'CleanupObjectContextC',
        'Unwind_180903060': 'CleanupObjectContextD',
        'Unwind_180903070': 'CleanupObjectContextE',
        'Unwind_180903080': 'CleanupObjectContextF',
        'Unwind_180903090': 'CleanupObjectContextG',
        'Unwind_1809030a0': 'CleanupObjectContextH',
        'Unwind_1809030b0': 'CleanupObjectContextI',
        'Unwind_1809030c0': 'CleanupObjectContextJ',
        'Unwind_1809030d0': 'CleanupObjectContextK',
        'Unwind_1809030f0': 'CleanupObjectContextL',
        'Unwind_180903100': 'CleanupObjectContextM',
        'Unwind_180903110': 'CleanupObjectContextN',
        'Unwind_180903120': 'CleanupObjectContextO',
        'Unwind_180903130': 'CleanupObjectContextP',
        'Unwind_180903140': 'CleanupObjectContextQ',
        'Unwind_180903150': 'CleanupObjectContextR',
        'Unwind_180903160': 'CleanupObjectContextS',
        'Unwind_180903170': 'CleanupObjectContextT',
        'Unwind_180903180': 'CleanupObjectContextU',
        'Unwind_180903190': 'CleanupObjectContextV',
        'Unwind_1809031a0': 'CleanupObjectContextW',
        'Unwind_1809031b0': 'CleanupObjectContextX',
        'Unwind_1809031c0': 'CleanupObjectContextY',
        'Unwind_1809031e0': 'CleanupObjectContextZ',
        'Unwind_1809031f0': 'CleanupObjectContextAA',
        'Unwind_180903200': 'CleanupObjectContextBB',
        'Unwind_180903210': 'CleanupObjectContextCC',
        'Unwind_180903220': 'CleanupObjectContextDD',
        'Unwind_180903230': 'CleanupObjectContextEE',
        'Unwind_180903240': 'CleanupObjectContextFF',
        'Unwind_180903250': 'CleanupObjectContextGG',
        'Unwind_180903270': 'CleanupObjectContextHH',
        'Unwind_180903290': 'CleanupObjectContextII',
        'Unwind_1809032b0': 'CleanupObjectContextJJ',
        'Unwind_1809032d0': 'CleanupObjectContextKK',
        'Unwind_1809032e0': 'CleanupObjectContextLL',
        'Unwind_1809032f0': 'CleanupObjectContextMM',
        'Unwind_180903300': 'CleanupObjectContextNN',
        'Unwind_180903310': 'CleanupObjectContextOO',
        'Unwind_180903320': 'CleanupObjectContextPP',
        'Unwind_180903330': 'CleanupObjectContextQQ',
        'Unwind_180903340': 'CleanupObjectContextRR',
        'Unwind_180903350': 'CleanupObjectContextSS',
        'Unwind_180903360': 'CleanupObjectContextTT',
        'Unwind_180903370': 'CleanupObjectContextUU',
        'Unwind_1809033b0': 'CleanupObjectContextVV',
        'Unwind_1809033f0': 'CleanupObjectContextWW',
        'Unwind_180903430': 'CleanupObjectContextXX',
        'Unwind_180903440': 'CleanupObjectContextYY',
        'Unwind_180903450': 'CleanupObjectContextZZ',
        'Unwind_180903460': 'CleanupObjectContextAAA',
        'Unwind_180903470': 'CleanupObjectContextBBB',
        'Unwind_180903490': 'CleanupObjectContextCCC',
        'Unwind_1809034b0': 'CleanupObjectContextDDD',
        'Unwind_1809034c0': 'CleanupObjectContextEEE',
        'Unwind_1809034d0': 'CleanupObjectContextFFF',
        'Unwind_1809034e0': 'CleanupObjectContextGGG',
        'Unwind_1809034f0': 'CleanupObjectContextHHH',
        'Unwind_180903500': 'CleanupObjectContextIII',
        'Unwind_180903510': 'CleanupObjectContextJJJ',
        'Unwind_180903520': 'CleanupObjectContextKKK',
        'Unwind_180903540': 'CleanupObjectContextLLL',
        'Unwind_180903560': 'CleanupObjectContextMMM',
        'Unwind_180903580': 'CleanupObjectContextNNN',
        'Unwind_180903590': 'CleanupObjectContextOOO',
        'Unwind_1809035b0': 'CleanupObjectContextPPP',
        'Unwind_1809035d0': 'CleanupObjectContextQQQ',
        'Unwind_1809035e0': 'CleanupObjectContextRRR',
        'Unwind_1809035f0': 'CleanupObjectContextSSS',
        'Unwind_180903600': 'CleanupObjectContextTTT',
        'Unwind_180903610': 'CleanupObjectContextUUU',
        'Unwind_180903620': 'CleanupObjectContextVVV',
        'Unwind_180903640': 'CleanupObjectContextWWW',
        'Unwind_180903660': 'CleanupObjectContextXXX',
        'Unwind_180903680': 'CleanupObjectContextYYY',
        'Unwind_1809036a0': 'CleanupObjectContextZZZ',
        'Unwind_1809036c0': 'CleanupObjectContextAAAA',
        'Unwind_1809036e0': 'CleanupObjectContextBBBB',
        'Unwind_180903700': 'CleanupObjectContextCCCC',
        'Unwind_180903720': 'CleanupObjectContextDDDD',
        'Unwind_180903740': 'CleanupObjectContextEEEE',
        'Unwind_180903760': 'CleanupObjectContextFFFF',
        'Unwind_180903770': 'CleanupObjectContextGGGG',
        'Unwind_180903790': 'CleanupObjectContextHHHH',
        'Unwind_1809037b0': 'CleanupObjectContextIIII',
        'Unwind_1809037d0': 'CleanupObjectContextJJJJ',
        'Unwind_1809037f0': 'CleanupObjectContextKKKK',
        'Unwind_180903810': 'CleanupObjectContextLLLL',
        'Unwind_180903830': 'CleanupObjectContextMMMM',
        'Unwind_180903850': 'CleanupObjectContextNNNN',
        'Unwind_180903870': 'CleanupObjectContextOOOO',
        'Unwind_180903890': 'CleanupObjectContextPPPP',
        'Unwind_1809038b0': 'CleanupObjectContextQQQQ',
        'Unwind_1809038c0': 'CleanupObjectContextRRRR',
        'Unwind_1809038d0': 'CleanupObjectContextSSSS',
        'Unwind_1809038e0': 'CleanupObjectContextTTTT',
        'Unwind_180903930': 'CleanupObjectContextUUUU',
        'Unwind_180903950': 'CleanupObjectContextVVVV',
        'Unwind_180903970': 'CleanupObjectContextWWWW',
        'Unwind_180903990': 'CleanupObjectContextXXXX',
        'Unwind_1809039b0': 'CleanupObjectContextYYYY',
        'Unwind_1809039d0': 'CleanupObjectContextZZZZ',
        'Unwind_1809039f0': 'CleanupObjectContextAAAAA',
        'Unwind_180903a10': 'CleanupObjectContextBBBBB',
        'Unwind_180903a30': 'CleanupObjectContextCCCCC',
        'Unwind_180903a50': 'CleanupObjectContextDDDDD',
        'Unwind_180903a70': 'CleanupObjectContextEEEEE',
        'Unwind_180903a90': 'CleanupObjectContextFFFFF',
        'Unwind_180903ab0': 'CleanupObjectContextGGGGG',
        'Unwind_180903ac0': 'CleanupObjectContextHHHHH',
        'Unwind_180903ad0': 'CleanupObjectContextIIIII',
        'Unwind_180903ae0': 'CleanupObjectContextJJJJJ',
        'Unwind_180903af0': 'CleanupObjectContextKKKKK',
        'Unwind_180903b00': 'CleanupObjectContextLLLLL',
        'Unwind_180903b20': 'CleanupObjectContextMMMMM',
        'Unwind_180903b40': 'CleanupObjectContextNNNNN',
        'Unwind_180903b60': 'CleanupObjectContextOOOOO',
        'Unwind_180903b80': 'CleanupObjectContextPPPPP',
        'Unwind_180903ba0': 'CleanupObjectContextQQQQQ',
        'Unwind_180903bc0': 'CleanupObjectContextRRRRR',
        'Unwind_180903be0': 'CleanupObjectContextSSSSS',
        'Unwind_180903c00': 'CleanupObjectContextTTTTT',
        'Unwind_180903c20': 'CleanupObjectContextUUUUU',
        'Unwind_180903c40': 'CleanupObjectContextVVVVV',
        'Unwind_180903c60': 'CleanupObjectContextWWWWW',
        'Unwind_180903c80': 'CleanupObjectContextXXXXX',
        'Unwind_180903ca0': 'CleanupObjectContextYYYYY',
        'Unwind_180903cc0': 'CleanupObjectContextZZZZZ',
        'Unwind_180903cd0': 'CleanupObjectContextAAAAAA',
        'Unwind_180903ce0': 'CleanupObjectContextBBBBBB',
        'Unwind_180903cf0': 'CleanupObjectContextCCCCCC',
        'Unwind_180903d10': 'CleanupObjectContextDDDDDD',
        'Unwind_180903d30': 'CleanupObjectContextEEEEEE',
        'Unwind_180903d50': 'CleanupObjectContextFFFFFF',
        'Unwind_180903d70': 'CleanupObjectContextGGGGGG',
        'Unwind_180903d90': 'CleanupObjectContextHHHHHH',
        
        # 其他特定函数
        'Unwind_180904830': 'ResetSystemDataStructure',
        'Unwind_180904840': 'FreeResourceIndexHandle',
        'Unwind_180904870': 'ResetSystemResourceHandler',
        'Unwind_180904880': 'ResetSystemDataPointer',
        'Unwind_180904890': 'ResetSystemContextPointer',
        'Unwind_1809048a0': 'ResetResourceHashTable',
        'Unwind_1809048b0': 'ResetSystemDataReference',
        'Unwind_1809048c0': 'ResetSystemContextReference',
        'Unwind_1809048d0': 'ResetSystemMemoryPointer',
    }
    
    # 执行替换
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python rename_unwind_functions.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 重命名函数
    new_content = rename_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"Successfully renamed unwind functions in {file_path}")

if __name__ == "__main__":
    main()