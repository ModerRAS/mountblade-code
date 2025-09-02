#!/usr/bin/env python3
"""
完成变量重命名脚本 - 针对01_initialization.c文件
处理剩余的cVar和pcVar变量
"""

import re

def finish_rename_variables():
    """
    完成剩余变量的重命名
    """
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 剩余的变量映射
    remaining_mappings = {
        'cVar1': 'initializationStatusFlag',
        'cVar2': 'validationStatusFlag',
        'cVar3': 'characterProcessingFlag',
        'cVar5': 'operationStatusFlag',
        'cVar7': 'resourceStatusFlag',
        'cVar9': 'systemAvailabilityFlag',
        'pcVar2': 'stringProcessingPointer',
        'pcVar3': 'pathStringPointer',
        'pcVar6': 'configurationStringPointer',
        'pcVar7': 'resourceStringPointer',
        'pcVar8': 'systemStringPointer',
    }
    
    rename_count = 0
    
    # 对每个变量进行重命名
    for old_name, new_name in remaining_mappings.items():
        # 使用正则表达式确保只匹配完整的变量名
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
    print("完成01_initialization.c文件中的变量重命名...")
    print("=" * 50)
    
    try:
        count = finish_rename_variables()
        print("=" * 50)
        print("变量重命名完成！")
        
    except Exception as e:
        print(f"错误: {e}")
        import sys
        sys.exit(1)