#!/usr/bin/env python3
"""
重命名06_utilities.c文件中的所有Unwind函数
根据函数功能将其改为有意义的名称
"""

import re
import sys

# 函数重命名映射表
FUNCTION_RENAME_MAP = {
    # 系统初始化和清理函数
    "Unwind_1809020f0": "InitializeSystemCriticalSection",
    "Unwind_180902100": "CleanupSystemCriticalSection",
    "Unwind_1809025c0": "DestroyMutexInSitu",
    "Unwind_1809025d0": "DestroyMutexInSituAlt",
    "Unwind_180902620": "DestroyMutexInSituEx",
    "Unwind_1809026e0": "DestroyMutexInSituFinal",
    "Unwind_180902740": "DestroyMutexInSituComplete",
    
    # 回调执行函数
    "Unwind_180902110": "ExecuteValidationCallback",
    "Unwind_180902120": "ExecuteSystemCallback",
    "Unwind_180902130": "ExecuteValidationCallbackEx",
    "Unwind_180902410": "ExecuteSystemCallbackEx",
    
    # 数据结构设置函数
    "Unwind_180902140": "SetSystemDataStructureF0",
    "Unwind_180902150": "SetSystemDataStructure30",
    "Unwind_180902160": "SetSystemDataStructureF0Alt",
    "Unwind_1809021d0": "SetSystemDataStructure138",
    "Unwind_180902210": "SetSystemDataStructure78",
    "Unwind_180902250": "SetSystemDataStructure118",
    "Unwind_180902290": "SetSystemDataStructureF8",
    "Unwind_180902300": "SetSystemDataStructureD8",
    "Unwind_180902340": "SetSystemDataStructure98",
    "Unwind_180902370": "SetSystemDataStructure98Alt",
    "Unwind_1809023b0": "SetSystemDataStructure180",
    "Unwind_1809023c0": "SetSystemDataStructure1A0",
    "Unwind_180902420": "SetSystemDataStructure150",
    "Unwind_180902470": "SetSystemDataStructureD0",
    "Unwind_1809024b0": "SetSystemDataStructureA8",
    "Unwind_1809024c0": "SetSystemDataStructure200",
    "Unwind_180902520": "SetSystemDataStructure88",
    "Unwind_180902530": "SetSystemDataStructure100",
    "Unwind_1809026b0": "SetSystemDataStructure70Ptr",
    
    # 资源管理函数
    "Unwind_180902170": "InitializeResourceDescriptor",
    "Unwind_180902180": "InitializeResourceHandler",
    "Unwind_180902190": "ReleaseSystemResourceBit0",
    "Unwind_1809021c0": "InitializeResourceHandlerAlt",
    "Unwind_1809021e0": "ReleaseSystemResourceBit1",
    "Unwind_180902220": "ReleaseSystemResourceBit2",
    "Unwind_180902260": "ReleaseSystemResourceBit3",
    "Unwind_1809022a0": "ReleaseSystemResourceBit4",
    "Unwind_1809022d0": "ReleaseSystemResourceBit5",
    "Unwind_180902310": "ReleaseSystemResourceBit6",
    "Unwind_180902340": "ReleaseSystemResourceBit7",
    "Unwind_180902380": "ReleaseSystemResourceBit8",
    "Unwind_180902400": "InitializeResourceHandler78",
    "Unwind_180902430": "InitializeResourceHandlerA8",
    "Unwind_180902440": "InitializeResourceHandlerD0",
    "Unwind_180902450": "InitializeResourceHandler78Alt",
    "Unwind_180902460": "SetSystemDataStructure148Ptr",
    "Unwind_180902480": "ReleaseSystemResourceBit0Ex",
    "Unwind_1809024e0": "InitializeResourceHandler100",
    "Unwind_1809024f0": "InitializeResourceHandler88",
    
    # 数据处理函数
    "Unwind_1809023d0": "ProcessResourceHashValidation",
    "Unwind_1809023e0": "ProcessResourceHashValidationEx",
    "Unwind_1809023f0": "ProcessResourceIndexValidation",
    "Unwind_1809024d0": "ProcessResourceHashValidationFinal",
    "Unwind_180902500": "ProcessResourceHashValidationComplete",
    "Unwind_180902510": "ProcessResourceIndexValidationEx",
    "Unwind_180902540": "ProcessResourceTableOperation",
    "Unwind_180902550": "ProcessResourceTableOperationEx",
    "Unwind_180902570": "ProcessResourceHashOperation",
    "Unwind_180902580": "ProcessResourceHashOperationEx",
    "Unwind_180902590": "ProcessDataStreamOperation",
    "Unwind_1809025a0": "ProcessResourceOperation",
    "Unwind_1809025b0": "ProcessResourceOperationEx",
    "Unwind_1809025e0": "ProcessSystemResourceCleanup",
    "Unwind_180902600": "ProcessResourceIndexValidationFinal",
    "Unwind_180902630": "DestroyMutexWithContext",
    "Unwind_180902640": "ProcessResourceTableCleanup",
    "Unwind_180902650": "ProcessResourceTableIteration",
    "Unwind_180902660": "ProcessResourceTableIterationEx",
    "Unwind_180902670": "ProcessResourceTableIndex",
    "Unwind_180902680": "ProcessResourceTableIndexEx",
    "Unwind_180902690": "ProcessResourceTableIterationFinal",
    "Unwind_1809026a0": "ProcessResourceTableIterationComplete",
    "Unwind_1809026c0": "ProcessResourceOperationExtended",
    "Unwind_180902700": "ProcessResourceOperationExtendedEx",
    "Unwind_180902710": "ProcessResourceOperationExtendedFinal",
    "Unwind_180902720": "ProcessResourceOperationComplete",
    "Unwind_180902730": "ProcessResourceHashOperationFinal",
    "Unwind_180902750": "ProcessResourceHashOperationEx",
    "Unwind_180902760": "ProcessResourceHashOperationComplete",
    "Unwind_180902770": "ConfigureSystemSettings",
    "Unwind_180902780": "ProcessResourceRequest",
}

