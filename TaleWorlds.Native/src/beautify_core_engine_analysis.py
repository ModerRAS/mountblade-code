#!/usr/bin/env python3
"""
美化02_core_engine.c文件的脚本
用于重命名LAB_标签、UNK_变量、FUN_函数和DAT_变量
"""

import re
import sys
from collections import defaultdict

def analyze_lab_labels(content):
    """分析LAB_标签的使用模式"""
    print("=== 分析LAB_标签 ===")
    
    # 查找所有LAB_标签
    lab_pattern = r'LAB_([0-9a-fA-F]{8})'
    labs = re.findall(lab_pattern, content)
    
    # 统计每个LAB_标签的出现次数
    lab_counts = defaultdict(int)
    for lab in labs:
        lab_counts[lab] += 1
    
    print(f"总共找到 {len(labs)} 个LAB_标签")
    print(f"唯一LAB_标签数量: {len(lab_counts)}")
    
    # 显示前20个最频繁的LAB_标签
    sorted_labs = sorted(lab_counts.items(), key=lambda x: x[1], reverse=True)
    print("\n最频繁的LAB_标签:")
    for i, (lab, count) in enumerate(sorted_labs[:20]):
        print(f"  LAB_{lab}: {count} 次")
    
    return lab_counts

def analyze_unk_variables(content):
    """分析UNK_变量的使用模式"""
    print("\n=== 分析UNK_变量 ===")
    
    # 查找所有UNK_变量
    unk_pattern = r'UNK_([0-9a-fA-F]{8})'
    unks = re.findall(unk_pattern, content)
    
    # 统计每个UNK_变量的出现次数
    unk_counts = defaultdict(int)
    for unk in unks:
        unk_counts[unk] += 1
    
    print(f"总共找到 {len(unks)} 个UNK_变量")
    print(f"唯一UNK_变量数量: {len(unk_counts)}")
    
    # 显示前20个最频繁的UNK_变量
    sorted_unks = sorted(unk_counts.items(), key=lambda x: x[1], reverse=True)
    print("\n最频繁的UNK_变量:")
    for i, (unk, count) in enumerate(sorted_unks[:20]):
        print(f"  UNK_{unk}: {count} 次")
    
    return unk_counts

def analyze_fun_functions(content):
    """分析FUN_函数的使用模式"""
    print("\n=== 分析FUN_函数 ===")
    
    # 查找所有FUN_函数
    fun_pattern = r'FUN_([0-9a-fA-F]{8})'
    funs = re.findall(fun_pattern, content)
    
    # 统计每个FUN_函数的出现次数
    fun_counts = defaultdict(int)
    for fun in funs:
        fun_counts[fun] += 1
    
    print(f"总共找到 {len(funs)} 个FUN_函数")
    print(f"唯一FUN_函数数量: {len(fun_counts)}")
    
    # 显示前20个最频繁的FUN_函数
    sorted_funs = sorted(fun_counts.items(), key=lambda x: x[1], reverse=True)
    print("\n最频繁的FUN_函数:")
    for i, (fun, count) in enumerate(sorted_funs[:20]):
        print(f"  FUN_{fun}: {count} 次")
    
    return fun_counts

def analyze_dat_variables(content):
    """分析DAT_变量的使用模式"""
    print("\n=== 分析DAT_变量 ===")
    
    # 查找所有DAT_变量
    dat_pattern = r'DAT_([0-9a-fA-F]{8})'
    dats = re.findall(dat_pattern, content)
    
    # 统计每个DAT_变量的出现次数
    dat_counts = defaultdict(int)
    for dat in dats:
        dat_counts[dat] += 1
    
    print(f"总共找到 {len(dats)} 个DAT_变量")
    print(f"唯一DAT_变量数量: {len(dat_counts)}")
    
    # 显示前20个最频繁的DAT_变量
    sorted_dats = sorted(dat_counts.items(), key=lambda x: x[1], reverse=True)
    print("\n最频繁的DAT_变量:")
    for i, (dat, count) in enumerate(sorted_dats[:20]):
        print(f"  DAT_{dat}: {count} 次")
    
    return dat_counts

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        print(f"文件大小: {len(content)} 字符")
        
        # 分析各种模式
        lab_counts = analyze_lab_labels(content)
        unk_counts = analyze_unk_variables(content)
        fun_counts = analyze_fun_functions(content)
        dat_counts = analyze_dat_variables(content)
        
        print("\n=== 总结 ===")
        print(f"LAB_标签: {len(lab_counts)} 个唯一标签")
        print(f"UNK_变量: {len(unk_counts)} 个唯一变量")
        print(f"FUN_函数: {len(fun_counts)} 个唯一函数")
        print(f"DAT_变量: {len(dat_counts)} 个唯一变量")
        
    except FileNotFoundError:
        print(f"错误: 找不到文件 {file_path}")
        sys.exit(1)
    except Exception as e:
        print(f"错误: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()