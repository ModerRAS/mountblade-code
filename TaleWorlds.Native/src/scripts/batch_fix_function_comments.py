#!/usr/bin/env python3
import re
import sys

def process_function_comments(file_path):
    """处理文件中的函数注释"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 查找所有需要替换的函数注释
        pattern = r'// 函数: void (FUN_1800[0-9a-f]{4})\(void\)'
        matches = re.findall(pattern, content)
        
        if not matches:
            print("没有找到需要替换的函数注释")
            return
        
        print(f"找到 {len(matches)} 个需要替换的函数注释")
        
        # 为每个函数生成新的名称
        for i, old_name in enumerate(matches):
            # 从函数名中提取数字部分
            func_num = old_name[8:]  # 去掉 "FUN_1800" 前缀
            
            # 根据函数编号生成有意义的名称
            if func_num.startswith('38'):
                new_name = f"CoreEngineInitializeSystemConfiguration{chr(ord('A') + int(func_num[2:], 16) - 0x2a0)}"
            elif func_num.startswith('39'):
                subsystem_num = int(func_num[2:], 16) - 0x1a0
                subsystems = ['Network', 'Render', 'Physics', 'Audio', 'Input', 'File', 'Memory', 'Thread', 'Event', 'Time', 'Resource', 'Security', 'Database', 'Configuration', 'Console', 'Debug']
                if subsystem_num < len(subsystems):
                    new_name = f"CoreEngineInitialize{subsystems[subsystem_num]}System"
                else:
                    new_name = f"CoreEngineInitializeSystem{subsystem_num:04d}"
            elif func_num.startswith('40'):
                new_name = f"CoreEngineInitializeUtility{int(func_num[2:], 16) - 0x4b0:04d}"
            else:
                new_name = f"CoreEngineInitializeFunction{int(func_num, 16):04d}"
            
            # 执行替换
            old_pattern = f'// 函数: void {old_name}\\(void\\)'
            new_pattern = f'// 函数: void {new_name}(void)'
            
            content = re.sub(old_pattern, new_pattern, content)
            print(f"替换: {old_name} -> {new_name}")
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"处理完成！共替换了 {len(matches)} 个函数注释")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    process_function_comments(file_path)