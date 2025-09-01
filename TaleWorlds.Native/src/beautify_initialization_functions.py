#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
01_initialization.c 文件中的 FUN_ 函数美化脚本
将未命名的 FUN_ 函数替换为有意义的函数名
"""

import re
import sys

# 函数重命名映射表
FUNCTION_RENAME_MAP = {
    'FUN_1800494f0': 'MemoryReleaseManager',
    'FUN_18004a220': 'SystemThreadObjectManager',
    'FUN_18004a3c0': 'SystemMemoryAllocator',
    'FUN_18004a430': 'SystemResourceInitializer',
    'FUN_18004b1f0': 'SystemStatusChecker',
    'FUN_1800524c0': 'SystemConfigurationLoader',
    'FUN_1800567c0': 'SystemModuleInitializer',
    'FUN_18005a1b0': 'SystemComponentManager',
    'FUN_18005a960': 'SystemEventHandler',
    'FUN_18005b520': 'SystemDataManager',
    'FUN_18005c8a0': 'SystemProcessController',
    'FUN_18005d498': 'SystemStateValidator',
    'FUN_18005d548': 'SystemErrorHandler',
    'FUN_18005ecfc': 'SystemCommunicationManager',
    'FUN_18005f040': 'SystemSynchronizationHandler',
    'FUN_18005f220': 'SystemThreadScheduler',
    'FUN_18005f340': 'SystemPriorityManager',
    'FUN_18005f490': 'SystemIdleHandler',
    'FUN_1800601c0': 'SystemMemoryOptimizer',
    'FUN_1800603e0': 'SystemResourceCleaner',
    'FUN_180060630': 'SystemTaskDispatcher',
    'FUN_1800607f0': 'SystemSignalProcessor',
    'FUN_180060c60': 'SystemMessageHandler',
    'FUN_180060d76': 'SystemGarbageCollector',
    'FUN_180060e40': 'SystemBufferManager',
    'FUN_180062ee0': 'SystemSecurityManager',
    'FUN_180068250': 'SystemPerformanceMonitor',
    'FUN_180068a90': 'SystemLoadBalancer',
    'FUN_180068ce0': 'SystemResourceMonitor',
    'FUN_180069760': 'SystemCacheManager',
    'FUN_180069fe0': 'SystemNetworkManager',
    'FUN_18006a050': 'SystemConfigurationValidator',
    'FUN_18006bd20': 'SystemDiagnosticTool',
    'FUN_18006d450': 'SystemRecoveryManager',
    'FUN_18006d4e0': 'SystemBackupHandler',
    'FUN_18006d6c0': 'SystemRestoreManager',
    'FUN_18006d810': 'SystemMaintenanceHandler',
    'FUN_18006eec0': 'SystemUpgradeManager',
    'FUN_180075580': 'SystemCompatibilityChecker',
    'FUN_180076b90': 'SystemIntegrationHandler',
    'FUN_180077420': 'SystemDeploymentManager',
    'FUN_180779434': 'SystemEntryPoint',
    'FUN_1807794c5': 'SystemInitializer',
    'FUN_1807794dd': 'SystemMainFunction',
}

# 函数文档模板
FUNCTION_DOCUMENTATION = {
    'MemoryReleaseManager': {
        'description': '内存释放管理函数',
        'details': '根据标志位管理内存的释放操作',
        'params': [
            {'name': 'memoryPointer', 'type': 'void*', 'desc': '内存指针'},
            {'name': 'flags', 'type': 'unsigned long long', 'desc': '操作标志位'}
        ],
        'return': '返回内存指针'
    },
    'SystemThreadObjectManager': {
        'description': '系统线程对象管理器',
        'details': '创建和管理系统线程对象，处理线程池的动态扩展和互斥锁同步',
        'params': [
            {'name': 'threadPoolContext', 'type': 'long long', 'desc': '线程池上下文指针'},
            {'name': 'threadFlags', 'type': 'uint32_t', 'desc': '线程创建标志位'},
            {'name': 'threadCallback', 'type': 'void*', 'desc': '线程回调函数指针'},
            {'name': 'threadParameter', 'type': 'void*', 'desc': '线程参数指针'}
        ],
        'return': '返回创建的线程对象指针'
    },
    'SystemMemoryAllocator': {
        'description': '系统内存分配器',
        'details': '管理系统内存的分配和释放操作',
        'params': [
            {'name': 'memoryContext', 'type': 'void*', 'desc': '内存上下文指针'},
            {'name': 'allocationSize', 'type': 'unsigned long long', 'desc': '分配大小'}
        ],
        'return': '返回分配的内存指针'
    },
    'SystemResourceInitializer': {
        'description': '系统资源初始化器',
        'details': '初始化系统所需的各类资源',
        'params': [
            {'name': 'resourceContext', 'type': 'long long', 'desc': '资源上下文指针'},
            {'name': 'resourcePointer', 'type': 'void*', 'desc': '资源指针'}
        ],
        'return': '返回初始化结果'
    }
}

def generate_function_documentation(func_name, doc_template):
    """生成函数文档注释"""
    if func_name not in doc_template:
        return f"/**\n * @brief {func_name}\n * \n * 系统函数\n */"
    
    doc = doc_template[func_name]
    comment = "/**\n"
    comment += f" * @brief {doc['description']}\n"
    comment += " * \n"
    comment += f" * {doc['details']}\n"
    comment += " * \n"
    
    if 'params' in doc:
        for param in doc['params']:
            comment += f" * @param {param['name']} {param['desc']}\n"
    
    if 'return' in doc:
        comment += f" * @return {doc['return']}\n"
    
    comment += " */"
    return comment

def beautify_functions():
    """美化函数"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 备份原始内容
        original_content = content
        
        # 替换函数定义
        for old_name, new_name in FUNCTION_RENAME_MAP.items():
            # 匹配函数定义模式
            pattern = r'void\*\s+' + re.escape(old_name) + r'\([^)]*\)'
            replacement = f'void* {new_name}'
            
            # 生成文档注释
            doc_comment = generate_function_documentation(new_name, FUNCTION_DOCUMENTATION)
            
            # 替换函数定义
            content = re.sub(pattern, doc_comment + '\n' + replacement, content)
            
            # 替换函数调用
            content = content.replace(old_name, new_name)
        
        # 写入文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功美化了 {len(FUNCTION_RENAME_MAP)} 个函数")
        
    except Exception as e:
        print(f"处理过程中发生错误: {e}")
        # 恢复原始内容
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(original_content)

if __name__ == "__main__":
    beautify_functions()