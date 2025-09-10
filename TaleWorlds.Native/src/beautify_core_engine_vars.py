#!/usr/bin/env python3
import re
import sys

def beautify_core_engine_variables():
    """美化core_engine.c文件中的变量名"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    # 读取文件内容
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return
    
    # 定义变量名替换映射
    variable_mappings = {
        'auStack_158': 'SystemStackArray158',
        'auStack_170': 'SystemStackArray170',
        'auStack_18': 'SystemStackArray18',
        'auStack_18c': 'SystemStackArray18c',
        'auStack_190': 'SystemStackArray190',
        'auStack_1b0': 'SystemStackArray1b0',
        'auStack_1c0': 'SystemStackArray1c0',
        'auStack_1f0': 'SystemStackArray1f0',
        'auStack_218': 'SystemStackArray218',
        'auStack_220': 'SystemStackArray220',
        'auStack_270': 'SystemStackArray270',
        'auStack_2e0': 'SystemStackArray2e0',
        'auStack_328': 'SystemStackArray328',
        'auStack_348': 'SystemStackArray348',
        'auStack_350': 'SystemStackArray350',
        'auStack_358': 'SystemStackArray358',
        'auStack_370': 'SystemStackArray370',
        'auStack_378': 'SystemStackArray378',
        'auStack_3a8': 'SystemStackArray3a8',
        'auStack_3c0': 'SystemStackArray3c0',
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in variable_mappings.items():
        content = content.replace(old_name, new_name)
    
    # 检查是否有变化
    if content != original_content:
        try:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print("变量名美化完成")
        except Exception as e:
            print(f"写入文件失败: {e}")
    else:
        print("没有发现需要替换的变量名")

if __name__ == "__main__":
    beautify_core_engine_variables()