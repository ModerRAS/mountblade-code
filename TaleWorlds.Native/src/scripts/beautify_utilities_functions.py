#!/usr/bin/env python3
"""
美化06_utilities.c文件中的函数名
根据函数的上下文和用途，为func_开头的函数赋予有意义的名称
"""

import re
import sys

def create_function_mapping():
    """创建函数名映射表"""
    mapping = {
        # 资源访问和验证相关函数
        'func_0x00018076a7d0': 'ValidateResourceAccess',
        'func_0x00018076b690': 'GetResourceOffset',
        'func_0x00018076b8a0': 'ProcessResourceData',
        'func_0x00018076a7d0': 'AccessResourceTable',
        
        # 异常处理和内存验证相关函数
        'func_0x00018064e870': 'ValidateMemoryAccess',
        'func_0x0001808de610': 'CheckSecurityValidation',
        
        # 数据处理和缓冲区操作相关函数
        'func_0x00018074b7b0': 'ProcessDataBuffer',
        'func_0x00018076b450': 'CopySecurityData',
        'func_0x00018076b3e0': 'AllocateResourceTable',
        
        # 系统操作和初始化相关函数
        'func_0x000180069ee0': 'InitializeSystemContext',
        'func_0x00018005f320': 'CleanupSystemResources',
        'func_0x000180060c00': 'ResetSystemMemory',
        'func_0x000180060c10': 'ConfigureSystemParameters',
        'func_0x000180060150': 'SetupSystemTable',
        'func_0x00018006d490': 'FinalizeSystemSetup',
        
        # 线程和同步相关函数
        'func_0x000180879a40': 'GetThreadContext',
        'func_0x0001808675f0': 'AcquireThreadLock',
        'func_0x0001808676a0': 'ReleaseThreadLock',
        
        # 哈希和加密相关函数
        'func_0x00018085fa80': 'GenerateResourceHash',
        'func_0x000180855b70': 'CalculateSecurityHash',
        
        # 验证和检查相关函数
        'func_0x0001808c7ed0': 'ValidateTableEntry',
        'func_0x000180894c50': 'CheckResourceIndex',
        'func_0x0001808aec10': 'VerifyResourceIntegrity',
        
        # 其他工具函数
        'func_0x000180881f80': 'ProcessObjectData',
        'func_0x0001808ded80': 'ExecuteSystemOperation'
    }
    return mapping

def beautify_functions(content):
    """美化函数名"""
    mapping = create_function_mapping()
    
    for old_name, new_name in mapping.items():
        # 使用正则表达式替换函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("用法: python beautify_utilities_functions.py <文件名>")
        sys.exit(1)
    
    filename = sys.argv[1]
    
    try:
        with open(filename, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 美化函数名
        beautified_content = beautify_functions(content)
        
        # 写回文件
        with open(filename, 'w', encoding='utf-8') as f:
            f.write(beautified_content)
        
        print(f"成功美化文件: {filename}")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()