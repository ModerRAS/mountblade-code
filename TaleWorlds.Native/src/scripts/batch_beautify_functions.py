#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def beautify_functions():
    """批量美化99_unmatched_functions.c文件中的函数名和注释"""
    
    # 读取文件内容
    try:
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return
    
    # 函数映射表 - 函数名到语义化名称的映射
    function_mappings = {
        'FUN_1800b2450': 'DataStructureHandler',
        'FUN_1800b2a30': 'SystemResourceAllocator',
        'FUN_1800b2bd0': 'MemoryBufferValidator',
        'FUN_1800b2bfd': 'ResourceAccessController',
        'FUN_1800b2cb2': 'SystemStatusChecker',
        'FUN_1800b4810': 'SystemOperationExecutor',
        'FUN_1800b4830': 'SystemOperationProcessor',
        'FUN_1800b4860': 'SystemResourceHandler',
        'FUN_1800b4890': 'SystemDataManager',
        'FUN_1800b48c0': 'SystemDataProcessor',
        'FUN_1800b48e0': 'SystemResourceProcessor',
        'FUN_1800b4910': 'ResourceHandleManager',
        'FUN_1800b4a00': 'SystemResourceAllocator2',
        'FUN_1800b4a40': 'SystemResourceManager',
        'FUN_1800b4e00': 'ResourceOperationHandler',
        'FUN_1800b4ec0': 'SystemResourceInitializer',
        'FUN_1800b57a0': 'SystemResourceController',
        'FUN_1800b5cc0': 'ResourceDataHandler',
        'FUN_1800b5d10': 'ResourceDataManager',
        'FUN_1800b5d38': 'SystemCleanupHandler',
        'FUN_1800b5e73': 'SystemInitializationHandler',
        'FUN_1800b5ec0': 'SystemResourceProvider',
        'FUN_1800b6780': 'SystemOperationManager',
        'FUN_1800b6940': 'SystemDataOperationHandler',
        'FUN_1800b6b20': 'SystemResourceOperationHandler',
        'FUN_1800b6d80': 'SystemDataStructureHandler',
        'FUN_1800b6de0': 'SystemResourceProvider2',
        'FUN_1800b70e0': 'SystemMemoryManager',
        'FUN_1800b76b0': 'SystemResourceHandler2',
        'FUN_1800b76d4': 'SystemCleanupProcessor',
        'FUN_1800b782b': 'SystemInitializationProcessor',
        'FUN_1800b7840': 'SystemResourceInitializer2',
        'FUN_1800b7a70': 'SystemDataOperationManager',
        'FUN_1800b7ca0': 'MemoryResourceHandler',
        'FUN_1800b7eb0': 'SystemResourceOperationManager',
        'FUN_1800b8090': 'SystemDataStructureManager',
        'FUN_1800b82b0': 'SystemResourceDataManager',
        'FUN_1800b8370': 'SystemResourceDataHandler',
        'FUN_1800b8500': 'SystemResourceCleaner',
        'FUN_1800b8570': 'SystemResourceResetter',
        'FUN_1800b8630': 'SystemResourceReleaser',
        'FUN_1800b8674': 'SystemResourceProvider3',
        'FUN_1800b89fa': 'SystemStatusProcessor',
        'FUN_1800b8a10': 'SystemOperationHandler',
        'FUN_1800b8a30': 'SystemDataHandler',
        'FUN_1800b8a90': 'SystemResourceCleaner2',
        'FUN_1800b8aa6': 'SystemInitializationHandler2',
    }
    
    # 函数文档模板
    function_docs = {
        'DataStructureHandler': {
            'brief': '数据结构处理器',
            'description': '该函数负责处理数据结构，执行数据结构的创建和管理操作。',
            'params': ['数据句柄', '数据指针', '数据大小', '状态指针']
        },
        'SystemResourceAllocator': {
            'brief': '系统资源分配器',
            'description': '该函数负责分配系统资源，管理资源的创建和分配。',
            'params': ['系统上下文', '资源大小']
        },
        'MemoryBufferValidator': {
            'brief': '内存缓冲区验证器',
            'description': '该函数负责验证内存缓冲区的有效性，检查内存访问权限。',
            'params': ['内存上下文', '缓冲区指针']
        },
        'ResourceAccessController': {
            'brief': '资源访问控制器',
            'description': '该函数负责控制资源访问，管理资源的读写权限。',
            'params': ['资源句柄', '访问标志', '访问参数']
        },
        'SystemStatusChecker': {
            'brief': '系统状态检查器',
            'description': '该函数负责检查系统状态，监控系统运行状态。',
            'params': []
        },
        'SystemOperationExecutor': {
            'brief': '系统操作执行器',
            'description': '该函数负责执行系统操作，处理各种系统级别的操作。',
            'params': ['操作参数', '操作类型', '操作标志']
        },
        'SystemDataManager': {
            'brief': '系统数据管理器',
            'description': '该函数负责管理系统数据，处理数据的存储和检索。',
            'params': ['数据上下文', '操作类型', '操作标志']
        },
        'SystemResourceHandler': {
            'brief': '系统资源处理器',
            'description': '该函数负责处理系统资源，管理资源的生命周期。',
            'params': ['资源句柄']
        },
        'ResourceHandleManager': {
            'brief': '资源句柄管理器',
            'description': '该函数负责管理资源句柄，处理句柄的创建和销毁。',
            'params': ['资源上下文', '句柄参数', '资源大小']
        },
        'SystemResourceManager': {
            'brief': '系统资源管理器',
            'description': '该函数负责管理系统资源，处理资源的分配和释放。',
            'params': ['资源指针']
        },
        'ResourceOperationHandler': {
            'brief': '资源操作处理器',
            'description': '该函数负责处理资源操作，执行各种资源级别的操作。',
            'params': ['资源句柄', '操作指针', '操作参数']
        },
        'SystemResourceController': {
            'brief': '系统资源控制器',
            'description': '该函数负责控制系统资源，管理资源的访问和使用。',
            'params': ['资源句柄', '控制指针']
        },
        'SystemCleanupHandler': {
            'brief': '系统清理处理器',
            'description': '该函数负责清理系统资源，处理资源的释放和清理。',
            'params': []
        },
        'SystemInitializationHandler': {
            'brief': '系统初始化处理器',
            'description': '该函数负责处理系统初始化，执行系统的初始化操作。',
            'params': []
        },
        'SystemOperationManager': {
            'brief': '系统操作管理器',
            'description': '该函数负责管理系统操作，处理各种操作的调度和执行。',
            'params': ['操作句柄', '操作指针', '操作参数', '操作标志']
        },
        'SystemMemoryManager': {
            'brief': '系统内存管理器',
            'description': '该函数负责管理系统内存，处理内存的分配和释放。',
            'params': ['内存大小', '内存标志']
        },
        'SystemDataStructureManager': {
            'brief': '系统数据结构管理器',
            'description': '该函数负责管理系统数据结构，处理数据结构的创建和管理。',
            'params': ['数据指针']
        },
        'SystemResourceCleaner': {
            'brief': '系统资源清理器',
            'description': '该函数负责清理系统资源，处理资源的释放和清理。',
            'params': ['资源指针']
        },
        'SystemStatusProcessor': {
            'brief': '系统状态处理器',
            'description': '该函数负责处理系统状态，监控和处理系统状态变化。',
            'params': []
        },
    }
    
    # 替换函数定义和调用
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        pattern = r'(\b(?:void|ulonglong|int|undefined8|longlong|uint|undefined4|float|double|bool)\s+)' + re.escape(old_name) + r'(\s*\([^)]*\))'
        replacement = r'\1' + new_name + r'\2'
        content = re.sub(pattern, replacement, content)
        
        # 替换函数调用
        call_pattern = r'\b' + re.escape(old_name) + r'(\s*\()'
        call_replacement = new_name + r'\1'
        content = re.sub(call_pattern, call_replacement, content)
    
    # 为函数添加文档注释
    lines = content.split('\n')
    i = 0
    while i < len(lines):
        line = lines[i]
        
        # 检查是否是函数定义行
        for old_name, new_name in function_mappings.items():
            if new_name in line and '(' in line and ')' in line:
                # 获取函数参数
                match = re.search(r'\(([^)]*)\)', line)
                params = match.group(1) if match else ''
                
                # 获取函数文档模板
                doc_template = function_docs.get(new_name, {
                    'brief': new_name,
                    'description': f'该函数负责执行{new_name}相关的操作。',
                    'params': []
                })
                
                # 生成参数文档
                param_lines = []
                if params and params != 'void':
                    param_list = [p.strip() for p in params.split(',')]
                    for j, param in enumerate(param_list):
                        if doc_template['params'] and j < len(doc_template['params']):
                            param_lines.append(f" * @param {param} {doc_template['params'][j]}")
                        else:
                            param_lines.append(f" * @param {param} 参数{j+1}")
                
                # 生成文档注释
                doc_comment = f"/**\n * @brief {doc_template['brief']}\n * \n * {doc_template['description']}\n"
                if param_lines:
                    doc_comment += '\n' + '\n'.join(param_lines) + '\n'
                doc_comment += " */\n"
                
                # 在函数定义前插入文档注释
                lines.insert(i, doc_comment)
                i += 1
                break
        
        i += 1
    
    # 写入文件
    try:
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w', encoding='utf-8') as f:
            f.write('\n'.join(lines))
        print("函数美化完成")
    except Exception as e:
        print(f"写入文件失败: {e}")

if __name__ == "__main__":
    beautify_functions()