#!/usr/bin/env python3
"""
批量美化06_utilities.c中的逆向工程函数名
将Unwind_开头的函数重命名为语义化的名称
"""

import re

def read_file(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filename, content):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_functions(content):
    # 定义函数映射关系
    function_mappings = {
        'Unwind_180908840': 'ProcessResourceValidationAtF0',
        'Unwind_180908850': 'ProcessResourceValidationAtF8',
        'Unwind_180908860': 'ProcessResourceValidationAt100',
        'Unwind_180908870': 'ProcessResourceValidationAt108',
        'Unwind_180908880': 'ProcessResourceValidationAt110',
        'Unwind_180908890': 'ProcessResourceValidationAt118',
        'Unwind_1809088a0': 'ProcessResourceValidationAt120',
        'Unwind_1809088d0': 'ProcessResourceValidationAt148',
        'Unwind_180908910': 'ProcessResourceValidationAt178',
        'Unwind_180908920': 'ProcessResourceValidationAt180',
        'Unwind_180908950': 'ProcessResourceValidationAt1B0',
        'Unwind_180908980': 'ProcessResourceValidationAt1E0',
        'Unwind_180908990': 'ProcessResourceValidationAt1E8',
        'Unwind_1809089a0': 'ProcessResourceValidationAt1F0',
        'Unwind_1809089b0': 'ProcessResourceValidationAt1F8',
        'Unwind_1809089e0': 'ProcessResourceValidationAt228',
        'Unwind_180908a50': 'ProcessResourceValidationAt280',
        'Unwind_180908a60': 'ProcessResourceValidationAt288',
        'Unwind_180908a70': 'ProcessResourceValidationAt290',
        'Unwind_180908a80': 'ProcessResourceValidationAt298',
        'Unwind_180908a90': 'ProcessResourceValidationAt2A0',
        'Unwind_180908aa0': 'ProcessResourceValidationAt2A8',
        'Unwind_180908ab0': 'ProcessResourceValidationAt2B0',
        'Unwind_180908ac0': 'ProcessResourceValidationAt2B8',
    }
    
    # 替换函数声明
    for old_name, new_name in function_mappings.items():
        # 匹配函数声明行
        pattern = rf'void {old_name}\((uint8_t|int)\s+[a-zA-Z_][a-zA-Z0-9_]*\s*,\s*(int64_t|uint64_t)\s+[a-zA-Z_][a-zA-Z0-9_]*\)'
        content = re.sub(pattern, f'void {new_name}(uint8_t ObjectContext, int64_t ValidationContext)', content)
        
        # 匹配简单的函数声明
        simple_pattern = rf'void {old_name}\([a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\s*,\s*[a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\)'
        content = re.sub(simple_pattern, f'void {new_name}(uint8_t ObjectContext, int64_t ValidationContext)', content)
    
    return content

def add_function_comments(content):
    # 为已美化的函数添加注释模板
    comment_template = '''/**
 * @brief 处理资源验证（偏移量{offset}）
 * 
 * 该函数负责处理位于特定偏移量处的资源验证操作
 * 执行相应的验证逻辑和清理操作
 * 
 * @param ObjectContext 对象上下文，包含对象的状态信息
 * @param ValidationContext 验证上下文，包含验证相关的数据
 * @return 无返回值
 * @remark 原始函数名: {original_name}
 */
'''
    
    # 这里可以添加更复杂的注释插入逻辑
    return content

def main():
    filename = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("读取文件...")
    content = read_file(filename)
    
    print("美化函数名...")
    content = beautify_functions(content)
    
    print("添加函数注释...")
    content = add_function_comments(content)
    
    print("写入文件...")
    write_file(filename, content)
    
    print("完成!")

if __name__ == "__main__":
    main()