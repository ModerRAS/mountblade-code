#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
unknown_var标记清理脚本
用于清理代码库中剩余的unknown_var标记
"""

import os
import re
import sys
from pathlib import Path

def clean_unknown_vars(file_path):
    """清理文件中的unknown_var标记"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 创建unknown_var映射表
        unknown_var_mappings = {
            'unknown_var_3456_ptr': 'system_data_buffer_ptr',
            'unknown_var_7512_ptr': 'system_config_ptr',
            'unknown_var_720_ptr': 'system_state_ptr',
            'unknown_var_3504_ptr': 'system_param1_ptr',
            'unknown_var_2360_ptr': 'system_param2_ptr',
            'unknown_var_9540_ptr': 'system_pattern1_ptr',
            'unknown_var_9584_ptr': 'system_pattern2_ptr',
            'unknown_var_9552_ptr': 'system_string1_ptr',
            'unknown_var_9776_ptr': 'system_string2_ptr',
            'unknown_var_2240_ptr': 'system_callback1_ptr',
            'unknown_var_2224_ptr': 'system_callback2_ptr',
            'unknown_var_3552_ptr': 'system_handler1_ptr',
            'unknown_var_3696_ptr': 'system_handler2_ptr',
            'unknown_var_4192_ptr': 'system_handler3_ptr',
            'unknown_var_2492_ptr': 'system_processor_ptr',
            'unknown_var_9376_ptr': 'render_data_ptr'
        }
        
        # 替换unknown_var标记
        for old_name, new_name in unknown_var_mappings.items():
            content = content.replace(old_name, new_name)
        
        # 如果内容有变化，则写回文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True
        return False
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

def clean_fun_names(file_path):
    """清理文件中的FUN_180函数名"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 创建FUN_180函数映射表
        fun_name_mappings = {
            'FUN_1801df400': 'System_DataProcessor',
            'FUN_180639bf0': 'System_BufferManager',
            'FUN_180272d60': 'System_DataSerializer',
            'FUN_180639ec0': 'System_QueueProcessor',
            'FUN_180628040': 'System_DataHandler'
        }
        
        # 替换FUN_180函数名
        for old_name, new_name in fun_name_mappings.items():
            content = content.replace(old_name, new_name)
        
        # 如果内容有变化，则写回文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True
        return False
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

def main():
    """主函数"""
    current_dir = Path.cwd()
    processed_files = 0
    modified_files = 0
    
    print("开始清理unknown_var和FUN_180标记...")
    
    # 遍历所有.c文件
    for c_file in current_dir.rglob("*.c"):
        processed_files += 1
        
        # 清理unknown_var标记
        if clean_unknown_vars(c_file):
            modified_files += 1
            print(f"已清理unknown_var标记: {c_file}")
        
        # 清理FUN_180函数名
        if clean_fun_names(c_file):
            modified_files += 1
            print(f"已清理FUN_180函数名: {c_file}")
    
    print(f"\n处理完成！")
    print(f"处理文件数: {processed_files}")
    print(f"修改文件数: {modified_files}")

if __name__ == "__main__":
    main()