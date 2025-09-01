#!/usr/bin/env python3
"""
批量重命名01_initialization.c中的UNK_变量
"""

import re
import sys

def analyze_unk_variables(file_path):
    """分析UNK_变量的使用上下文"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有UNK_变量
    unk_pattern = r'UNK_[0-9a-fA-F]{8}'
    unk_vars = set(re.findall(unk_pattern, content))
    
    # 分析每个UNK变量的上下文
    variable_mappings = {}
    
    for var in sorted(unk_vars):
        # 查找变量出现的所有行
        lines_with_var = []
        for i, line in enumerate(content.split('\n'), 1):
            if var in line:
                lines_with_var.append((i, line.strip()))
        
        # 根据上下文推断变量类型
        var_type = infer_variable_type(lines_with_var)
        variable_mappings[var] = var_type
    
    return variable_mappings

def infer_variable_type(lines_with_var):
    """根据上下文推断变量类型"""
    context_text = '\n'.join([line[1] for line in lines_with_var[:5]])
    
    # 根据上下文关键词推断变量类型
    if 'RegisterSystemCallback' in context_text:
        return 'SystemCallbackTable'
    elif 'strcpy_s' in context_text:
        return 'SystemStringConstant'
    elif 'UpdateContextManager' in context_text:
        return 'ContextManagerData'
    elif 'memory' in context_text.lower():
        return 'MemoryAllocationData'
    elif 'buffer' in context_text.lower():
        return 'BufferData'
    elif 'SystemResourceTemplate' in context_text:
        return 'SystemResourceTemplate'
    elif 'SystemStringTemplate' in context_text:
        return 'SystemStringTemplate'
    else:
        return 'SystemData'

def generate_replacement_script(variable_mappings):
    """生成替换脚本"""
    script_content = "#!/bin/bash\n# 批量替换UNK_变量\n\n"
    
    # 为每个变量生成替换命令
    for var, var_type in variable_mappings.items():
        new_name = f"{var_type}_{var[4:]}"
        script_content += f'sed -i "s/{var}/{new_name}/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c\n'
    
    return script_content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("分析UNK_变量...")
    variable_mappings = analyze_unk_variables(file_path)
    
    print(f"找到 {len(variable_mappings)} 个UNK_变量")
    for var, var_type in variable_mappings.items():
        print(f"  {var} -> {var_type}_{var[4:]}")
    
    # 生成替换脚本
    script_content = generate_replacement_script(variable_mappings)
    
    # 将脚本写入临时文件
    with open('/tmp/replace_unk_vars.sh', 'w') as f:
        f.write(script_content)
    
    print("\n替换脚本已生成: /tmp/replace_unk_vars.sh")
    print("运行脚本执行替换: bash /tmp/replace_unk_vars.sh")

if __name__ == '__main__':
    main()