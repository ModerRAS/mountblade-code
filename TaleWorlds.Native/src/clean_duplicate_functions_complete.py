#!/usr/bin/env python3
"""
清理重复函数声明脚本 - 完整版本
用于处理06_utilities.c文件中的重复函数声明问题

原实现问题：
- 文件中存在重复的函数声明，例如：
  - void InitializeMemoryTracking(void);
  - void ConfigureMemoryProtection(void);
  - void InitializeMemoryCache(void);
- 这些重复声明会导致编译警告和潜在问题

简化实现：
- 读取整个文件，识别所有函数声明
- 使用字典跟踪已声明的函数
- 保留第一次出现的声明，删除后续重复声明
- 确保函数声明格式统一

使用方法：
python3 clean_duplicate_functions_complete.py
"""

import re
import os
import sys

def extract_function_signatures(content):
    """提取文件中的所有函数声明"""
    function_pattern = r'^\s*([a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\([^;]*\)\s*;)'
    
    signatures = []
    lines = content.split('\n')
    
    for line_num, line in enumerate(lines, 1):
        match = re.match(function_pattern, line)
        if match:
            full_declaration = match.group(1).strip()
            func_name_match = re.search(r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)', full_declaration)
            if func_name_match:
                func_name = func_name_match.group(1)
                signatures.append((line_num, full_declaration, func_name))
    
    return signatures

def find_duplicate_functions(signatures):
    """找出重复的函数声明"""
    function_occurrences = {}
    for line_num, full_declaration, func_name in signatures:
        if func_name not in function_occurrences:
            function_occurrences[func_name] = []
        function_occurrences[func_name].append(line_num)
    
    duplicates = {func: lines for func, lines in function_occurrences.items() if len(lines) > 1}
    return duplicates

def clean_duplicate_declarations(content, signatures, duplicates):
    """清理重复的函数声明"""
    lines_to_remove = set()
    for func_name, lines in duplicates.items():
        lines_to_remove.update(lines[1:])
    
    lines = content.split('\n')
    cleaned_lines = []
    removed_count = 0
    
    for line_num, line in enumerate(lines, 1):
        if line_num not in lines_to_remove:
            cleaned_lines.append(line)
        else:
            removed_count += 1
            print(f"删除重复声明 (行 {line_num}): {line.strip()}")
    
    return '\n'.join(cleaned_lines), removed_count

def process_file(input_file, output_file=None):
    """处理指定文件"""
    if output_file is None:
        base_name = os.path.splitext(input_file)[0]
        output_file = f"{base_name}_cleaned.c"
    
    try:
        # 读取文件
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        print(f"读取文件: {input_file}")
        print(f"文件大小: {len(content)} 字符")
        
        # 提取函数声明
        signatures = extract_function_signatures(content)
        print(f"检测到 {len(signatures)} 个函数声明")
        
        # 找出重复的函数
        duplicates = find_duplicate_functions(signatures)
        print(f"发现 {len(duplicates)} 个重复的函数声明:")
        
        for func_name, lines in duplicates.items():
            print(f"  {func_name}: 出现在行 {lines}")
        
        if not duplicates:
            print("未发现重复的函数声明，无需清理")
            return False
        
        # 清理重复声明
        cleaned_content, removed_count = clean_duplicate_declarations(content, signatures, duplicates)
        
        # 创建备份
        backup_file = f"{input_file}.backup"
        with open(backup_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        # 写入清理后的文件
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(cleaned_content)
        
        print(f"\n清理完成!")
        print(f"- 创建备份文件: {backup_file}")
        print(f"- 清理后文件: {output_file}")
        print(f"- 删除了 {removed_count} 个重复声明")
        print(f"- 保留了 {len(signatures) - removed_count} 个唯一声明")
        
        return True
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        import traceback
        traceback.print_exc()
        return False

def run_test():
    """运行测试"""
    print("=== 运行功能测试 ===")
    
    test_content = """
// 测试文件内容
void InitializeMemoryTracking(void);
void ConfigureMemoryProtection(void);
void InitializeMemoryCache(void);
void InitializeMemoryCache(void);
void InitializeGarbageCollector(void);
void InitializeGarbageCollector(void);
void SomeOtherFunction(void);
int GetSystemStatus(void);
"""
    
    signatures = extract_function_signatures(test_content)
    duplicates = find_duplicate_functions(signatures)
    
    print(f"测试内容中检测到 {len(signatures)} 个函数声明")
    print(f"测试内容中发现 {len(duplicates)} 个重复的函数声明")
    
    cleaned_content, removed_count = clean_duplicate_declarations(test_content, signatures, duplicates)
    
    # 验证结果
    new_signatures = extract_function_signatures(cleaned_content)
    new_duplicates = find_duplicate_functions(new_signatures)
    
    if new_duplicates:
        print("❌ 测试失败: 仍有重复的函数声明")
        return False
    else:
        print("✅ 测试通过: 成功清理重复声明")
        return True

def main():
    """主函数"""
    print("=== 清理重复函数声明脚本 ===")
    
    # 检查命令行参数
    if len(sys.argv) > 1:
        if sys.argv[1] == "--test":
            success = run_test()
            sys.exit(0 if success else 1)
        else:
            input_file = sys.argv[1]
    else:
        # 默认处理06_utilities.c文件
        input_file = "06_utilities.c"
    
    # 检查文件是否存在
    if not os.path.exists(input_file):
        print(f"错误: 文件 {input_file} 不存在")
        sys.exit(1)
    
    # 处理文件
    success = process_file(input_file)
    sys.exit(0 if success else 1)

if __name__ == "__main__":
    main()