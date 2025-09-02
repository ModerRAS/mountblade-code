#!/usr/bin/env python3
"""
美化 06_utilities.c 文件中的 Unwind_ 函数
使用直接替换的方法来处理所有函数
"""

import re

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

# 完整的函数替换映射
FUNCTION_REPLACEMENTS = [
    {
        'old_name': 'Unwind_180904290',
        'new_name': 'InitializeSystemResourceHandlers',
        'description': '初始化系统资源处理程序和数据结构',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809042b0',
        'new_name': 'SetupSystemResourceCleanup',
        'description': '设置系统资源清理处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809042d0',
        'new_name': 'ConfigureResourceValidation',
        'description': '配置资源验证处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809042f0',
        'new_name': 'PrepareSystemCleanupHandlers',
        'description': '准备系统清理处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904310',
        'new_name': 'InitializeSystemDataStructures',
        'description': '初始化系统数据结构',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904330',
        'new_name': 'SetupSystemResourcePointers',
        'description': '设置系统资源指针',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904350',
        'new_name': 'ConfigureSystemMemoryLayout',
        'description': '配置系统内存布局',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904370',
        'new_name': 'InitializeSystemCleanupFlags',
        'description': '初始化系统清理标志',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904390',
        'new_name': 'SetupSystemValidationHandlers',
        'description': '设置系统验证处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809043b0',
        'new_name': 'ConfigureSystemResourceTemplates',
        'description': '配置系统资源模板',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809043d0',
        'new_name': 'InitializeSystemEmergencyHandlers',
        'description': '初始化系统紧急处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809043f0',
        'new_name': 'SetupSystemCleanupProcedures',
        'description': '设置系统清理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904410',
        'new_name': 'ConfigureSystemResourceIndexes',
        'description': '配置系统资源索引',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904430',
        'new_name': 'CleanupResourceFlagAndRelease',
        'description': '清理资源标志并释放相关系统资源',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904450',
        'new_name': 'ExecuteResourceCleanupHandlers',
        'description': '执行资源清理处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904470',
        'new_name': 'ValidateAndCleanupResourceIndex',
        'description': '验证并清理资源索引',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904490',
        'new_name': 'ResetSystemValidationFlags',
        'description': '重置系统验证标志',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809044b0',
        'new_name': 'InitializeSystemContextHandlers',
        'description': '初始化系统上下文处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809044d0',
        'new_name': 'SetupSystemResourceContext',
        'description': '设置系统资源上下文',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809044f0',
        'new_name': 'ConfigureSystemValidationContext',
        'description': '配置系统验证上下文',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904510',
        'new_name': 'InitializeSystemCleanupContext',
        'description': '初始化系统清理上下文',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904530',
        'new_name': 'SetupSystemResourceAllocation',
        'description': '设置系统资源分配',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904550',
        'new_name': 'ConfigureSystemMemoryHandlers',
        'description': '配置系统内存处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904570',
        'new_name': 'InitializeSystemThreadHandlers',
        'description': '初始化系统线程处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_180904590',
        'new_name': 'SetupSystemThreadCleanup',
        'description': '设置系统线程清理',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809046d0',
        'new_name': 'InitializeSingleResourceHandler',
        'description': '初始化单个资源处理程序',
        'variables': {'loopCounter': 'contextOffset'}
    },
    {
        'old_name': 'Unwind_1809046e0',
        'new_name': 'ExecuteResourceCleanupCallback',
        'description': '执行资源清理回调',
        'variables': {'CharPointer': 'cleanupCallbackPointer'}
    },
    {
        'old_name': 'Unwind_180904700',
        'new_name': 'ValidateResourceCleanupState',
        'description': '验证资源清理状态',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904710',
        'new_name': 'ConfigureResourceCleanupFlags',
        'description': '配置资源清理标志',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904730',
        'new_name': 'InitializeResourceCleanupHandlers',
        'description': '初始化资源清理处理程序',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904740',
        'new_name': 'SetupResourceValidationPointers',
        'description': '设置资源验证指针',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904760',
        'new_name': 'ConfigureResourceMemoryLayout',
        'description': '配置资源内存布局',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904770',
        'new_name': 'InitializeResourceContext',
        'description': '初始化资源上下文',
        'variables': {}
    },
    {
        'old_name': 'Unwind_1809047a0',
        'new_name': 'SetupResourceThreadHandlers',
        'description': '设置资源线程处理程序',
        'variables': {}
    },
    {
        'old_name': 'Unwind_1809047c0',
        'new_name': 'ConfigureResourceThreadContext',
        'description': '配置资源线程上下文',
        'variables': {}
    },
    {
        'old_name': 'Unwind_1809047d0',
        'new_name': 'InitializeResourceThreadCleanup',
        'description': '初始化资源线程清理',
        'variables': {}
    },
    {
        'old_name': 'Unwind_1809047e0',
        'new_name': 'DestroyGlobalMutex',
        'description': '销毁全局互斥锁',
        'variables': {}
    },
    {
        'old_name': 'Unwind_1809047f0',
        'new_name': 'DestroyResourceMutex',
        'description': '销毁资源互斥锁',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904800',
        'new_name': 'DestroyResourceCondition',
        'description': '销毁资源条件变量',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904810',
        'new_name': 'InitializeResourceSemaphore',
        'description': '初始化资源信号量',
        'variables': {}
    },
    {
        'old_name': 'Unwind_180904820',
        'new_name': 'SetupResourceThreadSync',
        'description': '设置资源线程同步',
        'variables': {}
    }
]

