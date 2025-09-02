#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化06_utilities.c文件中的变量名
去除"System"前缀，使变量名更简洁
"""

import re

def beautify_variables():
    """修改变量名，去除System前缀"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 变量映射表
    variable_mapping = {
        'SystemHeapManager': 'HeapManager',
        'SystemStackManager': 'StackManager',
        'SystemGlobalData': 'GlobalData',
        'SystemConfigurationData': 'ConfigurationData',
        'SystemRuntimeData': 'RuntimeData',
        'SystemCacheManager': 'CacheManager',
        'SystemDataBufferPool': 'DataBufferPool',
        'SystemEventTable': 'EventTable',
        'SystemThreadManager': 'ThreadManager',
        'SystemProcessManager': 'ProcessManager',
        'SystemMemoryAllocator': 'MemoryAllocator',
        'SystemMemoryPool': 'MemoryPool',
        'SystemTaskScheduler': 'TaskScheduler',
        'SystemResourcePool': 'ResourcePool',
        'SystemDataManager': 'DataManager',
        'SystemDataBufferManager': 'DataBufferManager',
        'SystemIoManager': 'IoManager',
        'SystemFileHandler': 'FileHandler'
    }
    
    # 注释映射表
    comment_mapping = {
        'HeapManager': '堆管理器 - 用于管理系统堆内存分配',
        'StackManager': '栈管理器 - 用于管理系统栈内存操作',
        'GlobalData': '全局数据 - 存储系统全局状态信息',
        'ConfigurationData': '配置数据 - 存储系统配置信息',
        'RuntimeData': '运行时数据 - 存储系统运行时状态',
        'CacheManager': '缓存管理器 - 管理系统缓存机制',
        'DataBufferPool': '数据缓冲池 - 管理数据缓冲区资源',
        'EventTable': '事件表 - 存储系统事件信息',
        'ThreadManager': '线程管理器 - 管理系统线程生命周期',
        'ProcessManager': '进程管理器 - 管理系统进程操作',
        'MemoryAllocator': '内存分配器 - 负责内存分配操作',
        'MemoryPool': '内存池 - 管理内存池资源',
        'TaskScheduler': '任务调度器 - 负责任务调度执行',
        'ResourcePool': '资源池 - 管理系统资源池',
        'DataManager': '数据管理器 - 管理系统数据操作',
        'DataBufferManager': '数据缓冲管理器 - 管理数据缓冲区',
        'IoManager': 'IO管理器 - 管理系统输入输出操作',
        'FileHandler': '文件处理器 - 处理文件相关操作'
    }
    
    # 首先替换所有变量名
    for old_name, new_name in variable_mapping.items():
        content = content.replace(old_name, new_name)
    
    # 为变量声明添加注释
    for var_name, comment in comment_mapping.items():
        # 匹配变量声明行
        pattern = rf'^(\s*)uint8_t {var_name};'
        replacement = rf'\1// {comment}\n\1uint8_t {var_name};'
        content = re.sub(pattern, replacement, content, flags=re.MULTILINE)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名修改完成！")
    print("修改摘要：")
    for old_name, new_name in variable_mapping.items():
        print(f"- {old_name} -> {new_name}")

if __name__ == "__main__":
    beautify_variables()