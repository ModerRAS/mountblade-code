#!/usr/bin/env python3
"""
测试脚本 - 验证清理重复函数声明的功能
"""

import re

def test_script():
    """测试脚本功能"""
    # 创建测试内容
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
    
    print("=== 测试清理重复函数声明脚本 ===")
    print("原始测试内容:")
    print(test_content)
    
    # 提取函数声明
    function_pattern = r'^\s*([a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\([^;]*\)\s*;)'
    
    signatures = []
    lines = test_content.split('\n')
    
    for line_num, line in enumerate(lines, 1):
        match = re.match(function_pattern, line)
        if match:
            full_declaration = match.group(1).strip()
            func_name_match = re.search(r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)', full_declaration)
            if func_name_match:
                func_name = func_name_match.group(1)
                signatures.append((line_num, full_declaration, func_name))
    
    print(f"检测到 {len(signatures)} 个函数声明:")
    for line_num, full_declaration, func_name in signatures:
        print(f"  行 {line_num}: {full_declaration} (函数名: {func_name})")
    
    # 找出重复的函数
    function_occurrences = {}
    for line_num, full_declaration, func_name in signatures:
        if func_name not in function_occurrences:
            function_occurrences[func_name] = []
        function_occurrences[func_name].append(line_num)
    
    duplicates = {func: lines for func, lines in function_occurrences.items() if len(lines) > 1}
    
    print(f"\n发现 {len(duplicates)} 个重复的函数声明:")
    for func_name, lines in duplicates.items():
        print(f"  {func_name}: 出现在行 {lines}")
    
    # 清理重复声明
    lines_to_remove = set()
    for func_name, lines in duplicates.items():
        lines_to_remove.update(lines[1:])
    
    # 生成清理后的内容
    cleaned_lines = []
    removed_count = 0
    
    for line_num, line in enumerate(lines, 1):
        if line_num not in lines_to_remove:
            cleaned_lines.append(line)
        else:
            removed_count += 1
            print(f"删除重复声明 (行 {line_num}): {line.strip()}")
    
    cleaned_content = '\n'.join(cleaned_lines)
    
    print(f"\n清理完成!")
    print(f"- 删除了 {removed_count} 个重复声明")
    print(f"- 保留了 {len(signatures) - removed_count} 个唯一声明")
    
    print("\n清理后的内容:")
    print(cleaned_content)
    
    # 验证结果
    print("\n=== 验证结果 ===")
    new_signatures = []
    new_lines = cleaned_content.split('\n')
    
    for line_num, line in enumerate(new_lines, 1):
        match = re.match(function_pattern, line)
        if match:
            full_declaration = match.group(1).strip()
            func_name_match = re.search(r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)', full_declaration)
            if func_name_match:
                func_name = func_name_match.group(1)
                new_signatures.append((line_num, full_declaration, func_name))
    
    # 检查是否还有重复
    new_function_occurrences = {}
    for line_num, full_declaration, func_name in new_signatures:
        if func_name not in new_function_occurrences:
            new_function_occurrences[func_name] = []
        new_function_occurrences[func_name].append(line_num)
    
    new_duplicates = {func: lines for func, lines in new_function_occurrences.items() if len(lines) > 1}
    
    if new_duplicates:
        print("❌ 验证失败: 仍有重复的函数声明")
        for func_name, lines in new_duplicates.items():
            print(f"  {func_name}: 出现在行 {lines}")
    else:
        print("✅ 验证成功: 没有重复的函数声明")
        print(f"✅ 最终保留了 {len(new_signatures)} 个唯一的函数声明")

if __name__ == "__main__":
    test_script()