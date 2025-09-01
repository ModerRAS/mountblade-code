#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def analyze_and_rename(content):
    # 分析DAT_变量
    dat_vars = set(re.findall(r'DAT_([0-9a-fA-F]{8})', content))
    
    # 分析UNK_变量
    unk_vars = set(re.findall(r'UNK_([0-9a-fA-F]{8})', content))
    
    print(f"发现 {len(dat_vars)} 个DAT_变量")
    print(f"发现 {len(unk_vars)} 个UNK_变量")
    
    # 创建变量映射
    mappings = {}
    
    # DAT_变量映射
    for var in sorted(dat_vars):
        addr = int(var, 16)
        if 0x180c00000 <= addr <= 0x180cfffff:
            mappings[f'DAT_{var}'] = f'SystemConfig{addr & 0xFFFF:04x}'
        elif 0x180bf0000 <= addr <= 0x180bfffff:
            mappings[f'DAT_{var}'] = f'EngineData{addr & 0xFFFF:04x}'
        elif 0x1809f0000 <= addr <= 0x1809fffff:
            mappings[f'DAT_{var}'] = f'GlobalData{addr & 0xFFFF:04x}'
        elif 0x180a00000 <= addr <= 0x180afffff:
            mappings[f'DAT_{var}'] = f'ResourceData{addr & 0xFFFF:04x}'
        elif 0x180d40000 <= addr <= 0x180d4ffff:
            mappings[f'DAT_{var}'] = f'DynamicData{addr & 0xFFFF:04x}'
        else:
            mappings[f'DAT_{var}'] = f'UnknownData{addr & 0xFFFF:04x}'
    
    # UNK_变量映射
    for var in sorted(unk_vars):
        addr = int(var, 16)
        if 0x180a00000 <= addr <= 0x180afffff:
            mappings[f'UNK_{var}'] = f'ResourceHandle{addr & 0xFFFF:04x}'
        elif 0x180980000 <= addr <= 0x18098ffff:
            mappings[f'UNK_{var}'] = f'ProcessBuffer{addr & 0xFFFF:04x}'
        elif 0x180640000 <= addr <= 0x18064ffff:
            mappings[f'UNK_{var}'] = f'CoreSystem{addr & 0xFFFF:04x}'
        elif 0x180a20000 <= addr <= 0x180a2ffff:
            mappings[f'UNK_{var}'] = f'EngineVar{addr & 0xFFFF:04x}'
        else:
            mappings[f'UNK_{var}'] = f'UnknownVar{addr & 0xFFFF:04x}'
    
    return mappings

def replace_variables(content, mappings):
    for old, new in mappings.items():
        content = re.sub(r'\b' + re.escape(old) + r'\b', new, content)
    return content

# 主处理逻辑
content = read_file('06_utilities.c')
mappings = analyze_and_rename(content)
new_content = replace_variables(content, mappings)
write_file('06_utilities.c', new_content)

print("变量重命名完成!")
print(f"总共处理了 {len(mappings)} 个变量")
print("\n部分映射关系:")
for i, (old, new) in enumerate(mappings.items()):
    if i < 20:
        print(f"{old} -> {new}")
    elif i == 20:
        print("...")
        break