# 函数文档模板
FUNCTION_DOCS = {
    "InitializeSystemCriticalSection": """/**
 * @brief 初始化系统临界区
 * 
 * 该函数负责初始化系统的临界区，用于线程同步
 * 设置系统事件句柄和加密密钥相关操作
 * 
 * @return 无返回值
 */""",
    
    "CleanupSystemCriticalSection": """/**
 * @brief 清理系统临界区
 * 
 * 该函数负责清理系统的临界区，重置系统状态
 * 处理系统事件句柄和加密密钥相关操作
 * 
 * @return 无返回值
 */""",
    
    "ExecuteValidationCallback": """/**
 * @brief 执行验证回调函数
 * 
 * 该函数负责执行验证上下文中的回调函数
 * 从验证上下文中提取函数指针并调用
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @param param_3 附加参数3
 * @param param_4 附加参数4
 * @return 无返回值
 */""",
    
    "ExecuteSystemCallback": """/**
 * @brief 执行系统回调函数
 * 
 * 该函数负责执行系统回调函数
 * 从验证上下文中提取回调函数并调用
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */""",
    
    "SetSystemDataStructureF0": """/**
 * @brief 设置系统数据结构指针 (偏移0xF0)
 * 
 * 该函数负责在验证上下文中设置系统数据结构指针
 * 用于初始化系统数据结构的引用
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */""",
    
    "ReleaseSystemResourceBit0": """/**
 * @brief 释放系统资源 (位0)
 * 
 * 该函数负责释放系统资源，清除资源状态位
 * 检查资源状态标志并执行相应的释放操作
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */""",
    
    "InitializeResourceDescriptor": """/**
 * @brief 初始化资源描述符
 * 
 * 该函数负责初始化资源描述符结构
 * 设置资源模板和相关的系统数据结构
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */""",
    
    "ProcessResourceHashValidation": """/**
 * @brief 处理资源哈希验证
 * 
 * 该函数负责处理资源的哈希验证操作
 * 验证资源数据的完整性和有效性
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @param param_3 附加参数3
 * @param param_4 附加参数4
 * @return 无返回值
 */""",
    
    "DestroyMutexInSitu": """/**
 * @brief 销毁互斥量
 * 
 * 该函数负责销毁互斥量对象
 * 释放线程同步资源
 * 
 * @return 无返回值
 */""",
}

