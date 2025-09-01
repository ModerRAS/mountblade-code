#!/usr/bin/env python3
"""
简单的核心引擎函数美化脚本
"""

import re
import sys

def create_replacement_map():
    """创建函数名替换映射"""
    replacements = {
        'FUN_180038330': 'CoreEngineInitializeSystemConfigurationB',
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
    return replacements

def process_file(file_path):
    """处理文件中的FUN_函数"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        replacements = create_replacement_map()
        
        # 统计替换数量
        replaced_count = 0
        
        # 执行替换
        for old_name, new_name in replacements.items():
            # 替换函数声明中的注释
            old_pattern = f'// 函数: void {old_name}\\(void\\)'
            new_pattern = f'// 函数: void {new_name}(void)'
            content = re.sub(old_pattern, new_pattern, content)
            
            # 替换函数定义
            old_def_pattern = f'void {old_name}\\s*\\(void\\)'
            new_def_pattern = f'void {new_name}(void)'
            content = re.sub(old_def_pattern, new_def_pattern, content)
            
            # 替换函数调用
            old_call_pattern = f'\\b{old_name}\\s*\\('
            new_call_pattern = f'{new_name}('
            content = re.sub(old_call_pattern, new_call_pattern, content)
            
            if old_name in content:
                replaced_count += 1
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"处理完成！共替换了 {replaced_count} 个函数名")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python beautify_core_engine_simple.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    process_file(file_path)