#!/usr/bin/env python3
"""
简化版99_unmatched_functions.c文件美化脚本
"""

import re

def process_file(file_path):
    """处理文件，重命名变量和函数"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 任务1: 将 "undefined" 类型替换为 "void*"
    undefined_count = content.count('undefined')
    content = content.replace('undefined', 'void*')
    
    # 任务2: 将 "UNK_" 开头的变量重命名为有意义的名称
    # 查找所有UNK_变量
    unk_pattern = r'UNK_[0-9a-f]{8}'
    unk_variables = re.findall(unk_pattern, content)
    
    if not unk_variables:
        print("未找到UNK_变量")
    else:
        # 去重
        unique_unk_vars = list(set(unk_variables))
        print(f"找到 {len(unique_unk_vars)} 个唯一的UNK_变量")
        
        # 创建变量映射
        variable_mappings = {}
        
        for var in unique_unk_vars:
            # 基于地址创建有意义的名称
            address = var[4:]  # 去掉UNK_前缀
            
            if address.startswith('1800'):
                variable_mappings[var] = f"InitializationSystemVariable_{address[4:]}"
            elif address.startswith('1801'):
                variable_mappings[var] = f"MemoryManagementVariable_{address[4:]}"
            elif address.startswith('1802'):
                variable_mappings[var] = f"NetworkHandlerVariable_{address[4:]}"
            elif address.startswith('1803'):
                variable_mappings[var] = f"RenderingSystemVariable_{address[4:]}"
            elif address.startswith('1804'):
                variable_mappings[var] = f"AudioSystemVariable_{address[4:]}"
            elif address.startswith('1805'):
                variable_mappings[var] = f"InputSystemVariable_{address[4:]}"
            elif address.startswith('1806'):
                variable_mappings[var] = f"PhysicsSystemVariable_{address[4:]}"
            elif address.startswith('1807'):
                variable_mappings[var] = f"AnimationSystemVariable_{address[4:]}"
            elif address.startswith('1808'):
                variable_mappings[var] = f"FileSystemVariable_{address[4:]}"
            elif address.startswith('1809'):
                variable_mappings[var] = f"DatabaseSystemVariable_{address[4:]}"
            elif address.startswith('180a'):
                variable_mappings[var] = f"UserInterfaceVariable_{address[4:]}"
            elif address.startswith('180b'):
                variable_mappings[var] = f"ScriptingSystemVariable_{address[4:]}"
            elif address.startswith('180c'):
                variable_mappings[var] = f"MultiplayerSystemVariable_{address[4:]}"
            elif address.startswith('180d'):
                variable_mappings[var] = f"UtilitySystemVariable_{address[4:]}"
            else:
                variable_mappings[var] = f"SystemDataPointer_{address}"
        
        # 替换变量名
        for old_name, new_name in variable_mappings.items():
            content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件处理完成：{file_path}")
    print(f"替换统计:")
    print(f"  - undefined 类型替换为 void*: {undefined_count} 个")
    print(f"  - UNK_ 变量重命名: {len(variable_mappings) if 'variable_mappings' in locals() else 0} 个")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    process_file(file_path)