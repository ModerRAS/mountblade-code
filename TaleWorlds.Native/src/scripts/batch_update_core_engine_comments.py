#!/usr/bin/env python3
"""
批量替换02_core_engine.c文件中的FUN_函数注释
"""

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def update_comments(content):
    # 基本的替换规则
    replacements = [
        (r'// 函数: void FUN_180041fd0\(void\)', '// 函数: void CoreEngineInitializeStreamManager(void)'),
        (r'// 函数: void FUN_1800430d0\(void\)', '// 函数: void CoreEngineInitializeCacheManager(void)'),
        (r'// 函数: void FUN_1800431d0\(void\)', '// 函数: void CoreEngineInitializeBufferManager(void)'),
        (r'// 函数: void FUN_1800432d0\(void\)', '// 函数: void CoreEngineInitializeQueueManager(void)'),
        (r'// 函数: void FUN_1800433d0\(void\)', '// 函数: void CoreEngineInitializeLockManager(void)'),
        (r'// 函数: void FUN_1800434d0\(void\)', '// 函数: void CoreEngineInitializeSemaphoreManager(void)'),
        (r'// 函数: void FUN_180043690\(void\)', '// 函数: void CoreEngineInitializeEventManager(void)'),
        (r'// 函数: void FUN_180043c30\(void\)', '// 函数: void CoreEngineInitializeTimerManager(void)'),
        (r'// 函数: void FUN_180044a50\(void\)', '// 函数: void CoreEngineInitializeSignalManager(void)'),
        (r'// 函数: void FUN_180044dc0\(undefined8 param_1,longlong param_2\)', '// 函数: void CoreEngineInitializeHandleManager(uint64_t HandleType, int64_t HandleValue)'),
        (r'// 函数: void FUN_180045380\(void\)', '// 函数: void CoreEngineInitializePoolManager(void)'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    print("读取文件...")
    content = read_file(file_path)
    
    print("更新函数注释...")
    updated_content = update_comments(content)
    
    print("写入文件...")
    write_file(file_path, updated_content)
    
    print("完成!")

if __name__ == '__main__':
    main()