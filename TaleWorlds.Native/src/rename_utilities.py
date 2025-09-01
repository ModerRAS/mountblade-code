#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
06_utilities.c 文件美化脚本
用于重命名 DAT_ 和 UNK_ 变量为语义化名称
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

def analyze_dat_variables(content):
    """分析 DAT_ 变量的使用上下文"""
    # 找到所有 DAT_ 变量
    dat_pattern = r'DAT_([0-9a-fA-F]{8})'
    dat_vars = re.findall(dat_pattern, content)
    
    # 根据地址范围推断变量用途
    variable_mappings = {}
    
    # 分析已知的变量映射关系
    for var in sorted(set(dat_vars)):
        address = int(var, 16)
        
        # 根据地址范围推断变量类型
        if 0x180c00000 <= address <= 0x180cfffff:
            # 配置数据区域
            if 0x180c30000 <= address <= 0x180c3ffff:
                variable_mappings[f'DAT_{var}'] = f'ConfigData{address & 0xFFFF:04x}'
            elif 0x180c80000 <= address <= 0x180c8ffff:
                # 系统内存配置模板
                if 0x180c82000 <= address <= 0x180c82fff:
                    variable_mappings[f'DAT_{var}'] = f'MemoryConfigTemplate{address & 0xFFF:03x}'
                elif 0x180c86000 <= address <= 0x180c86fff:
                    variable_mappings[f'DAT_{var}'] = f'ResourceBuffer{address & 0xFFF:03x}'
                elif 0x180c8e000 <= address <= 0x180c8efff:
                    variable_mappings[f'DAT_{var}'] = f'EngineStateData{address & 0xFFF:03x}'
                else:
                    variable_mappings[f'DAT_{var}'] = f'SystemConfig{address & 0xFFFF:04x}'
            elif 0x180c90000 <= address <= 0x180c9ffff:
                variable_mappings[f'DAT_{var}'] = f'ResourceTable{address & 0xFFFF:04x}'
            else:
                variable_mappings[f'DAT_{var}'] = f'GlobalData{address & 0xFFFF:04x}'
        elif 0x180bf0000 <= address <= 0x180bfffff:
            # 引擎数据区域
            if 0x180bf5000 <= address <= 0x180bf5fff:
                variable_mappings[f'DAT_{var}'] = f'EngineHandle{address & 0xFFF:03x}'
            elif 0x180bfb000 <= address <= 0x180bfcfff:
                variable_mappings[f'DAT_{var}'] = f'NetworkBuffer{address & 0x1FFF:04x}'
            else:
                variable_mappings[f'DAT_{var}'] = f'EngineData{address & 0xFFFF:04x}'
        elif 0x1809f0000 <= address <= 0x1809fffff:
            # 系统数据区域
            variable_mappings[f'DAT_{var}'] = f'SystemData{address & 0xFFFF:04x}'
        elif 0x180a00000 <= address <= 0x180afffff:
            # 资源数据区域
            variable_mappings[f'DAT_{var}'] = f'ResourceData{address & 0xFFFF:04x}'
        elif 0x180d40000 <= address <= 0x180d4ffff:
            # 动态数据区域
            variable_mappings[f'DAT_{var}'] = f'DynamicData{address & 0xFFFF:04x}'
        else:
            variable_mappings[f'DAT_{var}'] = f'UnknownData{address & 0xFFFF:04x}'
    
    return variable_mappings

def analyze_unk_variables(content):
    """分析 UNK_ 变量的使用上下文"""
    # 找到所有 UNK_ 变量
    unk_pattern = r'UNK_([0-9a-fA-F]{8})'
    unk_vars = re.findall(unk_pattern, content)
    
    variable_mappings = {}
    
    for var in sorted(set(unk_vars)):
        address = int(var, 16)
        
        # 根据地址范围推断变量类型
        if 0x180a00000 <= address <= 0x180afffff:
            # 资源相关变量
            if 0x180a30000 <= address <= 0x180a3ffff:
                variable_mappings[f'UNK_{var}'] = f'ResourcePool{address & 0xFFFF:04x}'
            else:
                variable_mappings[f'UNK_{var}'] = f'ResourceHandle{address & 0xFFFF:04x}'
        elif 0x180980000 <= address <= 0x18098ffff:
            # 系统处理变量
            if 0x180982000 <= address <= 0x180982fff:
                variable_mappings[f'UNK_{var}'] = f'ProcessBuffer{address & 0xFFF:03x}'
            elif 0x180983000 <= address <= 0x180983fff:
                variable_mappings[f'UNK_{var}'] = f'ThreadContext{address & 0xFFF:03x}'
            elif 0x180984000 <= address <= 0x180984fff:
                variable_mappings[f'UNK_{var}'] = f'SyncObject{address & 0xFFF:03x}'
            elif 0x180985000 <= address <= 0x180985fff:
                variable_mappings[f'UNK_{var}'] = f'MemoryBlock{address & 0xFFF:03x}'
            elif 0x180986000 <= address <= 0x180986fff:
                variable_mappings[f'UNK_{var}'] = f'DataBuffer{address & 0xFFF:03x}'
            else:
                variable_mappings[f'UNK_{var}'] = f'SystemVar{address & 0xFFFF:04x}'
        elif 0x180640000 <= address <= 0x18064ffff:
            # 核心系统变量
            variable_mappings[f'UNK_{var}'] = f'CoreSystem{address & 0xFFFF:04x}'
        elif 0x180a20000 <= address <= 0x180a2ffff:
            # 引擎变量
            variable_mappings[f'UNK_{var}'] = f'EngineVar{address & 0xFFFF:04x}'
        elif 0x180a3c000 <= address <= 0x180a3cfff:
            # 配置变量
            variable_mappings[f'UNK_{var}'] = f'ConfigVar{address & 0xFFF:03x}'
        elif 0x180a3d000 <= address <= 0x180a3dfff:
            # 状态变量
            variable_mappings[f'UNK_{var}'] = f'StatusVar{address & 0xFFF:03x}'
        elif 0x180a3e000 <= address <= 0x180a3efff:
            # 缓冲变量
            variable_mappings[f'UNK_{var}'] = f'BufferVar{address & 0xFFF:03x}'
        else:
            variable_mappings[f'UNK_{var}'] = f'UnknownVar{address & 0xFFFF:04x}'
    
    return variable_mappings

def rename_variables(content, variable_mappings):
    """重命名变量"""
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式进行精确匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    return content

def generate_function_documentation():
    """生成函数文档注释模板"""
    # 这个函数将在实际处理时根据具体函数来生成文档
    pass

def main():
    """主函数"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("正在读取文件...")
    content = read_file(input_file)
    
    print("正在分析 DAT_ 变量...")
    dat_mappings = analyze_dat_variables(content)
    
    print("正在分析 UNK_ 变量...")
    unk_mappings = analyze_unk_variables(content)
    
    print(f"发现 {len(dat_mappings)} 个 DAT_ 变量")
    print(f"发现 {len(unk_mappings)} 个 UNK_ 变量")
    
    # 合并映射
    all_mappings = {**dat_mappings, **unk_mappings}
    
    print("正在重命名变量...")
    new_content = rename_variables(content, all_mappings)
    
    print("正在写入文件...")
    write_file(input_file, new_content)
    
    print("文件美化完成！")
    
    # 输出变量映射关系
    print("\n变量映射关系:")
    for old_name, new_name in sorted(all_mappings.items()):
        print(f"{old_name} -> {new_name}")

if __name__ == "__main__":
    main()