#!/usr/bin/env python3
"""
网络系统文件美化执行脚本
用于执行05_networking.c文件的重命名操作
"""

import re
import os

def apply_renames_to_file(file_path, fun_renames, unk_renames, dat_renames, function_comments):
    """应用所有重命名到文件"""
    
    print(f"开始处理文件: {file_path}")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original_content = content
    
    # 应用FUN_函数重命名
    print("应用FUN_函数重命名...")
    for old_name, new_name in fun_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        print(f"  {old_name} -> {new_name}")
    
    # 应用UNK_变量重命名
    print("应用UNK_变量重命名...")
    for old_name, new_name in unk_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        print(f"  {old_name} -> {new_name}")
    
    # 应用DAT_变量重命名
    print("应用DAT_变量重命名...")
    for old_name, new_name in dat_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        print(f"  {old_name} -> {new_name}")
    
    # 添加函数文档注释
    print("添加函数文档注释...")
    for func_name, comment in function_comments.items():
        # 构建函数签名的正则表达式模式
        pattern = r'(\b' + re.escape(func_name) + r'\b.*?\)\s*\{)'
        replacement = comment + '\n' + r'\1'
        content = re.sub(pattern, replacement, content)
        print(f"  为 {func_name} 添加文档注释")
    
    # 检查是否有变化
    if content == original_content:
        print("警告：文件内容没有发生变化")
        return False
    
    # 创建备份
    backup_path = file_path + '.backup'
    if not os.path.exists(backup_path):
        os.rename(file_path, backup_path)
        print(f"原始文件已备份到: {backup_path}")
    
    # 保存修改后的文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件重命名完成，结果已保存到: {file_path}")
    return True

def main():
    # 导入重命名映射
    exec(open('networking_refactoring_plan.py').read())
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    print("开始网络系统文件美化...")
    
    success = apply_renames_to_file(file_path, FUN_RENAMES, UNK_RENAMES, DAT_RENAMES, FUNCTION_COMMENTS)
    
    if success:
        print("\n=== 美化完成 ===")
        print(f"共重命名 {len(FUN_RENAMES)} 个FUN_函数")
        print(f"共重命名 {len(UNK_RENAMES)} 个UNK_变量")
        print(f"共重命名 {len(DAT_RENAMES)} 个DAT_变量")
        print(f"为 {len(FUNCTION_COMMENTS)} 个主要函数添加了文档注释")
        print(f"处理文件: {file_path}")
    else:
        print("美化过程中出现问题")

if __name__ == "__main__":
    main()