def generate_function_docs(func_name, params):
    """生成函数文档注释"""
    if func_name in FUNCTION_DOCS:
        return FUNCTION_DOCS[func_name]
    
    # 根据函数名模式生成通用文档
    if func_name.startswith("SetSystemDataStructure"):
        return """/**
 * @brief 设置系统数据结构指针
 * 
 * 该函数负责在验证上下文中设置系统数据结构指针
 * 用于初始化系统数据结构的引用
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */"""
    
    elif func_name.startswith("ReleaseSystemResource"):
        return """/**
 * @brief 释放系统资源
 * 
 * 该函数负责释放系统资源，清除资源状态位
 * 检查资源状态标志并执行相应的释放操作
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */"""
    
    elif func_name.startswith("InitializeResource"):
        return """/**
 * @brief 初始化资源处理器
 * 
 * 该函数负责初始化资源处理器结构
 * 设置资源模板和相关的系统数据结构
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */"""
    
    elif func_name.startswith("ProcessResource"):
        return """/**
 * @brief 处理资源操作
 * 
 * 该函数负责处理资源的各种操作
 * 包括哈希验证、索引验证、表操作等
 * 
 * @param objectContextParam 对象上下文参数
 * @param validationContextParam 验证上下文参数
 * @return 无返回值
 */"""
    
    elif func_name.startswith("DestroyMutex"):
        return """/**
 * @brief 销毁互斥量
 * 
 * 该函数负责销毁互斥量对象
 * 释放线程同步资源
 * 
 * @return 无返回值
 */"""
    
    else:
        return """/**
 * @brief 系统工具函数
 * 
 * 该函数负责执行系统级别的操作
 * 具体功能根据函数名和上下文确定
 * 
 * @return 无返回值
 */"""

def rename_functions(content):
    """重命名所有Unwind函数"""
    lines = content.split('\n')
    result = []
    i = 0
    
    while i < len(lines):
        line = lines[i]
        
        # 查找函数定义行
        func_match = re.match(r'^void (Unwind_180902[a-zA-Z0-9_]*)\((.*)\)', line)
        if func_match:
            old_name = func_match.group(1)
            params = func_match.group(2)
            
            if old_name in FUNCTION_RENAME_MAP:
                new_name = FUNCTION_RENAME_MAP[old_name]
                
                # 生成函数文档
                docs = generate_function_docs(new_name, params)
                
                # 替换函数名
                new_line = line.replace(old_name, new_name)
                
                # 添加文档注释
                result.append(docs)
                result.append(new_line)
                
                print(f"重命名: {old_name} -> {new_name}")
            else:
                result.append(line)
        else:
            # 替换函数调用
            for old_name, new_name in FUNCTION_RENAME_MAP.items():
                line = line.replace(old_name, new_name)
            result.append(line)
        
        i += 1
    
    return '\n'.join(result)

def improve_variable_names(content):
    """改进变量命名"""
    # 改进常见变量名
    variable_replacements = {
        r'\bbVar1\b': 'encryptionKeyByte',
        r'\bpcVar1\b': 'functionPointer',
        r'\bpresourceHash\b': 'resourceHash',
        r'\bpvalidationResult\b': 'validationResult',
        r'\bcleanupFlag\b': 'cleanupFlag',
        r'\bpintegerValue1\b': 'integerValue',
        r'\bresourceIndex\b': 'resourceIndex',
        r'\bloopCounter\b': 'loopCounter',
        r'\bpresourceTable\b': 'resourceTable',
        r'\bprocessPointer\b': 'processPointer',
        r'\bpunsignedResult3\b': 'unsignedResult',
        r'\bpresourceIndex\b': 'resourceIndexPtr',
    }
    
    for old_var, new_var in variable_replacements.items():
        content = re.sub(old_var, new_var, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("使用方法: python rename_unwind_functions.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    
    # 读取输入文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 重命名函数
    content = rename_functions(content)
    
    # 改进变量命名
    content = improve_variable_names(content)
    
    # 写入输出文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已完成对 {input_file} 的Unwind函数重命名")

if __name__ == "__main__":
    main()