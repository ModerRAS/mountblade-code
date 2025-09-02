#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
02_core_engine.c 剩余函数批量美化脚本
此脚本用于批量美化 02_core_engine.c 文件中的剩余 FUN_180xxxxx 函数
"""

import re
import os
import sys
import time
from datetime import datetime

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def create_backup(file_path):
    """创建备份文件"""
    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    backup_path = f"{file_path}.backup.{timestamp}"
    
    try:
        content = read_file(file_path)
        if content:
            write_file(backup_path, content)
            print(f"已创建备份文件: {backup_path}")
            return backup_path
    except Exception as e:
        print(f"创建备份失败: {e}")
    
    return None

def create_function_mapping():
    """创建函数重命名映射"""
    return {
        # 内存管理相关函数
        "FUN_180063820": "CoreEngineProcessMemoryAllocation",
        "FUN_180063b30": "CoreEngineReleaseMemoryAllocation",
        "FUN_180063cf0": "CoreEngineProcessMemoryOperation",
        "FUN_180064010": "CoreEngineInitializeMemoryContext",
        "FUN_180064400": "CoreEngineValidateMemoryOperation",
        "FUN_180064c00": "CoreEngineProcessMemoryDataTransfer",
        "FUN_180065160": "CoreEngineExecuteMemoryOperation",
        "FUN_180065d50": "CoreEngineProcessMemoryCleanup",
        "FUN_180065f00": "CoreEngineInitializeMemoryOperation",
        "FUN_180066140": "CoreEngineProcessMemoryConfiguration",
    }

def create_variable_mapping():
    """创建变量名映射"""
    return {
        "auStack_": "SystemStackBuffer",
        "uStack_": "SystemVariable",
        "lStack_": "SystemLongVariable",
        "puStack_": "SystemPointer",
        "pstatusFlag": "StatusFlagPointer",
        "primaryDataPointer": "PrimaryDataPointer",
        "MemoryOffset": "MemoryOffset",
        "MemoryBaseAddress": "MemoryBaseAddress",
        "allocatedMemory": "AllocatedMemory",
        "memoryEndAddress": "MemoryEndAddress",
        "memoryBlockSize": "MemoryBlockSize",
    }

def rename_functions(content, function_mapping):
    """重命名函数"""
    print("开始重命名函数...")
    renamed_count = 0
    
    for old_name, new_name in function_mapping.items():
        # 查找函数定义
        pattern = rf'void {old_name}\('
        matches = re.findall(pattern, content)
        
        if matches:
            print(f"找到函数 {old_name}，重命名为 {new_name}")
            
            # 替换函数定义
            content = re.sub(
                pattern,
                f'void {new_name}(',
                content
            )
            
            # 替换函数调用
            content = re.sub(
                rf'\b{old_name}\(',
                f'{new_name}(',
                content
            )
            
            # 更新注释
            content = re.sub(
                rf'// 函数:.*{old_name}',
                f'// 函数: {new_name} (原函数名: {old_name})',
                content
            )
            
            renamed_count += 1
        else:
            print(f"未找到函数 {old_name}")
    
    print(f"函数重命名完成，共处理 {renamed_count} 个函数")
    return content, renamed_count

def rename_variables(content, variable_mapping):
    """重命名变量"""
    print("开始重命名变量...")
    renamed_count = 0
    
    for old_var, new_var in variable_mapping.items():
        # 查找变量名
        pattern = rf'\b{old_var}([a-zA-Z0-9_]*)\b'
        matches = re.findall(pattern, content)
        
        if matches:
            print(f"找到变量 {old_var}，重命名为 {new_var}")
            
            # 替换变量名
            content = re.sub(
                pattern,
                f'{new_var}\\1',
                content
            )
            
            renamed_count += len(matches)
        else:
            print(f"未找到变量 {old_var}")
    
    print(f"变量重命名完成，共处理 {renamed_count} 处替换")
    return content, renamed_count

def create_report(function_mapping, variable_mapping, renamed_functions, renamed_variables, backup_path, report_path):
    """创建处理报告"""
    print("创建处理报告...")
    
    with open(report_path, 'w', encoding='utf-8') as f:
        f.write(f"""# 02_core_engine.c 函数美化处理报告

**处理时间**: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}
**处理文件**: /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

## 处理的函数

### 内存管理相关函数
""")
        
        for old_func in function_mapping.keys():
            new_func = function_mapping[old_func]
            f.write(f"- {old_func} → {new_func}\n")
        
        f.write("\n## 变量名替换\n\n### 系统变量\n")
        
        for old_var in variable_mapping.keys():
            new_var = variable_mapping[old_var]
            f.write(f"- {old_var} → {new_var}\n")
        
        f.write(f"""
## 处理统计

- 处理函数数量: {len(function_mapping)}
- 实际重命名函数: {renamed_functions}
- 变量替换模式: {len(variable_mapping)}
- 实际变量替换: {renamed_variables}
- 备份文件: {os.path.basename(backup_path)}

## 注意事项

1. 此脚本仅处理了部分函数，还有更多函数需要手动处理
2. 变量名替换可能需要进一步优化
3. 建议手动验证处理结果
4. 需要为每个函数添加详细的文档注释

## 后续工作

1. 处理剩余的 FUN_180xxxxx 函数
2. 为每个函数添加详细的文档注释
3. 进一步优化变量名
4. 验证代码的正确性
5. 更新相关文档

## 处理结果

- 函数重命名: {'已完成' if renamed_functions > 0 else '未完成'}
- 变量名美化: {'已完成' if renamed_variables > 0 else '未完成'}
- 基本验证: 需要手动进行
- 文档注释: 需要手动添加

---

**报告生成时间**: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}
**处理脚本**: beautify_02_core_engine_batch.py
""")
    
    print(f"处理报告已创建: {report_path}")

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return 1
    
    print(f"开始处理文件: {file_path}")
    
    # 创建备份
    backup_path = create_backup(file_path)
    if not backup_path:
        print("创建备份失败，终止处理")
        return 1
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        print("读取文件失败")
        return 1
    
    # 创建映射
    function_mapping = create_function_mapping()
    variable_mapping = create_variable_mapping()
    
    # 重命名函数
    content, renamed_functions = rename_functions(content, function_mapping)
    
    # 重命名变量
    content, renamed_variables = rename_variables(content, variable_mapping)
    
    # 写入文件
    if not write_file(file_path, content):
        print("写入文件失败")
        return 1
    
    # 创建报告
    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    report_path = f"/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine_beautification_report_{timestamp}.md"
    create_report(function_mapping, variable_mapping, renamed_functions, renamed_variables, backup_path, report_path)
    
    print("\n批量处理完成！")
    print(f"\n处理结果摘要:")
    print(f"- 处理函数数量: {len(function_mapping)}")
    print(f"- 实际重命名函数: {renamed_functions}")
    print(f"- 变量替换模式: {len(variable_mapping)}")
    print(f"- 实际变量替换: {renamed_variables}")
    print(f"- 备份文件: {os.path.basename(backup_path)}")
    print(f"- 处理报告: {os.path.basename(report_path)}")
    print("\n建议后续工作:")
    print("1. 手动验证处理结果")
    print("2. 为函数添加详细文档注释")
    print("3. 处理剩余的函数")
    print("4. 进一步优化变量名")
    
    return 0

if __name__ == "__main__":
    sys.exit(main())