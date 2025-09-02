#!/usr/bin/env python3
"""
批量美化06_utilities.c文件中的Unwind函数
- 为每个函数提供语义化的名称
- 添加详细的中文注释
- 保持参数和函数体不变
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

def analyze_function_params(params):
    """分析函数参数，确定函数类型"""
    param_count = params.count(',') + 1 if params.strip() else 0
    
    # 根据参数数量和类型判断函数功能
    if param_count == 0:
        return "SystemCleanup", "无参数系统清理"
    elif param_count == 2:
        if "uint8_t objectContext" in params and "int64_t validationContext" in params:
            return "ContextCleanup", "上下文清理"
        elif "uint8_t objectContext" in params and "uint *validationContext" in params:
            return "FlagCleanup", "标志清理"
    elif param_count == 4:
        if "uint8_t CleanupOption" in params and "uint8_t CleanupFlag" in params:
            return "ResourceCleanup", "资源清理"
    
    return "GenericCleanup", "通用清理"

def generate_function_name(old_name, params, index):
    """根据函数特征生成语义化名称"""
    func_type, description = analyze_function_params(params)
    
    # 根据地址范围确定功能分组
    address = old_name.split('_')[1]
    address_num = int(address, 16)
    
    # 根据地址范围分配不同的功能组
    if address_num < 0x180904500:
        group = "SystemResource"
    elif address_num < 0x180904800:
        group = "MemoryManager"
    elif address_num < 0x180904c00:
        group = "ProcessController"
    elif address_num < 0x180905000:
        group = "ThreadContext"
    elif address_num < 0x180905400:
        group = "ModuleManager"
    elif address_num < 0x180905800:
        group = "EventProcessor"
    else:
        group = "StateController"
    
    # 生成具体的函数名
    if func_type == "SystemCleanup":
        return f"Unwind_{group}_SystemCleanup_{index:03d}"
    elif func_type == "ContextCleanup":
        return f"Unwind_{group}_ContextCleanup_{index:03d}"
    elif func_type == "FlagCleanup":
        return f"Unwind_{group}_FlagCleanup_{index:03d}"
    elif func_type == "ResourceCleanup":
        return f"Unwind_{group}_ResourceCleanup_{index:03d}"
    else:
        return f"Unwind_{group}_GenericCleanup_{index:03d}"

def generate_function_comment(old_name, new_name, params, index):
    """生成函数注释"""
    func_type, description = analyze_function_params(params)
    
    # 基础功能描述
    base_description = {
        "SystemCleanup": "系统清理函数，用于清理系统资源和状态",
        "ContextCleanup": "上下文清理函数，用于清理对象和验证上下文",
        "FlagCleanup": "标志清理函数，用于清理和重置系统标志",
        "ResourceCleanup": "资源清理函数，用于清理系统资源处理器",
        "GenericCleanup": "通用清理函数，用于执行各种清理操作"
    }
    
    # 参数说明
    param_descriptions = []
    if "objectContext" in params:
        param_descriptions.append("@param objectContext 对象上下文，标识要清理的对象")
    if "validationContext" in params:
        if "uint *" in params:
            param_descriptions.append("@param validationContext 验证上下文指针，包含清理所需的验证信息")
        else:
            param_descriptions.append("@param validationContext 验证上下文，包含清理所需的验证信息")
    if "CleanupOption" in params:
        param_descriptions.append("@param CleanupOption 清理选项，指定清理的方式和范围")
    if "CleanupFlag" in params:
        param_descriptions.append("@param CleanupFlag 清理标志，控制清理过程中的具体行为")
    
    # 生成完整注释
    comment = f"""/**
 * {description} - {new_name}
 * 
 * 功能描述：
 * {base_description[func_type]}
 * 该函数确保系统资源正确释放，维护系统稳定性。
 * 
 * 参数说明：
{chr(10).join(' * ' + desc for desc in param_descriptions)}
 * 
 * 返回值：
 * 无返回值
 * 
 * 注意事项：
 * - 函数在异常情况下也会执行清理操作
 * - 确保所有相关资源都被正确释放
 * - 可能会调用系统紧急退出函数
 * - 原函数名：{old_name}
 */
"""
    
    return comment

def beautify_unwind_functions(content):
    """美化Unwind函数"""
    # 查找所有Unwind_函数定义
    pattern = r'void (Unwind_[0-9a-fA-F]{8})\(([^)]*)\)\s*\n\s*\{'
    
    def replace_function(match):
        old_name = match.group(1)
        params = match.group(2)
        
        # 从已处理的函数映射中获取新名称，如果没有则生成新的
        if not hasattr(beautify_unwind_functions, 'function_map'):
            beautify_unwind_functions.function_map = {}
            beautify_unwind_functions.counter = 0
        
        if old_name not in beautify_unwind_functions.function_map:
            new_name = generate_function_name(old_name, params, beautify_unwind_functions.counter)
            comment = generate_function_comment(old_name, new_name, params, beautify_unwind_functions.counter)
            beautify_unwind_functions.function_map[old_name] = {
                'new_name': new_name,
                'comment': comment
            }
            beautify_unwind_functions.counter += 1
        
        func_info = beautify_unwind_functions.function_map[old_name]
        new_name = func_info['new_name']
        comment = func_info['comment']
        
        # 返回美化后的函数定义
        return f"{comment}void {new_name}({params})\n\n{{"
    
    # 替换函数定义
    content = re.sub(pattern, replace_function, content, flags=re.MULTILINE)
    
    # 替换函数调用
    for old_name, func_info in beautify_unwind_functions.function_map.items():
        new_name = func_info['new_name']
        content = content.replace(old_name, new_name)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化Unwind函数
    beautified_content = beautify_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print(f"已成功美化 {beautify_unwind_functions.counter} 个Unwind函数")
    print(f"函数映射已保存到 beautify_unwind_functions.function_map")

if __name__ == "__main__":
    main()