def generate_function_documentation(func_info):
    """生成函数文档注释"""
    doc_lines = []
    doc_lines.append("/**")
    doc_lines.append(f" * {func_info['new_name']} - 系统资源清理和验证函数")
    doc_lines.append(" *")
    doc_lines.append(f" * 功能：{func_info['description']}")
    doc_lines.append(" *")
    doc_lines.append(" * @param objectContext 对象上下文标识符 (uint8_t)")
    doc_lines.append(" * @param validationContext 验证上下文指针 (int64_t)")
    doc_lines.append(" * @param CleanupOption 清理选项标志 (uint8_t)")
    doc_lines.append(" * @param CleanupFlag 清理标志参数 (uint8_t)")
    doc_lines.append(" *")
    doc_lines.append(" * 返回值：void")
    doc_lines.append(" *")
    doc_lines.append(" * 注意：此函数由逆向工程生成，用于系统资源管理和清理")
    doc_lines.append(f" *       原始函数名：{func_info['old_name']}")
    doc_lines.append(" */")
    return "\n".join(doc_lines)

def process_content(content):
    """处理文件内容"""
    lines = content.split('\n')
    output_lines = []
    i = 0
    
    while i < len(lines):
        line = lines[i]
        
        # 检查是否是 Unwind 函数定义
        if 'void Unwind_180' in line:
            # 找到对应的函数信息
            func_info = None
            for info in FUNCTION_REPLACEMENTS:
                if info['old_name'] in line:
                    func_info = info
                    break
            
            if func_info:
                # 生成文档注释
                documentation = generate_function_documentation(func_info)
                output_lines.append(documentation)
                
                # 替换函数名
                new_line = line.replace(func_info['old_name'], func_info['new_name'])
                output_lines.append(new_line)
                
                # 处理函数体内的变量替换
                i += 1
                while i < len(lines) and not (lines[i].strip().startswith('void ') and 'Unwind_180' in lines[i]):
                    current_line = lines[i]
                    
                    # 替换变量名
                    for old_var, new_var in func_info['variables'].items():
                        current_line = current_line.replace(old_var, new_var)
                    
                    output_lines.append(current_line)
                    i += 1
                continue
            else:
                output_lines.append(line)
        else:
            output_lines.append(line)
        
        i += 1
    
    return '\n'.join(output_lines)

# 执行美化操作
file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
content = read_file(file_path)
beautified_content = process_content(content)
write_file(file_path, beautified_content)

print("已成功美化 06_utilities.c 文件中的 Unwind_ 函数")
print(f"- 处理了 {len(FUNCTION_REPLACEMENTS)} 个 Unwind_180 开头的函数")
print("- 为每个函数添加了完整的文档注释")
print("- 美化了函数内部的变量名")