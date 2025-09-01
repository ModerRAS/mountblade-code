#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的函数
重命名FUN_开头的函数为有意义的名称，并添加文档注释
"""

import re

def beautify_functions():
    """美化函数定义"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义函数替换规则
    function_replacements = [
        {
            'pattern': r'undefined8 \* FUN_1800a1e20\(undefined8 \*param_1\)\s*\{([^}]+)\}',
            'replacement': '''/**
 * @brief 初始化系统数据结构指针
 * 
 * 该函数负责初始化系统数据结构，设置内存管理和文件操作的默认指针
 * 用于系统启动时的数据结构初始化工作
 * 
 * @param dataStructurePointer 数据结构指针，用于存储系统配置信息
 * @returns void* 返回初始化后的数据结构指针
 * 
 * @note 这是系统初始化过程的重要组成部分，确保系统数据结构的正确设置
 */
void * InitializeSystemDataStructure(void *dataStructurePointer)
{\\1}''',
            'param_replacements': {
                'param_1': 'dataStructurePointer'
            }
        },
        {
            'pattern': r'undefined8 \* FUN_1800a32b0\(undefined8 param_1,undefined8 \*param_2\)\s*\{([^}]+)\}',
            'replacement': '''/**
 * @brief 初始化资源句柄数据结构
 * 
 * 该函数负责初始化资源句柄数据结构，设置默认值
 * 用于资源管理系统的初始化工作
 * 
 * @param contextFlags 上下文标志位，用于指定初始化选项
 * @param resourceHandleData 资源句柄数据结构指针，用于存储资源信息
 * @returns void* 返回初始化后的资源句柄数据结构指针
 * 
 * @note 这是资源管理系统初始化的基础函数
 */
void * InitializeResourceHandleData(longlong contextFlags, void *resourceHandleData)
{\\1}''',
            'param_replacements': {
                'param_1': 'contextFlags',
                'param_2': 'resourceHandleData'
            }
        },
        {
            'pattern': r'undefined8 FUN_1800a3f00\(longlong param_1,undefined8 \*param_2\)\s*\{([^}]+)\}',
            'replacement': '''/**
 * @brief 处理系统状态验证和资源请求
 * 
 * 该函数负责验证系统状态并处理资源请求，包括：
 * - 检查系统状态标志
 * - 验证资源请求条件
 * - 处理资源分配和释放
 * - 返回操作结果状态
 * 
 * @param systemContext 系统上下文指针，包含系统状态和配置信息
 * @param resourceRequest 资源请求指针，包含请求的详细信息
 * @returns longlong 返回操作结果，0表示失败，1表示成功
 * 
 * @note 这是系统资源管理的核心函数，确保资源请求的正确处理
 */
longlong ProcessSystemStateValidationAndResourceRequest(longlong systemContext, void *resourceRequest)
{\\1}''',
            'param_replacements': {
                'param_1': 'systemContext',
                'param_2': 'resourceRequest'
            }
        },
        {
            'pattern': r'undefined4 \* FUN_1800a5750\(undefined4 \*param_1,undefined4 \*param_2\)\s*\{([^}]+)\}',
            'replacement': '''/**
 * @brief 复制渲染对象状态数据
 * 
 * 该函数负责复制渲染对象的状态数据，包括：
 * - 复制基础状态信息
 * - 处理资源引用计数
 * - 管理内存分配和释放
 * - 确保数据完整性
 * 
 * @param destination 目标数据结构指针，用于存储复制后的状态数据
 * @param source 源数据结构指针，包含要复制的状态数据
 * @returns void* 返回目标数据结构指针
 * 
 * @note 这是渲染系统状态管理的关键函数，确保状态数据的正确复制
 */
void * CopyRenderObjectStateData(void *destination, void *source)
{\\1}''',
            'param_replacements': {
                'param_1': 'destination',
                'param_2': 'source'
            }
        }
    ]
    
    # 应用替换规则
    for replacement in function_replacements:
        # 首先替换函数定义
        content = re.sub(replacement['pattern'], replacement['replacement'], content, flags=re.DOTALL)
        
        # 然后替换函数调用
        for old_param, new_param in replacement['param_replacements'].items():
            # 替换函数调用中的参数名
            content = re.sub(r'\b' + old_param + r'\b', new_param, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数美化完成！")

if __name__ == "__main__":
    beautify_functions()