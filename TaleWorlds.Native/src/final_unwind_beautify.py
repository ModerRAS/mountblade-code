#!/usr/bin/env python3
"""
完整的Unwind函数批量美化脚本
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def get_function_type(params):
    """根据参数确定函数类型"""
    if params.strip() == "void":
        return "system_cleanup", "系统清理"
    elif "uint8_t objectContext" in params and "int64_t validationContext" in params:
        if "uint8_t CleanupOption" in params and "uint8_t CleanupFlag" in params:
            return "resource_cleanup", "资源清理"
        else:
            return "context_cleanup", "上下文清理"
    elif "uint8_t objectContext" in params and "uint *validationContext" in params:
        return "flag_cleanup", "标志清理"
    else:
        return "generic_cleanup", "通用清理"

def generate_function_name(func_type, index):
    """生成函数名"""
    name_templates = {
        "system_cleanup": "Unwind_SystemCleanup_{:03d}",
        "resource_cleanup": "Unwind_ResourceCleanup_{:03d}",
        "context_cleanup": "Unwind_ContextCleanup_{:03d}",
        "flag_cleanup": "Unwind_FlagCleanup_{:03d}",
        "generic_cleanup": "Unwind_GenericCleanup_{:03d}"
    }
    return name_templates[func_type].format(index)

def generate_function_comment(old_name, new_name, params, func_type, description):
    """生成函数注释"""
    
    # 参数说明
    param_docs = []
    if "objectContext" in params:
        param_docs.append("@param objectContext 对象上下文，标识要清理的对象")
    if "validationContext" in params:
        if "uint *" in params:
            param_docs.append("@param validationContext 验证上下文指针，包含清理所需的验证信息")
        else:
            param_docs.append("@param validationContext 验证上下文，包含清理所需的验证信息")
    if "CleanupOption" in params:
        param_docs.append("@param CleanupOption 清理选项，指定清理的方式和范围")
    if "CleanupFlag" in params:
        param_docs.append("@param CleanupFlag 清理标志，控制清理过程中的具体行为")
    
    if not param_docs:
        param_docs.append("无参数")
    
    # 功能描述
    descriptions = {
        "system_cleanup": "执行系统级别的清理操作，释放系统资源",
        "resource_cleanup": "清理系统资源处理器，执行回调函数并重置系统状态",
        "context_cleanup": "清理对象和验证上下文，重置相关状态标志",
        "flag_cleanup": "清理和重置系统标志，处理标志相关的资源",
        "generic_cleanup": "执行通用的清理操作，处理各种资源释放"
    }
    
    # 注意事项
    notes = [
        "函数在异常情况下也会执行清理操作",
        "确保所有相关资源都被正确释放",
        "可能会调用系统紧急退出函数"
    ]
    
    comment = f"""/**
 * {description} - {new_name}
 * 
 * 功能描述：
 * {descriptions[func_type]}
 * 该函数确保系统资源正确释放，维护系统稳定性。
 * 
 * 参数说明：
{chr(10).join(' * ' + doc for doc in param_docs)}
 * 
 * 返回值：
 * 无返回值
 * 
 * 注意事项：
{chr(10).join(' * - ' + note for note in notes)}
 * - 原函数名：{old_name}
 */
"""
    return comment

def process_unwind_functions(content):
    """处理Unwind函数"""
    
    # 查找所有Unwind函数定义
    pattern = r'void (Unwind_[0-9a-fA-F]{8})\(([^)]*)\)\s*\n\s*\{'
    
    # 计数器
    counters = {
        "system_cleanup": 0,
        "resource_cleanup": 0,
        "context_cleanup": 0,
        "flag_cleanup": 0,
        "generic_cleanup": 0
    }
    
    # 函数映射
    function_map = {}
    
    def replace_function(match):
        old_name = match.group(1)
        params = match.group(2)
        
        # 跳过已经处理过的函数
        if old_name in function_map:
            return match.group(0)
        
        # 确定函数类型
        func_type, description = get_function_type(params)
        
        # 生成新函数名
        counters[func_type] += 1
        new_name = generate_function_name(func_type, counters[func_type])
        
        # 生成注释
        comment = generate_function_comment(old_name, new_name, params, func_type, description)
        
        # 保存映射
        function_map[old_name] = new_name
        
        # 返回替换后的内容
        return f"{comment}void {new_name}({params})\n\n{{"
    
    # 替换函数定义
    content = re.sub(pattern, replace_function, content, flags=re.MULTILINE)
    
    # 替换函数调用
    for old_name, new_name in function_map.items():
        # 简单的函数调用替换
        content = content.replace(old_name, new_name)
    
    return content, function_map, counters

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 处理Unwind函数
    processed_content, function_map, counters = process_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, processed_content)
    
    # 输出统计信息
    total_processed = sum(counters.values())
    print(f"处理完成！总共处理了 {total_processed} 个Unwind函数")
    for func_type, count in counters.items():
        if count > 0:
            print(f"  {func_type}: {count} 个函数")
    
    # 保存函数映射
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/unwind_function_mapping.txt', 'w', encoding='utf-8') as f:
        f.write("Unwind函数映射表:\n")
        f.write("=" * 50 + "\n")
        for old_name, new_name in function_map.items():
            f.write(f"{old_name} -> {new_name}\n")

if __name__ == "__main__":
    main()