#!/usr/bin/env python3
"""
批量替换核心引擎文件中的函数注释
"""

import re
import sys

def create_function_mapping():
    """创建函数名映射"""
    mapping = {
        'FUN_180038450': 'CoreEngineInitializeSystemConfigurationD',
        'FUN_1800391a0': 'CoreEngineInitializeNetworkSystem',
        'FUN_1800393a0': 'CoreEngineInitializeRenderSystem',
        'FUN_1800394a0': 'CoreEngineInitializePhysicsSystem',
        'FUN_1800395a0': 'CoreEngineInitializeAudioSystem',
        'FUN_1800396a0': 'CoreEngineInitializeInputSystem',
        'FUN_1800397a0': 'CoreEngineInitializeFileSystem',
        'FUN_1800398a0': 'CoreEngineInitializeMemorySystem',
        'FUN_1800399a0': 'CoreEngineInitializeThreadSystem',
        'FUN_180039aa0': 'CoreEngineInitializeEventSystem',
        'FUN_180039bb0': 'CoreEngineInitializeTimeSystem',
        'FUN_180039cb0': 'CoreEngineInitializeResourceSystem',
        'FUN_180039db0': 'CoreEngineInitializeSecuritySystem',
        'FUN_180039eb0': 'CoreEngineInitializeDatabaseSystem',
        'FUN_180039fb0': 'CoreEngineInitializeConfigurationSystem',
        'FUN_1800404b0': 'CoreEngineInitializeConsoleSystem',
        'FUN_1800405b0': 'CoreEngineInitializeDebugSystem'
    }
    return mapping

def process_file(file_path):
    """处理文件中的函数注释"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        mapping = create_function_mapping()
        
        # 统计替换数量
        replaced_count = 0
        
        # 执行替换
        for old_name, new_name in mapping.items():
            # 替换注释中的函数名
            old_pattern = f'// 函数: void {old_name}\\(void\\)'
            new_pattern = f'// 函数: void {new_name}(void)'
            
            if old_pattern in content:
                content = re.sub(old_pattern, new_pattern, content)
                replaced_count += 1
                print(f"替换: {old_name} -> {new_name}")
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"处理完成！共替换了 {replaced_count} 个函数注释")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python fix_function_comments.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    process_file(file_path)