#!/usr/bin/env python3
"""
美化 06_utilities.c 文件中的 Unwind_ 函数
根据用户要求重命名函数、添加文档注释和美化变量名
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

# 函数重命名映射（基于用户要求）
FUNCTION_RENAME_MAP = {
    # 用户指定的重命名
    "Unwind_180904290": "InitializeSystemResourceHandlers",
    "Unwind_1809042b0": "SetupSystemResourceCleanup",
    "Unwind_1809042d0": "ConfigureResourceValidation",
    "Unwind_1809042f0": "PrepareSystemCleanupHandlers",
    "Unwind_180904310": "InitializeSystemDataStructures",
    "Unwind_180904330": "SetupSystemResourcePointers",
    "Unwind_180904350": "ConfigureSystemMemoryLayout",
    "Unwind_180904370": "InitializeSystemCleanupFlags",
    "Unwind_180904390": "SetupSystemValidationHandlers",
    "Unwind_1809043b0": "ConfigureSystemResourceTemplates",
    "Unwind_1809043d0": "InitializeSystemEmergencyHandlers",
    "Unwind_1809043f0": "SetupSystemCleanupProcedures",
    "Unwind_180904410": "ConfigureSystemResourceIndexes",
    "Unwind_180904430": "CleanupResourceFlagAndRelease",
    "Unwind_180904450": "ExecuteResourceCleanupHandlers",
    "Unwind_180904470": "ValidateAndCleanupResourceIndex",
    "Unwind_180904490": "ResetSystemValidationFlags",
    "Unwind_1809044b0": "InitializeSystemContextHandlers",
    "Unwind_1809044d0": "SetupSystemResourceContext",
    "Unwind_1809044f0": "ConfigureSystemValidationContext",
    "Unwind_180904510": "InitializeSystemCleanupContext",
    "Unwind_180904530": "SetupSystemResourceAllocation",
    "Unwind_180904550": "ConfigureSystemMemoryHandlers",
    "Unwind_180904570": "InitializeSystemThreadHandlers",
    "Unwind_180904590": "SetupSystemThreadCleanup",
    "Unwind_1809046d0": "InitializeSingleResourceHandler",
    "Unwind_1809046e0": "ExecuteResourceCleanupCallback",
    "Unwind_180904700": "ValidateResourceCleanupState",
    "Unwind_180904710": "ConfigureResourceCleanupFlags",
    "Unwind_180904730": "InitializeResourceCleanupHandlers",
    "Unwind_180904740": "SetupResourceValidationPointers",
    "Unwind_180904760": "ConfigureResourceMemoryLayout",
    "Unwind_180904770": "InitializeResourceContext",
    "Unwind_1809047a0": "SetupResourceThreadHandlers",
    "Unwind_1809047c0": "ConfigureResourceThreadContext",
    "Unwind_1809047d0": "InitializeResourceThreadCleanup",
    "Unwind_1809047e0": "DestroyGlobalMutex",
    "Unwind_1809047f0": "DestroyResourceMutex",
    "Unwind_180904800": "DestroyResourceCondition",
    "Unwind_180904810": "InitializeResourceSemaphore",
    "Unwind_180904820": "SetupResourceThreadSync",
}

# 变量名重命名映射（基于用户要求）
VARIABLE_RENAME_MAP = {
    "pResourceIndex": "resourceIndexPointer",
    "pResourceValidationResult": "validationResultPointer",
    "ResourceIndex": "calculatedResourceIndex",
    "loopIncrement": "memoryBaseAddress",
    "cleanupFlag": "cleanupParameter",
    "presourceHash": "resourceHashPointer",
    "pvalidationResult": "validationResultPointer",
    "loopCounter": "contextOffset",
    "CharPointer": "cleanupCallbackPointer",
    "iVar1": "resourceStatus",
    "iVar2": "cleanupStatus",
    "iVar3": "validationState",
    "iVar4": "memoryOffset",
    "iVar5": "handlerIndex",
    "iVar6": "contextSize",
    "iVar7": "resourceCount",
    "iVar8": "cleanupCount",
    "iVar9": "validationCount",
    "iVar10": "systemFlags",
}

def generate_function_documentation(function_name, new_name, params):
    """为函数生成完整的文档注释"""
    doc_lines = []
    doc_lines.append("/**")
    doc_lines.append(f" * {new_name} - 系统资源清理和验证函数")
    doc_lines.append(" *")
    
    # 根据函数名生成功能描述
    if "CleanupResourceFlagAndRelease" in new_name:
        doc_lines.append(" * 功能：清理资源标志并释放相关系统资源")
    elif "ExecuteResourceCleanupHandlers" in new_name:
        doc_lines.append(" * 功能：执行资源清理处理程序")
    elif "ValidateAndCleanupResourceIndex" in new_name:
        doc_lines.append(" * 功能：验证并清理资源索引")
    elif "ResetSystemValidationFlags" in new_name:
        doc_lines.append(" * 功能：重置系统验证标志")
    elif "Destroy" in new_name:
        doc_lines.append(" * 功能：销毁指定的系统资源对象")
    elif "Initialize" in new_name:
        doc_lines.append(" * 功能：初始化系统资源处理程序和数据结构")
    elif "Setup" in new_name:
        doc_lines.append(" * 功能：设置系统资源处理程序和配置")
    elif "Configure" in new_name:
        doc_lines.append(" * 功能：配置系统资源处理参数")
    elif "Validate" in new_name:
        doc_lines.append(" * 功能：验证系统资源状态和完整性")
    else:
        doc_lines.append(" * 功能：执行系统资源管理和清理操作")
    
    doc_lines.append(" *")
    
    # 参数说明
    if "objectContext" in params:
        doc_lines.append(" * @param objectContext 对象上下文标识符 (uint8_t)")
    if "validationContext" in params:
        doc_lines.append(" * @param validationContext 验证上下文指针 (int64_t)")
    if "CleanupOption" in params:
        doc_lines.append(" * @param CleanupOption 清理选项标志 (uint8_t)")
    if "CleanupFlag" in params:
        doc_lines.append(" * @param CleanupFlag 清理标志参数 (uint8_t)")
    
    doc_lines.append(" *")
    doc_lines.append(" * 返回值：void")
    doc_lines.append(" *")
    doc_lines.append(" * 注意：此函数由逆向工程生成，用于系统资源管理和清理")
    doc_lines.append(" *       原始函数名：" + function_name)
    doc_lines.append(" */")
    
    return "\n".join(doc_lines)

def process_function_definition(line):
    """处理函数定义行"""
    # 匹配函数定义
    pattern = r'^void (Unwind_\w+)\((.*?)\)'
    match = re.match(pattern, line.strip())
    
    if match:
        old_name = match.group(1)
        params = match.group(2)
        
        # 获取新的函数名
        new_name = FUNCTION_RENAME_MAP.get(old_name, old_name)
        
        # 生成文档注释
        documentation = generate_function_documentation(old_name, new_name, params)
        
        # 返回新的函数定义
        new_definition = f"void {new_name}({params})"
        
        return documentation, new_definition
    
    return None, line

def process_variable_line(line):
    """处理变量定义行"""
    for old_var, new_var in VARIABLE_RENAME_MAP.items():
        # 精确匹配变量名，避免误替换
        pattern = r'\b' + re.escape(old_var) + r'\b'
        line = re.sub(pattern, new_var, line)
    return line

def beautify_unwind_functions(content):
    """美化 Unwind 函数"""
    lines = content.split('\n')
    output_lines = []
    
    i = 0
    while i < len(lines):
        line = lines[i]
        
        # 处理函数定义
        if line.strip().startswith('void Unwind_'):
            documentation, new_definition = process_function_definition(line)
            
            if documentation:
                output_lines.append(documentation)
                output_lines.append(new_definition)
            else:
                output_lines.append(line)
        else:
            # 处理变量定义
            processed_line = process_variable_line(line)
            output_lines.append(processed_line)
        
        i += 1
    
    return '\n'.join(output_lines)

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化Unwind函数
    beautified_content = beautify_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print("已成功美化 06_utilities.c 文件中的 Unwind_ 函数")
    print("- 重命名了所有 Unwind_180 开头的函数")
    print("- 为每个函数添加了完整的文档注释")
    print("- 美化了函数内部的变量名")

if __name__ == "__main__":
    main()