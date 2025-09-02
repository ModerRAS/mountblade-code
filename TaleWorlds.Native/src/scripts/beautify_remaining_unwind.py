#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
继续美化06_utilities.c文件中的Unwind函数
处理剩余的Unwind函数并添加文档注释
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

def beautify_remaining_unwind_functions(content):
    """美化剩余的Unwind函数"""
    
    # 剩余的Unwind函数重命名映射
    remaining_renames = {
        # 状态重置函数
        'Unwind_180908650': 'ResetResourcePointers',
        'Unwind_180908660': 'CleanupResourceTable',
        'Unwind_180908670': 'ValidateResourceRelease',
        'Unwind_180908690': 'FinalizeResourceCleanup',
        'Unwind_1809086b0': 'ProcessResourceRelease',
        'Unwind_1809086d0': 'HandleResourceDeallocation',
        
        # 内存管理函数
        'Unwind_180908710': 'ReleaseMemoryBlocks',
        'Unwind_180908730': 'FreeMemoryBuffers',
        'Unwind_180908750': 'ClearMemoryCache',
        'Unwind_180908760': 'ResetMemoryPointers',
        'Unwind_180908770': 'ValidateMemoryRelease',
        'Unwind_1809087d0': 'ProcessMemoryDeallocation',
        'Unwind_180908800': 'HandleMemoryCleanup',
        'Unwind_180908810': 'FinalizeMemoryRelease',
        'Unwind_180908820': 'CleanupMemoryContext',
        'Unwind_180908830': 'ReleaseMemoryResources',
        'Unwind_180908840': 'FreeSystemMemory',
        'Unwind_180908850': 'ClearMemoryBuffers',
        'Unwind_180908860': 'ResetMemoryAllocation',
        'Unwind_180908870': 'ValidateMemoryCleanup',
        'Unwind_180908880': 'ProcessMemoryFree',
        'Unwind_180908890': 'HandleMemoryDeallocation',
        'Unwind_1809088a0': 'FinalizeMemoryCleanup',
        
        # 系统清理函数
        'Unwind_1809088d0': 'CleanupSystemModules',
        'Unwind_180908910': 'ReleaseSystemHandles',
        'Unwind_180908920': 'FreeSystemResources',
        'Unwind_180908950': 'ClearSystemCache',
        'Unwind_180908980': 'ResetSystemPointers',
        'Unwind_180908990': 'ValidateSystemRelease',
        'Unwind_1809089a0': 'ProcessSystemCleanup',
        'Unwind_1809089b0': 'HandleSystemDeallocation',
        'Unwind_1809089e0': 'FinalizeSystemCleanup',
    }
    
    # 函数文档模板
    function_docs = {
        'ResetResourcePointers': '''/**
 * @brief 重置资源指针
 * 
 * 该函数负责重置系统中的资源指针，确保指针处于正确的初始状态
 * 处理资源索引和内存地址的重新初始化
 * 
 * @param ObjectContext 对象上下文，指定要重置的资源所属对象
 * @param ValidationContext 验证上下文，用于验证重置操作的有效性
 * @remark 原始函数名：Unwind_180908650
 */''',
        
        'CleanupResourceTable': '''/**
 * @brief 清理资源表
 * 
 * 该函数负责清理系统中的资源表，释放相关资源并重置表结构
 * 
 * @param ObjectContext 对象上下文，指定要清理的资源表所属对象
 * @param ValidationContext 验证上下文，用于验证清理操作的有效性
 * @remark 原始函数名：Unwind_180908660
 */''',
        
        'ValidateResourceRelease': '''/**
 * @brief 验证资源释放
 * 
 * 该函数负责验证资源释放操作的有效性和完整性
 * 确保资源被正确释放且没有内存泄漏
 * 
 * @param ObjectContext 对象上下文，要验证的资源对象
 * @param ValidationContext 验证上下文，用于验证操作
 * @remark 原始函数名：Unwind_180908670
 */''',
        
        'FinalizeResourceCleanup': '''/**
 * @brief 完成资源清理
 * 
 * 该函数负责完成资源的最终清理工作，确保所有资源都被正确释放
 * 
 * @param ObjectContext 对象上下文，指定要完成清理的资源对象
 * @param ValidationContext 验证上下文，用于验证清理操作
 * @remark 原始函数名：Unwind_180908690
 */''',
        
        'ProcessResourceRelease': '''/**
 * @brief 处理资源释放
 * 
 * 该函数负责处理资源的释放过程，包括内存回收和状态更新
 * 
 * @param ObjectContext 对象上下文，指定要释放的资源对象
 * @param ValidationContext 验证上下文，用于验证释放操作
 * @remark 原始函数名：Unwind_1809086b0
 */''',
        
        'HandleResourceDeallocation': '''/**
 * @brief 处理资源释放
 * 
 * 该函数负责处理资源的释放操作，包括内存回收和状态重置
 * 
 * @param ObjectContext 对象上下文，指定要释放的资源对象
 * @param ValidationContext 验证上下文，用于验证释放操作
 * @remark 原始函数名：Unwind_1809086d0
 */''',
        
        'ReleaseMemoryBlocks': '''/**
 * @brief 释放内存块
 * 
 * 该函数负责释放指定的内存块，回收内存资源
 * 
 * @param ObjectContext 对象上下文，指定要释放的内存块所属对象
 * @param ValidationContext 验证上下文，用于验证释放操作
 * @remark 原始函数名：Unwind_180908710
 */''',
        
        'FreeMemoryBuffers': '''/**
 * @brief 释放内存缓冲区
 * 
 * 该函数负责释放指定的内存缓冲区，回收内存资源
 * 
 * @param ObjectContext 对象上下文，指定要释放的缓冲区所属对象
 * @param ValidationContext 验证上下文，用于验证释放操作
 * @remark 原始函数名：Unwind_180908730
 */''',
        
        'ClearMemoryCache': '''/**
 * @brief 清理内存缓存
 * 
 * 该函数负责清理系统中的内存缓存，释放缓存资源
 * 
 * @param ObjectContext 对象上下文，指定要清理的缓存所属对象
 * @param ValidationContext 验证上下文，用于验证清理操作
 * @remark 原始函数名：Unwind_180908750
 */''',
        
        'ResetMemoryPointers': '''/**
 * @brief 重置内存指针
 * 
 * 该函数负责重置系统中的内存指针，确保指针处于正确的初始状态
 * 
 * @param ObjectContext 对象上下文，指定要重置的指针所属对象
 * @param ValidationContext 验证上下文，用于验证重置操作
 * @remark 原始函数名：Unwind_180908760
 */''',
        
        'ValidateMemoryRelease': '''/**
 * @brief 验证内存释放
 * 
 * 该函数负责验证内存释放操作的有效性和完整性
 * 确保内存被正确释放且没有内存泄漏
 * 
 * @param ObjectContext 对象上下文，要验证的内存对象
 * @param ValidationContext 验证上下文，用于验证操作
 * @remark 原始函数名：Unwind_180908770
 */''',
    }
    
    # 执行替换
    for old_name, new_name in remaining_renames.items():
        # 替换函数定义
        pattern = r'void ' + re.escape(old_name) + r'\('
        replacement = f'void {new_name}('
        content = re.sub(pattern, replacement, content)
        
        # 如果有文档模板，添加文档
        if new_name in function_docs:
            # 查找函数定义并添加文档
            function_pattern = r'void ' + re.escape(new_name) + r'\([^)]*\)\s*\n*\{'
            if re.search(function_pattern, content):
                content = re.sub(
                    function_pattern,
                    function_docs[new_name] + '\n\nvoid ' + new_name + '(',
                    content
                )
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("继续美化06_utilities.c文件中的Unwind函数...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化函数名
    content = beautify_remaining_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("06_utilities.c文件Unwind函数美化完成")

if __name__ == "__main__":
    main()