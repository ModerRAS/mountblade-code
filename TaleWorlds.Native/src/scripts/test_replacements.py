#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import os

# 测试替换逻辑
def test_replacements():
    """测试替换规则"""
    
    # 测试用例
    test_cases = [
        ('undefined UNK_18010c370;', 'void* MemoryManagementVariable_0c370;'),
        ('undefined UNK_180a05f38;', 'void* RenderingSystemVariable_05f38;'),
        ('undefined UNK_18001234;', 'void* InitializationSystemVariable_1234;'),
        ('undefined UNK_18015678;', 'void* MemoryManagementVariable_5678;'),
        ('undefined UNK_1802abcd;', 'void* NetworkHandlerVariable_abcd;'),
        ('undefined UNK_1803ef01;', 'void* RenderingSystemVariable_ef01;'),
        ('undefined UNK_18045678;', 'void* AudioSystemVariable_5678;'),
        ('undefined UNK_18059abc;', 'void* InputSystemVariable_9abc;'),
        ('undefined UNK_1806def0;', 'void* PhysicsSystemVariable_def0;'),
        ('undefined UNK_18071234;', 'void* AnimationSystemVariable_1234;'),
        ('undefined UNK_18085678;', 'void* FileSystemVariable_5678;'),
        ('undefined UNK_18099abc;', 'void* DatabaseSystemVariable_9abc;'),
        ('undefined UNK_180adef0;', 'void* UserInterfaceVariable_def0;'),
        ('undefined UNK_180b1234;', 'void* ScriptingSystemVariable_1234;'),
        ('undefined UNK_180c5678;', 'void* MultiplayerSystemVariable_5678;'),
        ('undefined UNK_180d9abc;', 'void* UtilitySystemVariable_9abc;'),
        ('undefined UNK_12345678;', 'void* SystemDataPointer_12345678;'),
    ]
    
    # 定义替换规则
    replacements = [
        (r'UNK_18010c3([0-9a-f]{2})', r'MemoryManagementVariable_\1'),
        (r'UNK_180a05([e-f][0-9a-f])', r'RenderingSystemVariable_\1'),
        (r'UNK_1800([0-9a-f]{4})', r'InitializationSystemVariable_\1'),
        (r'UNK_1801([0-9a-f]{4})', r'MemoryManagementVariable_\1'),
        (r'UNK_1802([0-9a-f]{4})', r'NetworkHandlerVariable_\1'),
        (r'UNK_1803([0-9a-f]{4})', r'RenderingSystemVariable_\1'),
        (r'UNK_1804([0-9a-f]{4})', r'AudioSystemVariable_\1'),
        (r'UNK_1805([0-9a-f]{4})', r'InputSystemVariable_\1'),
        (r'UNK_1806([0-9a-f]{4})', r'PhysicsSystemVariable_\1'),
        (r'UNK_1807([0-9a-f]{4})', r'AnimationSystemVariable_\1'),
        (r'UNK_1808([0-9a-f]{4})', r'FileSystemVariable_\1'),
        (r'UNK_1809([0-9a-f]{4})', r'DatabaseSystemVariable_\1'),
        (r'UNK_180a([0-9a-f]{4})', r'UserInterfaceVariable_\1'),
        (r'UNK_180b([0-9a-f]{4})', r'ScriptingSystemVariable_\1'),
        (r'UNK_180c([0-9a-f]{4})', r'MultiplayerSystemVariable_\1'),
        (r'UNK_180d([0-9a-f]{4})', r'UtilitySystemVariable_\1'),
        (r'UNK_([0-9a-f]{8})', r'SystemDataPointer_\1'),
    ]
    
    print("测试替换规则...")
    
    for input_text, expected_output in test_cases:
        # 应用替换
        result = input_text.replace('undefined', 'void*')
        
        for pattern, replacement in replacements:
            result = re.sub(pattern, replacement, result)
        
        # 检查结果
        if result == expected_output:
            print(f"✓ {input_text} -> {result}")
        else:
            print(f"✗ {input_text} -> {result} (期望: {expected_output})")
    
    print("测试完成!")

if __name__ == '__main__':
    test_replacements()