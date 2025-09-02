#!/usr/bin/env python3
"""
批量重命名Unwind函数的脚本
将Unwind_180903d90格式的函数名改为更语义化的名称
"""

import re
import sys

def read_file(filepath):
    """读取文件内容"""
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    """写入文件内容"""
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_unwind_functions(content):
    """重命名Unwind函数"""
    
    # 定义函数名映射
    function_mappings = {
        'Unwind_180903d90': 'CleanupSystemResourceHandlerSet1',
        'Unwind_180903db0': 'CleanupSystemResourceHandlerSet2',
        'Unwind_180903dd0': 'CleanupSystemResourceHandlerSet3',
        'Unwind_180903df0': 'CleanupSystemResourceHandlerSet4',
        'Unwind_180903f30': 'CleanupSystemResourceHandlerSet5',
        'Unwind_180903f50': 'CleanupSystemResourceHandlerSet6',
        'Unwind_180903f70': 'CleanupSystemResourceHandlerSet7',
        'Unwind_180903f90': 'CleanupSystemResourceHandlerSet8',
        'Unwind_180903fb0': 'CleanupSystemResourceHandlerSet9',
        'Unwind_180903fd0': 'CleanupSystemResourceHandlerSet10',
        'Unwind_180903ff0': 'CleanupSystemResourceHandlerSet11',
        'Unwind_180904010': 'CleanupSystemResourceHandlerSet12',
        'Unwind_180904030': 'CleanupSystemResourceHandlerSet13',
        'Unwind_180904050': 'CleanupSystemResourceHandlerSet14',
        'Unwind_180904070': 'CleanupSystemResourceHandlerSet15',
        'Unwind_180904090': 'CleanupSystemResourceHandlerSet16',
        'Unwind_1809040b0': 'CleanupSystemResourceHandlerSet17',
        'Unwind_1809040d0': 'ResetSystemResourceContext',
        'Unwind_1809040e0': 'CleanupSystemResourceHandlerSet18',
        'Unwind_1809040f0': 'CleanupSystemResourceHandlerSet19'
    }
    
    # 执行替换
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(
            r'void\s+' + old_name + r'\(',
            'void ' + new_name + '(',
            content
        )
        # 替换函数调用
        content = re.sub(
            r'\b' + old_name + r'\(',
            new_name + '(',
            content
        )
    
    return content

def add_function_documentation(content):
    """为函数添加文档注释"""
    
    # 定义函数文档模板
    doc_templates = {
        'CleanupSystemResourceHandlerSet1': '''
/**
 * @brief 清理系统资源处理器集合1
 * 
 * 该函数负责清理第一组系统资源处理器，包括重置资源状态
 * 释放相关内存并确保系统资源处于一致状态
 * 
 * @param objectContext 对象上下文，标识要清理的资源对象
 * @param validationContext 验证上下文，包含资源验证信息
 * @param CleanupOption 清理选项，控制清理行为的具体参数
 * @param CleanupFlag 清理标志，指定清理操作的标志位
 * @return 无返回值
 * @note 此函数会清理系统资源处理器集合1中的所有资源
 * @warning 调用此函数后，相关资源将不再可用
 */
''',
        'CleanupSystemResourceHandlerSet2': '''
/**
 * @brief 清理系统资源处理器集合2
 * 
 * 该函数负责清理第二组系统资源处理器，包括重置资源状态
 * 释放相关内存并确保系统资源处于一致状态
 * 
 * @param objectContext 对象上下文，标识要清理的资源对象
 * @param validationContext 验证上下文，包含资源验证信息
 * @param CleanupOption 清理选项，控制清理行为的具体参数
 * @param CleanupFlag 清理标志，指定清理操作的标志位
 * @return 无返回值
 * @note 此函数会清理系统资源处理器集合2中的所有资源
 * @warning 调用此函数后，相关资源将不再可用
 */
''',
        'ResetSystemResourceContext': '''
/**
 * @brief 重置系统资源上下文
 * 
 * 该函数负责重置系统资源上下文，将资源状态恢复到初始状态
 * 清理所有临时数据并重置资源指针和计数器
 * 
 * @param objectContext 对象上下文，标识要重置的资源对象
 * @param validationContext 验证上下文，包含资源验证信息
 * @return 无返回值
 * @note 此函数会将系统资源上下文重置到初始状态
 * @warning 调用此函数后，所有未保存的资源状态将丢失
 */
'''
    }
    
    # 为每个函数添加文档注释
    for func_name, doc_template in doc_templates.items():
        # 查找函数定义
        pattern = r'(\nvoid ' + func_name + r'\([^)]*\)\s*\n\{)'
        match = re.search(pattern, content)
        if match:
            # 在函数定义前插入文档注释
            content = re.sub(
                pattern,
                doc_template + r'\1',
                content
            )
    
    return content

def main():
    """主函数"""
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(filepath)
    
    # 重命名函数
    content = rename_unwind_functions(content)
    
    # 添加文档注释
    content = add_function_documentation(content)
    
    # 写入文件
    write_file(filepath, content)
    
    print("Unwind函数美化完成")

if __name__ == "__main__":
    main()