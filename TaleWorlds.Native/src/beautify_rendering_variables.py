#!/usr/bin/env python3
"""
渲染系统变量名美化脚本
用于批量替换03_rendering.c文件中的UNK_变量为语义化名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def generate_semantic_name(base_name, index):
    """根据索引生成语义化名称"""
    prefixes = [
        "RenderState", "RenderParam", "RenderConfig", "RenderData", "RenderBuffer",
        "RenderTexture", "RenderShader", "RenderPipeline", "RenderTarget", "RenderResource",
        "RenderContext", "RenderDevice", "RenderCommand", "RenderQueue", "RenderPool",
        "RenderCache", "RenderTable", "RenderManager", "RenderSystem", "RenderObject"
    ]
    
    suffixes = [
        "Primary", "Secondary", "Main", "Aux", "Temp", "Local", "Global", "Static", 
        "Dynamic", "Active", "Current", "Default", "Backup", "Cache", "Buffer",
        "Pointer", "Handle", "Reference", "Instance", "Context", "Configuration"
    ]
    
    # 根据地址的最后几位数字来选择前缀和后缀
    addr_suffix = str(index)[-4:]
    prefix_idx = int(addr_suffix[0:2]) % len(prefixes)
    suffix_idx = int(addr_suffix[2:4]) % len(suffixes)
    
    return f"{prefixes[prefix_idx]}{suffixes[suffix_idx]}{addr_suffix}"

def replace_unk_variables(content):
    """替换UNK_变量为语义化名称"""
    # 查找所有UNK_变量
    unk_pattern = r'undefined\s+(UNK_[0-9a-fA-F]+);'
    matches = re.findall(unk_pattern, content)
    
    # 创建替换映射
    replacement_map = {}
    for match in matches:
        if match not in replacement_map:
            # 从地址中提取数字部分
            addr_num = match[8:]  # 去掉"UNK_180"前缀
            semantic_name = generate_semantic_name("UNK", addr_num)
            replacement_map[match] = semantic_name
    
    # 执行替换
    for old_name, new_name in replacement_map.items():
        # 替换变量声明
        content = re.sub(rf'undefined\s+{re.escape(old_name)};', f'void* {new_name};', content)
        # 替换变量引用
        content = re.sub(rf'\b{re.escape(old_name)}\b', new_name, content)
    
    return content, replacement_map

def replace_fun_functions(content):
    """替换FUN_函数为语义化名称"""
    # 查找所有FUN_函数
    fun_pattern = r'undefined\s+(FUN_[0-9a-fA-F]+);'
    matches = re.findall(fun_pattern, content)
    
    # 创建替换映射
    replacement_map = {}
    for match in matches:
        if match not in replacement_map:
            # 从地址中提取数字部分
            addr_num = match[8:]  # 去掉"FUN_180"前缀
            semantic_name = f"RenderFunction{addr_num}"
            replacement_map[match] = semantic_name
    
    # 执行替换
    for old_name, new_name in replacement_map.items():
        # 替换函数声明
        content = re.sub(rf'undefined\s+{re.escape(old_name)};', f'void* {new_name};', content)
        # 替换函数引用
        content = re.sub(rf'\b{re.escape(old_name)}\b', new_name, content)
    
    return content, replacement_map

def replace_dat_variables(content):
    """替换DAT_变量为语义化名称"""
    # 查找所有DAT_变量
    dat_pattern = r'undefined\s+(DAT_[0-9a-fA-F]+);'
    matches = re.findall(dat_pattern, content)
    
    # 创建替换映射
    replacement_map = {}
    for match in matches:
        if match not in replacement_map:
            # 从地址中提取数字部分
            addr_num = match[6:]  # 去掉"DAT_"前缀
            semantic_name = f"RenderData{addr_num}"
            replacement_map[match] = semantic_name
    
    # 执行替换
    for old_name, new_name in replacement_map.items():
        # 替换变量声明
        content = re.sub(rf'undefined\s+{re.escape(old_name)};', f'void* {new_name};', content)
        # 替换变量引用
        content = re.sub(rf'\b{re.escape(old_name)}\b', new_name, content)
    
    return content, replacement_map

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return 1
    
    print("开始美化03_rendering.c文件...")
    
    # 替换UNK_变量
    content, unk_map = replace_unk_variables(content)
    print(f"替换了 {len(unk_map)} 个UNK_变量")
    
    # 替换FUN_函数
    content, fun_map = replace_fun_functions(content)
    print(f"替换了 {len(fun_map)} 个FUN_函数")
    
    # 替换DAT_变量
    content, dat_map = replace_dat_variables(content)
    print(f"替换了 {len(dat_map)} 个DAT_变量")
    
    # 写入文件
    if write_file(file_path, content):
        print("文件美化完成！")
        return 0
    else:
        return 1

if __name__ == "__main__":
    sys.exit(main())