#!/usr/bin/env python3
"""
美化00_data_definitions.h文件的脚本
将序号命名（Primary, Secondary等）替换为语义化命名
"""

import re

def replace_ordinal_names(content):
    """将序号命名替换为语义化命名"""
    
    # 定义替换规则
    replacements = {
        'Primary': 'Main',
        'Secondary': 'Backup', 
        'Tertiary': 'Cache',
        'Quaternary': 'Temp',
        'Quinary': 'Reserved',
        'Senary': 'Secure',
        'Septenary': 'Debug',
        'Octonary': 'Log',
        'Nonary': 'Config',
        'Denary': 'State',
        'Undenary': 'Event',
        'Duodenary': 'Callback',
        'Terdenary': 'Handler',
        'QuaternarySecondary': 'Manager',
        'QuinarySecondary': 'Controller',
        'SenarySecondary': 'Processor',
        'SeptenarySecondary': 'Encoder',
        'OctonarySecondary': 'Decoder',
        'NonarySecondary': 'Validator',
        'DenarySecondary': 'Formatter',
        'UndenarySecondary': 'Parser',
        'DuodenarySecondary': 'Optimizer',
        'TerdenarySecondary': 'Compressor',
        'QuaternaryTertiary': 'Encryptor',
        'QuinaryTertiary': 'Decryptor',
        'SenaryTertiary': 'Hasher',
        'SeptenaryTertiary': 'Signer',
        'OctonaryTertiary': 'Verifier',
        'NonaryTertiary': 'Converter',
        'DenaryTertiary': 'Transformer',
        'UndenaryTertiary': 'Normalizer',
        'DuodenaryTertiary': 'Sanitizer',
        'TerdenaryTertiary': 'Serializer'
    }
    
    # 应用替换规则
    for old, new in replacements.items():
        # 只替换变量名中的序号，不替换字符串常量
        content = re.sub(rf'void\*\s*(\w*{old})', rf'void* {re.sub(old, new, r"\1")}', content)
        content = re.sub(rf'char\s+(\w*\[{old}\])', rf'char {re.sub(old, new, r"\1")}', content)
        content = re.sub(rf'char\s+(\w*\[\]\s*=\s*"[^"]*{old}[^"]*")', rf'char {re.sub(old, new, r"\1")}', content)
        content = re.sub(rf'#define\s+(\w*{old})', rf'#define {re.sub(old, new, r"\1")}', content)
    
    return content

def main():
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 应用替换
    content = replace_ordinal_names(content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("文件美化完成！")

if __name__ == '__main__':
    main()