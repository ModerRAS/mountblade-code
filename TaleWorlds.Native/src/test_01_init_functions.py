#!/usr/bin/env python3
"""
测试函数替换脚本
验证替换是否正确执行
"""

import re
import os

def test_function_replacements():
    """
    测试函数替换是否正确
    """
    print("测试函数替换脚本...")
    print("=" * 50)
    
    # 测试文件路径
    test_file = "01_initialization.c"
    
    if not os.path.exists(test_file):
        print(f"错误: {test_file} 文件不存在")
        return False
    
    # 统计替换前的函数数量
    with open(test_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 统计 FUN_ 函数的数量
    fun_functions = re.findall(r'FUN_[0-9a-f]+', content)
    print(f"发现 {len(fun_functions)} 个 FUN_ 函数")
    
    # 显示一些示例
    if fun_functions:
        print("示例函数:")
        for i, func in enumerate(set(fun_functions)[:10]):
            print(f"  {func}")
        if len(set(fun_functions)) > 10:
            print(f"  ... 还有 {len(set(fun_functions)) - 10} 个函数")
    
    # 检查是否已经有一些函数被替换
    semantic_functions = re.findall(r'\b[A-Z][a-zA-Z0-9]*SystemResource[A-Za-z0-9]*\b', content)
    if semantic_functions:
        print(f"发现 {len(semantic_functions)} 个语义化函数名")
        print("示例语义化函数:")
        for i, func in enumerate(set(semantic_functions)[:5]):
            print(f"  {func}")
    
    return True

def generate_sample_replacement():
    """
    生成示例替换
    """
    print("\n示例替换:")
    print("-" * 30)
    
    sample_replacements = [
        ("FUN_18006d6c0", "AllocateSystemResourceWithThreadManagement"),
        ("FUN_180072e80", "InitializeSystemResourceWithCallbacks"),
        ("FUN_180075580", "FreeSystemResourceMemory"),
        ("FUN_180076b90", "ValidateSystemResourceAvailability"),
    ]
    
    for old, new in sample_replacements:
        print(f"{old} -> {new}")

def main():
    """
    主函数
    """
    print("01_initialization.c 函数替换测试")
    print("=" * 60)
    
    if test_function_replacements():
        generate_sample_replacement()
        print("\n测试完成!")
        print("要执行实际替换，请运行: ./replace_01_init_functions.sh")
    else:
        print("测试失败!")

if __name__ == "__main__":
    main()