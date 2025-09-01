#!/usr/bin/env python3
"""
批量替换02_core_engine.c文件中的FUN_函数注释
"""

import re
import os

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def update_function_comments(content):
    # 匹配注释行中的FUN_函数声明
    pattern = r'// 函数:.*FUN_[0-9a-f]{8}\([^)]*\)'
    
    # 替换规则 - 根据函数地址和参数来推断函数名
    replacements = [
        (r'// 函数: void FUN_180039eb0\(void\)', '// 函数: void CoreEngineInitializeVideoManager(void)'),
        (r'// 函数: void FUN_180039fb0\(void\)', '// 函数: void CoreEngineInitializeInputManager(void)'),
        (r'// 函数: void FUN_1800404b0\(void\)', '// 函数: void CoreEngineInitializeResourceManager(void)'),
        (r'// 函数: void FUN_1800405b0\(void\)', '// 函数: void CoreEngineInitializeMemoryManager(void)'),
        (r'// 函数: void FUN_1800414e0\(void\)', '// 函数: void CoreEngineInitializeThreadManager(void)'),
        (r'// 函数: void FUN_1800415e0\(void\)', '// 函数: void CoreEngineInitializeProcessManager(void)'),
        (r'// 函数: int FUN_180041fa0\(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4\)', '// 函数: int CoreEngineInitializeMutexManager(uint64_t MutexHandle, uint64_t MutexType, uint64_t MutexAttributes, uint64_t MutexFlags)'),
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
    
    # 应用替换规则
    for pattern_str, replacement in replacements:
        content = re.sub(pattern_str, replacement, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    print("读取文件...")
    content = read_file(file_path)
    
    print("更新函数注释...")
    updated_content = update_function_comments(content)
    
    print("写入文件...")
    write_file(file_path, updated_content)
    
    print("完成!")

if __name__ == '__main__':
    main()