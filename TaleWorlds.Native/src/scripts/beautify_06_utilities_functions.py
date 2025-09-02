#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
06_utilities.c 文件函数美化脚本
用于重命名Unwind函数为更具语义化的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_function_names(content):
    """美化函数名称"""
    
    # 函数名映射表
    function_mappings = {
        'Unwind_180905100': 'InitializeSystemResourceHandler',
        'Unwind_180905160': 'CleanupResourceHandlersAtOffset0x148',
        'Unwind_180905170': 'CleanupResourceHandlersAtOffset0x208',
        'Unwind_180905180': 'CleanupResourceHandlersAtOffset0x1c8',
        'Unwind_180905190': 'CleanupResourceHandlersAtOffset0x228',
        'Unwind_1809051a0': 'CleanupResourceHandlersAtOffset0x1e8',
        'Unwind_1809051d0': 'CleanupResourceHandlersAtOffset0x248',
        'Unwind_1809051e0': 'CleanupResourceHandlersAtOffset0x258',
        'Unwind_1809051f0': 'CleanupResourceHandlersAtOffset0x268',
        'Unwind_180905200': 'CleanupResourceHandlersAtOffset0x278',
        'Unwind_180905210': 'CleanupResourceHandlersAtOffset0x288'
    }
    
    # 应用函数名替换
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def add_function_comments(content):
    """为函数添加注释"""
    
    # 为Unwind_180905100函数添加注释
    comment1 = '''/**
 * @brief 初始化系统资源处理器
 * 
 * 该函数负责初始化系统资源处理器的相关配置
 * 设置系统资源处理器的状态和参数
 * 
 * @param objectContext 对象上下文，包含对象的配置信息
 * @param validationContext 验证上下文，用于验证操作的合法性
 * @return 无返回值
 * @note 此函数必须在系统初始化时调用
 * @warning 调用此函数前必须确保系统资源已准备好
 */
'''
    
    # 为Unwind_180905160函数添加注释
    comment2 = '''/**
 * @brief 清理偏移量0x148处的资源处理器
 * 
 * 该函数负责清理位于偏移量0x148处的资源处理器
 * 释放相关资源并重置状态
 * 
 * @param objectContext 对象上下文，包含对象的配置信息
 * @param validationContext 验证上下文，用于验证操作的合法性
 * @param CleanupOption 清理选项，指定清理的方式
 * @param CleanupFlag 清理标志，指示清理的状态
 * @return 无返回值
 * @note 此函数在系统关闭时调用
 * @warning 调用此函数前必须确保资源处理器已停止工作
 */
'''
    
    # 为Unwind_180905170函数添加注释
    comment3 = '''/**
 * @brief 清理偏移量0x208处的资源处理器
 * 
 * 该函数负责清理位于偏移量0x208处的资源处理器
 * 释放相关资源并重置状态
 * 
 * @param objectContext 对象上下文，包含对象的配置信息
 * @param validationContext 验证上下文，用于验证操作的合法性
 * @param CleanupOption 清理选项，指定清理的方式
 * @param CleanupFlag 清理标志，指示清理的状态
 * @return 无返回值
 * @note 此函数在系统关闭时调用
 * @warning 调用此函数前必须确保资源处理器已停止工作
 */
'''
    
    # 在函数定义前添加注释
    content = re.sub(r'(void Unwind_180905100\(uint8_t objectContext,int64_t validationContext\))', 
                     comment1 + r'\1', content)
    
    content = re.sub(r'(void Unwind_180905160\(uint8_t objectContext,int64_t validationContext,uint8_t CleanupOption,uint8_t CleanupFlag\))', 
                     comment2 + r'\1', content)
    
    content = re.sub(r'(void Unwind_180905170\(uint8_t objectContext,int64_t validationContext,uint8_t CleanupOption,uint8_t CleanupFlag\))', 
                     comment3 + r'\1', content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始美化06_utilities.c文件...")
    
    # 读取文件内容
    content = read_file(file_path)
    
    # 美化函数名
    content = beautify_function_names(content)
    
    # 添加函数注释
    content = add_function_comments(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("文件美化完成！")

if __name__ == '__main__':
    main()