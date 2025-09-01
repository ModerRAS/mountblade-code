#!/usr/bin/env python3
"""
Core Engine Function Renamer
用于美化02_core_engine.c文件中的函数名
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def extract_function_mappings(content):
    """提取函数映射关系"""
    mappings = {}
    
    # 匹配函数声明和文档注释
    pattern = r'// 函数: (void FUN_180[a-fA-F0-9]+\(.*\))\s*/\*\*.*?\* @brief (.*?)\s*\*/'
    matches = re.findall(pattern, content, re.DOTALL)
    
    for func_decl, brief in matches:
        # 提取函数名
        func_name_match = re.search(r'FUN_180[a-fA-F0-9]+', func_decl)
        if func_name_match:
            old_name = func_name_match.group()
            
            # 根据功能描述生成新函数名
            new_name = generate_function_name(brief)
            mappings[old_name] = new_name
    
    return mappings

def generate_function_name(brief):
    """根据功能描述生成函数名"""
    brief = brief.strip()
    
    # 常见功能关键词映射
    keyword_mapping = {
        '初始化': 'Initialize',
        '处理': 'Process',
        '创建': 'Create',
        '设置': 'Set',
        '获取': 'Get',
        '更新': 'Update',
        '删除': 'Delete',
        '释放': 'Release',
        '分配': 'Allocate',
        '管理': 'Manage',
        '配置': 'Configure',
        '验证': 'Validate',
        '转换': 'Convert',
        '加载': 'Load',
        '保存': 'Save',
        '渲染': 'Render',
        '绘制': 'Draw',
        '更新': 'Update',
        '同步': 'Sync',
        '清理': 'Cleanup',
        '重置': 'Reset',
        '启动': 'Start',
        '停止': 'Stop',
        '暂停': 'Pause',
        '恢复': 'Resume',
        '连接': 'Connect',
        '断开': 'Disconnect',
        '发送': 'Send',
        '接收': 'Receive',
        '缓冲': 'Buffer',
        '缓存': 'Cache',
        '队列': 'Queue',
        '堆栈': 'Stack',
        '线程': 'Thread',
        '进程': 'Process',
        '内存': 'Memory',
        '网络': 'Network',
        '数据库': 'Database',
        '文件': 'File',
        '系统': 'System',
        '引擎': 'Engine',
        '核心': 'Core',
        '错误': 'Error',
        '异常': 'Exception',
        '状态': 'State',
        '事件': 'Event',
        '消息': 'Message',
        '数据': 'Data',
        '资源': 'Resource',
        '对象': 'Object',
        '组件': 'Component',
        '模块': 'Module',
        '接口': 'Interface',
        '服务': 'Service',
        '客户端': 'Client',
        '服务端': 'Server',
        '主': 'Primary',
        '备': 'Secondary',
        '第三': 'Tertiary',
        '第四': 'Quaternary',
        '第五': 'Quinary'
    }
    
    # 根据描述生成函数名
    name_parts = ['CoreEngine']
    
    for keyword, english in keyword_mapping.items():
        if keyword in brief:
            name_parts.append(english)
            break
    
    # 如果没有匹配到关键词，使用通用名称
    if len(name_parts) == 1:
        name_parts.append('ProcessFunction')
    
    return ''.join(name_parts)

def rename_functions(content, mappings):
    """重命名函数"""
    for old_name, new_name in mappings.items():
        # 替换函数声明
        content = re.sub(rf'\b{old_name}\b', new_name, content)
        
        # 替换函数调用
        content = re.sub(rf'\b{old_name}\(', f'{new_name}(', content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 提取函数映射
    mappings = extract_function_mappings(content)
    
    print(f"Found {len(mappings)} functions to rename:")
    for old, new in mappings.items():
        print(f"  {old} -> {new}")
    
    # 重命名函数
    content = rename_functions(content, mappings)
    
    # 写入文件
    write_file(file_path, content)
    
    print(f"Renamed {len(mappings)} functions in {file_path}")

if __name__ == '__main__':
    main()