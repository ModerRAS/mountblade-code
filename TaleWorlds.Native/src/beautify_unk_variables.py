#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的UNK_变量
根据变量地址模式推断变量用途并赋予有意义的名称
"""

import re
import sys

def analyze_address_pattern(address):
    """根据地址模式分析变量可能的用途"""
    addr_hex = address[6:].lower()  # 去掉'UNK_180'前缀
    
    # 根据地址范围推断变量类型
    if addr_hex.startswith('0'):
        return 'SystemConfiguration'
    elif addr_hex.startswith('1'):
        return 'MemoryManagement'
    elif addr_hex.startswith('2'):
        return 'NetworkHandler'
    elif addr_hex.startswith('3'):
        return 'GraphicsResource'
    elif addr_hex.startswith('4'):
        return 'AudioSystem'
    elif addr_hex.startswith('5'):
        return 'InputHandler'
    elif addr_hex.startswith('6'):
        return 'PhysicsEngine'
    elif addr_hex.startswith('7'):
        return 'ScriptingSystem'
    elif addr_hex.startswith('8'):
        return 'FileSystem'
    elif addr_hex.startswith('9'):
        return 'SecurityManager'
    elif addr_hex.startswith('a'):
        return 'RenderPipeline'
    elif addr_hex.startswith('b'):
        return 'ShaderManager'
    elif addr_hex.startswith('c'):
        return 'TextureManager'
    elif addr_hex.startswith('d'):
        return 'BufferManager'
    elif addr_hex.startswith('e'):
        return 'StateManager'
    elif addr_hex.startswith('f'):
        return 'EventSystem'
    else:
        return 'GlobalData'

def generate_variable_name(address, index):
    """生成有意义的变量名"""
    base_name = analyze_address_pattern(address)
    
    # 根据地址后缀生成更具体的名称
    addr_suffix = address[-4:].lower()
    
    # 使用后缀来区分同类型的变量
    suffix_map = {
        '000': 'Primary',
        '001': 'Secondary',
        '002': 'Tertiary',
        '003': 'Quaternary',
        '004': 'Quinary',
        '005': 'Senary',
        '006': 'Septenary',
        '007': 'Octonary',
        '008': 'Nonary',
        '009': 'Denary',
    }
    
    # 检查是否有预定义的后缀
    for suffix, name in suffix_map.items():
        if addr_suffix.endswith(suffix):
            return f"{base_name}{name}"
    
    # 如果没有预定义后缀，使用序号
    return f"{base_name}Data{index:03d}"

def process_file(input_file, output_file):
    """处理文件，替换UNK_变量名"""
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有UNK_变量声明
    pattern = r'undefined UNK_(180[0-9a-fA-F]+);'
    matches = re.findall(pattern, content)
    
    # 创建替换映射
    replacements = {}
    for i, match in enumerate(matches):
        old_name = f"UNK_{match}"
        new_name = generate_variable_name(old_name, i)
        replacements[old_name] = new_name
    
    # 执行替换
    for old_name, new_name in replacements.items():
        # 只替换完整的变量声明
        content = re.sub(
            rf'undefined {old_name};',
            f'undefined {new_name};',
            content
        )
        
        # 替换变量引用
        content = re.sub(
            rf'&{old_name}',
            f'&{new_name}',
            content
        )
    
    # 写入输出文件
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"处理完成: {len(replacements)} 个变量被重命名")
    return replacements

if __name__ == "__main__":
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions_temp.c"
    
    replacements = process_file(input_file, output_file)
    
    # 输出替换映射
    print("\n替换映射:")
    for old, new in replacements.items():
        print(f"{old} -> {new}")