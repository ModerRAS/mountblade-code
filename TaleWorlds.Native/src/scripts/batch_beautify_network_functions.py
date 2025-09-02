#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量美化网络函数脚本
用于批量重命名05_networking.c中的FUN_函数为有意义的名称
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def extract_function_mappings(content):
    """提取函数映射关系"""
    # 匹配函数定义模式
    pattern = r'// 函数: void FUN_18087a([0-9a-fA-F]{3})\(long long connectionContext,NetworkHandle packetData\)\s*\n\s*void FUN_18087a([0-9a-fA-F]{3})\(long long connectionContext,NetworkHandle packetData\)\s*\n\s*\{\s*\n\s*long long networkContextArray;\s*\n\s*\n\s*if \(\(\*\([^)]+\)\(connectionContext \+ 0x10\) != 0\) &&\s*\n\s*\(networkContextArray = ValidateConnectionDataAccess\(\*\([^)]+\)\(connectionContext \+ 0x10\) \+ ([0-9xa-fA-F]+)\), networkContextArray != 0\)\)'
    
    matches = re.findall(pattern, content, re.DOTALL)
    
    mappings = []
    for match in matches:
        func_suffix = match[0]
        offset = match[2]
        
        # 生成函数名
        if offset.startswith('0x'):
            func_name = f"ValidateNetworkDataAccessOffset{offset[2:]}"
        else:
            func_name = f"ValidateNetworkDataAccessOffset{offset}"
        
        mappings.append({
            'original': f'FUN_18087a{func_suffix}',
            'new_name': func_name,
            'offset': offset
        })
    
    return mappings

def generate_function_comment(func_name, offset):
    """生成函数注释"""
    return f'''/**
 * 验证网络连接数据访问（偏移量{offset}）
 * 
 * 该函数负责验证网络连接数据在特定偏移量（{offset}）的访问权限。
 * 主要用于网络连接数据访问的安全检查。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 * @return void
 * 
 * 原始函数名为{func_name}，现已重命名为ValidateNetworkDataAccessOffset{offset.replace("0x", "")}
 */'''

def process_functions(content):
    """处理所有函数"""
    lines = content.split('\n')
    new_lines = []
    i = 0
    
    while i < len(lines):
        line = lines[i]
        
        # 检查是否是函数定义行
        if '// 函数: void FUN_18087a' in line and 'long long connectionContext,NetworkHandle packetData)' in line:
            # 提取函数名
            func_match = re.search(r'FUN_18087a([0-9a-fA-F]{3})', line)
            if func_match:
                func_suffix = func_match.group(1)
                original_func = f'FUN_18087a{func_suffix}'
                
                # 查找下一行的函数实现
                if i + 1 < len(lines):
                    impl_line = lines[i + 1]
                    if f'void {original_func}(' in impl_line:
                        # 查找偏移量
                        offset = None
                        for j in range(i + 2, min(i + 10, len(lines))):
                            if 'ValidateConnectionDataAccess' in lines[j] and '+' in lines[j]:
                                offset_match = re.search(r'\+ ([0-9xa-fA-F]+)', lines[j])
                                if offset_match:
                                    offset = offset_match.group(1)
                                    break
                        
                        if offset:
                            # 生成新函数名
                            if offset.startswith('0x'):
                                new_func_name = f"ValidateNetworkDataAccessOffset{offset[2:]}"
                            else:
                                new_func_name = f"ValidateNetworkDataAccessOffset{offset}"
                            
                            # 替换函数定义
                            new_lines.append(line)
                            new_lines.append(generate_function_comment(original_func, offset))
                            new_lines.append(f'void {new_func_name}(long long connectionContext,NetworkHandle packetData)')
                            i += 2
                            continue
        
        new_lines.append(line)
        i += 1
    
    return '\n'.join(new_lines)

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    print("开始处理网络函数美化...")
    
    # 读取文件
    content = read_file(file_path)
    print(f"文件读取成功，长度: {len(content)} 字符")
    
    # 处理函数
    new_content = process_functions(content)
    print("函数处理完成")
    
    # 写入文件
    write_file(file_path, new_content)
    print("文件写入完成")
    
    print("网络函数美化完成")

if __name__ == '__main__':
    main()