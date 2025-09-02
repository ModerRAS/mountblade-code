#!/usr/bin/env python3
"""
变量重命名脚本 - 针对01_initialization.c文件
用于将cVar、pcVar等变量名替换为更具语义的名称
"""

import re
import sys

def rename_variables_in_file(file_path):
    """
    重命名文件中的变量
    """
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量重命名映射
    variable_mappings = {
        # 字符类型变量重命名
        'cVar1': 'initializationStatusFlag',
        'cVar2': 'validationStatusFlag', 
        'cVar5': 'operationStatusFlag',
        'cVar9': 'systemAvailabilityFlag',
        'cVar3': 'characterProcessingFlag',
        'cVar7': 'resourceStatusFlag',
        'cVar8': 'threadStatusFlag',
        
        # 字符指针类型变量重命名
        'pcVar2': 'stringProcessingPointer',
        'pcVar3': 'pathStringPointer',
        'pcVar6': 'configurationStringPointer', 
        'pcVar7': 'resourceStringPointer',
        'pcVar8': 'systemStringPointer',
    }
    
    # 统计重命名的变量数量
    rename_count = 0
    
    # 对每个变量进行重命名
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只匹配完整的变量名
        # 匹配模式：变量名前后必须是非字母数字字符（或者是行首/行尾）
        pattern = r'(?<!\w)' + re.escape(old_name) + r'(?!\w)'
        
        # 统计替换次数
        matches = len(re.findall(pattern, content))
        if matches > 0:
            print(f"重命名变量: {old_name} -> {new_name} (出现次数: {matches})")
            rename_count += matches
        
        # 执行替换
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"\n总共重命名了 {rename_count} 个变量")
    return rename_count

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
    
    print("开始重命名01_initialization.c文件中的变量...")
    print("=" * 50)
    
    try:
        count = rename_variables_in_file(file_path)
        print("=" * 50)
        print("变量重命名完成！")
        
        # 显示重命名映射表
        print("\n变量重命名映射表:")
        print("-" * 50)
        mappings = {
            'cVar1': 'initializationStatusFlag - 系统初始化状态标志',
            'cVar2': 'validationStatusFlag - 验证状态标志',
            'cVar5': 'operationStatusFlag - 操作状态标志',
            'cVar9': 'systemAvailabilityFlag - 系统可用性标志',
            'cVar3': 'characterProcessingFlag - 字符处理标志',
            'cVar7': 'resourceStatusFlag - 资源状态标志',
            'cVar8': 'threadStatusFlag - 线程状态标志',
            'pcVar2': 'stringProcessingPointer - 字符串处理指针',
            'pcVar3': 'pathStringPointer - 路径字符串指针',
            'pcVar6': 'configurationStringPointer - 配置字符串指针',
            'pcVar7': 'resourceStringPointer - 资源字符串指针',
            'pcVar8': 'systemStringPointer - 系统字符串指针',
        }
        
        for old_var, description in mappings.items():
            print(f"{old_var:<15} -> {description}")
            
    except Exception as e:
        print(f"错误: {e}")
        sys.exit(1)