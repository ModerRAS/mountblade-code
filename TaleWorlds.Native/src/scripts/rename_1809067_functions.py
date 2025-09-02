#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
专门针对1809067a0-1809067f0系列Unwind函数的重命名脚本
为06_utilities.c文件中的特定Unwind函数提供语义化名称并添加文档注释
"""

import os
import re

def rename_unwind_functions():
    """重命名Unwind函数并添加文档注释"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 备份原始文件
    backup_path = file_path + ".backup"
    if not os.path.exists(backup_path):
        with open(file_path, 'r', encoding='utf-8') as f:
            backup_content = f.read()
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.write(backup_content)
        print(f"已创建备份文件: {backup_path}")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义函数映射和对应的文档注释
    function_mappings = [
        {
            'old_name': 'Unwind_1809067a0',
            'new_name': 'SetupResourceHashTable003',
            'comment': '''/**
 * 设置资源哈希表003
 * 
 * 此函数负责初始化和设置系统中的第三个资源哈希表。
 * 资源哈希表用于高效存储和检索系统资源。
 * 
 * @param objectContext 对象上下文，用于传递对象相关的状态信息
 * @param validationContext 验证上下文，包含资源验证所需的数据结构
 */'''
        },
        {
            'old_name': 'Unwind_1809067b0',
            'new_name': 'InitializeSystemResourceHandler',
            'comment': '''/**
 * 初始化系统资源处理器
 * 
 * 此函数负责初始化系统资源处理器的核心组件，包括：
 * - 设置系统资源处理器模板
 * - 检查本地上下文数据的完整性
 * - 初始化相关计数器和标志位
 * - 配置系统数据结构
 * 
 * @param objectContext 对象上下文，用于传递对象相关的状态信息
 * @param validationContext 验证上下文，包含资源验证所需的数据结构
 */'''
        },
        {
            'old_name': 'Unwind_1809067c0',
            'new_name': 'ProcessSystemResourceValidation',
            'comment': '''/**
 * 处理系统资源验证
 * 
 * 此函数负责执行系统资源的验证过程，包括：
 * - 配置资源哈希表结构
 * - 设置系统数据结构引用
 * - 初始化资源表模板
 * - 配置资源缓存模板
 * 
 * @param objectContext 对象上下文，用于传递对象相关的状态信息
 * @param validationContext 验证上下文，包含资源验证所需的数据结构
 */'''
        },
        {
            'old_name': 'Unwind_1809067d0',
            'new_name': 'ExecuteSystemConfigurationTask',
            'comment': '''/**
 * 执行系统配置任务
 * 
 * 此函数负责执行系统的配置任务，通过调用资源上下文中
 * 定义的配置函数来完成系统设置。该函数会检查资源上下文
 * 的有效性，然后执行相应的配置操作。
 * 
 * @param objectContext 对象上下文，用于传递对象相关的状态信息
 * @param validationContext 验证上下文，包含资源验证所需的数据结构
 */'''
        },
        {
            'old_name': 'Unwind_1809067f0',
            'new_name': 'FinalizeSystemResourceOperation',
            'comment': '''/**
 * 完成系统资源操作
 * 
 * 此函数负责完成系统资源的最终操作，通过调用资源上下文中
 * 定义的完成函数来结束资源处理流程。该函数会检查资源上下文
 * 的有效性，然后执行相应的完成操作。
 * 
 * @param objectContext 对象上下文，用于传递对象相关的状态信息
 * @param validationContext 验证上下文，包含资源验证所需的数据结构
 */'''
        }
    ]
    
    # 对每个函数进行处理
    for mapping in function_mappings:
        old_name = mapping['old_name']
        new_name = mapping['new_name']
        comment = mapping['comment']
        
        # 查找函数定义的模式
        pattern = rf'void {old_name}\(uint8_t objectContext,int64_t validationContext\)'
        
        # 检查是否存在该函数
        if re.search(pattern, content):
            print(f"找到函数 {old_name}，正在重命名为 {new_name}...")
            
            # 替换函数名
            content = re.sub(
                pattern,
                f'{comment}\nvoid {new_name}(uint8_t objectContext, int64_t validationContext)',
                content
            )
            
            print(f"函数 {old_name} 已重命名为 {new_name} 并添加文档注释")
        else:
            print(f"未找到函数 {old_name}")
    
    # 写入修改后的内容
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("所有函数重命名和文档注释添加完成！")
    
    # 验证修改结果
    print("\n验证修改结果:")
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    for i, line in enumerate(lines):
        for mapping in function_mappings:
            if mapping['new_name'] in line:
                print(f"第{i+1}行: {line.strip()}")

if __name__ == "__main__":
    rename_unwind_functions()