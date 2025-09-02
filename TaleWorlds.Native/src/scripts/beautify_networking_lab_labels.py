#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
网络模块LAB标签美化脚本
用于将05_networking.c文件中的LAB_标签替换为有意义的标签名

改进版本：更智能地分析上下文，生成语义化的标签名称
"""

import re
import sys
from collections import defaultdict

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

def extract_lab_context(content):
    """提取所有LAB标签及其上下文"""
    lines = content.split('\n')
    lab_contexts = defaultdict(list)
    
    for i, line in enumerate(lines):
        # 匹配LAB_标签
        lab_pattern = r'LAB_18086[0-9a-fA-F]{4}'
        matches = re.finditer(lab_pattern, line)
        
        for match in matches:
            lab_name = match.group()
            # 获取上下文信息（前后2行）
            context_start = max(0, i-2)
            context_end = min(len(lines), i+3)
            context_lines = lines[context_start:context_end]
            
            lab_contexts[lab_name].append({
                'line_num': i+1,
                'line': line.strip(),
                'context': '\n'.join(context_lines)
            })
    
    return lab_contexts

def analyze_label_functionality(lab_contexts):
    """分析LAB标签的功能并生成语义化名称"""
    replacement_map = {}
    
    for lab_name, contexts in lab_contexts.items():
        # 分析上下文关键词
        all_contexts = '\n'.join([ctx['context'] for ctx in contexts]).lower()
        
        # 根据上下文关键词判断功能
        if any(keyword in all_contexts for keyword in ['connectionoperationcomplete', 'operationcomplete']):
            new_name = 'LAB_ConnectionOperationComplete'
        elif any(keyword in all_contexts for keyword in ['timeout', 'timeoutvalue']):
            new_name = 'LAB_TimeoutCheck'
        elif any(keyword in all_contexts for keyword in ['validation', 'validate']):
            new_name = 'LAB_ValidationCheck'
        elif any(keyword in all_contexts for keyword in ['error', 'handler']):
            new_name = 'LAB_ErrorHandler'
        elif any(keyword in all_contexts for keyword in ['connection', 'state']):
            new_name = 'LAB_ConnectionStateHandler'
        elif any(keyword in all_contexts for keyword in ['buffer', 'networkbuffer']):
            new_name = 'LAB_BufferProcessing'
        elif any(keyword in all_contexts for keyword in ['initialize', 'init']):
            new_name = 'LAB_InitializeConnection'
        elif any(keyword in all_contexts for keyword in ['cleanup', 'close']):
            new_name = 'LAB_CleanupHandler'
        elif any(keyword in all_contexts for keyword in ['status', 'check']):
            new_name = 'LAB_StatusCheck'
        elif any(keyword in all_contexts for keyword in ['handle', 'processing']):
            new_name = 'LAB_ConnectionHandler'
        elif any(keyword in all_contexts for keyword in ['network', 'context']):
            new_name = 'LAB_NetworkContextProcessing'
        elif any(keyword in all_contexts for keyword in ['return', 'complete']):
            new_name = 'LAB_ReturnPoint'
        else:
            # 根据地址范围分配通用名称
            address = lab_name[4:]  # 去掉LAB_前缀
            addr_num = int(address, 16)
            
            if addr_num < 0x378e:
                new_name = 'LAB_ConnectionProcessing'
            elif addr_num < 0x4000:
                new_name = 'LAB_StateMachineHandler'
            elif addr_num < 0x6000:
                new_name = 'LAB_TimeoutValidation'
            elif addr_num < 0x8000:
                new_name = 'LAB_ContextValidation'
            elif addr_num < 0xa000:
                new_name = 'LAB_BufferManagement'
            elif addr_num < 0xc000:
                new_name = 'LAB_ConnectionSetup'
            elif addr_num < 0xe000:
                new_name = 'LAB_NetworkTransfer'
            else:
                new_name = 'LAB_OperationComplete'
        
        replacement_map[lab_name] = new_name
    
    return replacement_map

def replace_lab_labels(content, replacement_map):
    """替换LAB标签"""
    for old_label, new_label in replacement_map.items():
        # 使用正则表达式确保只替换完整的标签名
        pattern = r'\b' + re.escape(old_label) + r'\b'
        content = re.sub(pattern, new_label, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    print("开始分析05_networking.c文件中的LAB_标签...")
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return 1
    
    # 提取LAB标签上下文
    lab_contexts = extract_lab_context(content)
    print(f"发现 {len(lab_contexts)} 个不同的LAB_标签")
    
    # 分析标签功能
    replacement_map = analyze_label_functionality(lab_contexts)
    print(f"生成了 {len(replacement_map)} 个语义化标签映射")
    
    # 显示映射关系
    print("\n标签映射关系:")
    for old_name, new_name in sorted(replacement_map.items()):
        print(f"  {old_name} -> {new_name}")
    
    # 替换标签
    print(f"\n开始替换标签...")
    new_content = replace_lab_labels(content, replacement_map)
    
    # 写入文件
    if write_file(file_path, new_content):
        print(f"成功美化 {len(replacement_map)} 个LAB标签")
        print("LAB_标签美化完成！")
        return 0
    else:
        return 1

if __name__ == '__main__':
    sys.exit(main())