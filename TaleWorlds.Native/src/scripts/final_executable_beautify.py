#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# 最终执行脚本 - 美化99_unmatched_functions.c文件
# 请在终端中运行: python3 final_executable_beautify.py

import re
import os

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    
    print("=" * 60)
    print("99_unmatched_functions.c 文件美化脚本")
    print("=" * 60)
    print(f"开始处理文件: {file_path}")
    
    # 检查文件是否存在
    if not os.path.exists(file_path):
        print(f"错误: 文件 {file_path} 不存在")
        return False
    
    try:
        # 读取文件内容
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 统计替换前的数量
        undefined_count = content.count('undefined')
        unk_count = len(re.findall(r'UNK_[0-9a-f]{8}', content))
        
        print(f"找到需要替换的内容:")
        print(f"  - undefined 类型: {undefined_count} 个")
        print(f"  - UNK_ 变量: {unk_count} 个")
        print()
        
        # 任务1: 将 "undefined" 类型替换为 "void*"
        print("正在替换 undefined 类型为 void*...")
        content = content.replace('undefined', 'void*')
        
        # 任务2: 将 "UNK_" 开头的变量重命名为有意义的名称
        print("正在重命名 UNK_ 变量...")
        
        # 定义替换规则
        replacements = [
            # 内存管理相关变量 (18010c300-18010c3ff)
            (r'UNK_18010c3([0-9a-f]{2})', r'MemoryManagementVariable_\1'),
            
            # 渲染系统相关变量 (180a05e00-180a05fff)
            (r'UNK_180a05([e-f][0-9a-f])', r'RenderingSystemVariable_\1'),
            
            # 初始化系统 (1800xxxx)
            (r'UNK_1800([0-9a-f]{4})', r'InitializationSystemVariable_\1'),
            
            # 内存管理 (1801xxxx)
            (r'UNK_1801([0-9a-f]{4})', r'MemoryManagementVariable_\1'),
            
            # 网络处理 (1802xxxx)
            (r'UNK_1802([0-9a-f]{4})', r'NetworkHandlerVariable_\1'),
            
            # 渲染系统 (1803xxxx)
            (r'UNK_1803([0-9a-f]{4})', r'RenderingSystemVariable_\1'),
            
            # 音频系统 (1804xxxx)
            (r'UNK_1804([0-9a-f]{4})', r'AudioSystemVariable_\1'),
            
            # 输入系统 (1805xxxx)
            (r'UNK_1805([0-9a-f]{4})', r'InputSystemVariable_\1'),
            
            # 物理系统 (1806xxxx)
            (r'UNK_1806([0-9a-f]{4})', r'PhysicsSystemVariable_\1'),
            
            # 动画系统 (1807xxxx)
            (r'UNK_1807([0-9a-f]{4})', r'AnimationSystemVariable_\1'),
            
            # 文件系统 (1808xxxx)
            (r'UNK_1808([0-9a-f]{4})', r'FileSystemVariable_\1'),
            
            # 数据库系统 (1809xxxx)
            (r'UNK_1809([0-9a-f]{4})', r'DatabaseSystemVariable_\1'),
            
            # 用户界面 (180axxxx)
            (r'UNK_180a([0-9a-f]{4})', r'UserInterfaceVariable_\1'),
            
            # 脚本系统 (180bxxxx)
            (r'UNK_180b([0-9a-f]{4})', r'ScriptingSystemVariable_\1'),
            
            # 多人游戏 (180cxxxx)
            (r'UNK_180c([0-9a-f]{4})', r'MultiplayerSystemVariable_\1'),
            
            # 工具系统 (180dxxxx)
            (r'UNK_180d([0-9a-f]{4})', r'UtilitySystemVariable_\1'),
            
            # 其他变量
            (r'UNK_([0-9a-f]{8})', r'SystemDataPointer_\1'),
        ]
        
        # 应用所有替换规则
        for pattern, replacement in replacements:
            content = re.sub(pattern, replacement, content)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print()
        print("=" * 60)
        print("文件处理完成!")
        print("=" * 60)
        print(f"替换统计:")
        print(f"  - undefined 类型替换为 void*: {undefined_count} 个")
        print(f"  - UNK_ 变量重命名: {unk_count} 个")
        print()
        print("美化成功完成!")
        print("=" * 60)
        
        return True
        
    except Exception as e:
        print(f"处理文件时发生错误: {e}")
        return False

if __name__ == '__main__':
    success = main()
    if not success:
        exit(1)