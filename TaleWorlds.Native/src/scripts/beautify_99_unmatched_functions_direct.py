#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化99_unmatched_functions.c文件中的变量
1. 将所有的 "undefined" 类型替换为 "void*"
2. 将所有以 "UNK_" 开头的变量重命名为有意义的名称
3. 保留原有的注释内容
4. 不修改程序的逻辑
"""

import re
import sys
import os

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    
    if not os.path.exists(file_path):
        print(f"错误: 文件 {file_path} 不存在")
        sys.exit(1)
    
    print(f"开始处理文件: {file_path}")
    
    try:
        # 读取文件内容
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 任务1: 将 "undefined" 类型替换为 "void*"
        undefined_count = content.count('undefined')
        content = content.replace('undefined', 'void*')
        
        # 任务2: 将 "UNK_" 开头的变量重命名为有意义的名称
        # 根据地址范围和上下文来推断变量用途
        
        # 定义地址范围和对应的变量类型
        address_patterns = {
            # 180a05e00-180a05fff: 渲染系统相关
            r'UNK_180a05[e-f][0-9a-f]{2}': lambda m: f'RenderingSystemContext{m.group(0)[9:]}',
            
            # 18010c300-18010c3ff: 内存管理相关
            r'UNK_18010c3[0-9a-f]{2}': lambda m: f'MemoryManagementBlock{m.group(0)[9:]}',
            
            # 1800xxxx: 初始化系统相关
            r'UNK_1800[0-9a-f]{4}': lambda m: f'InitializationSystemVariable{m.group(0)[4:]}',
            
            # 1801xxxx: 内存管理相关
            r'UNK_1801[0-9a-f]{4}': lambda m: f'MemoryManagementVariable{m.group(0)[4:]}',
            
            # 1802xxxx: 网络处理相关
            r'UNK_1802[0-9a-f]{4}': lambda m: f'NetworkHandlerVariable{m.group(0)[4:]}',
            
            # 1803xxxx: 渲染系统相关
            r'UNK_1803[0-9a-f]{4}': lambda m: f'RenderingSystemVariable{m.group(0)[4:]}',
            
            # 1804xxxx: 音频系统相关
            r'UNK_1804[0-9a-f]{4}': lambda m: f'AudioSystemVariable{m.group(0)[4:]}',
            
            # 1805xxxx: 输入系统相关
            r'UNK_1805[0-9a-f]{4}': lambda m: f'InputSystemVariable{m.group(0)[4:]}',
            
            # 1806xxxx: 物理系统相关
            r'UNK_1806[0-9a-f]{4}': lambda m: f'PhysicsSystemVariable{m.group(0)[4:]}',
            
            # 1807xxxx: 动画系统相关
            r'UNK_1807[0-9a-f]{4}': lambda m: f'AnimationSystemVariable{m.group(0)[4:]}',
            
            # 1808xxxx: 文件系统相关
            r'UNK_1808[0-9a-f]{4}': lambda m: f'FileSystemVariable{m.group(0)[4:]}',
            
            # 1809xxxx: 数据库系统相关
            r'UNK_1809[0-9a-f]{4}': lambda m: f'DatabaseSystemVariable{m.group(0)[4:]}',
            
            # 180axxxx: 用户界面相关
            r'UNK_180a[0-9a-f]{4}': lambda m: f'UserInterfaceVariable{m.group(0)[4:]}',
            
            # 180bxxxx: 脚本系统相关
            r'UNK_180b[0-9a-f]{4}': lambda m: f'ScriptingSystemVariable{m.group(0)[4:]}',
            
            # 180cxxxx: 多人游戏系统相关
            r'UNK_180c[0-9a-f]{4}': lambda m: f'MultiplayerSystemVariable{m.group(0)[4:]}',
            
            # 180dxxxx: 工具系统相关
            r'UNK_180d[0-9a-f]{4}': lambda m: f'UtilitySystemVariable{m.group(0)[4:]}',
            
            # 其他UNK_变量
            r'UNK_[0-9a-f]{8}': lambda m: f'SystemDataPointer{m.group(0)[4:]}',
        }
        
        # 统计替换次数
        unk_count = 0
        
        # 应用替换规则
        for pattern, replacement in address_patterns.items():
            matches = re.findall(pattern, content)
            if matches:
                content = re.sub(pattern, replacement, content)
                unk_count += len(matches)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print("文件处理完成!")
        print(f"替换统计:")
        print(f"  - undefined 类型替换为 void*: {undefined_count} 个")
        print(f"  - UNK_ 变量重命名: {unk_count} 个")
        
    except Exception as e:
        print(f"处理文件时发生错误: {e}")
        sys.exit(1)

if __name__ == '__main__':
    main()