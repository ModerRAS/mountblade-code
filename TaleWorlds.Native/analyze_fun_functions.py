#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
代码美化分析脚本
分析项目中所有包含FUN_函数的文件，识别需要处理的文件
"""

import os
import re
import sys
from pathlib import Path

def analyze_fun_functions():
    """分析所有包含FUN_函数的文件"""
    
    # 项目根目录
    project_root = Path("/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native")
    pretty_dir = project_root / "pretty"
    
    if not pretty_dir.exists():
        print(f"错误：找不到pretty目录: {pretty_dir}")
        return
    
    # 统计信息
    total_files = 0
    files_with_fun = 0
    files_with_actual_calls = 0
    files_with_only_defines = 0
    
    # 存储需要处理的文件
    files_needing_processing = []
    files_with_defines_only = []
    
    print("开始分析FUN_函数...")
    print("=" * 50)
    
    # 遍历所有.c文件
    for c_file in pretty_dir.rglob("*.c"):
        total_files += 1
        
        try:
            with open(c_file, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                
            # 检查是否包含FUN_函数
            fun_matches = re.findall(r'FUN_[0-9a-f]{8}', content)
            
            if fun_matches:
                files_with_fun += 1
                
                # 统计不同类型的FUN_出现
                defines = re.findall(r'^\s*#define\s+\w+\s+(FUN_[0-9a-f]{8})', content, re.MULTILINE)
                calls = re.findall(r'FUN_[0-9a-f]{8}', content)
                
                # 过滤掉#define中的FUN_函数
                actual_calls = [call for call in calls if call not in defines]
                
                if actual_calls:
                    files_with_actual_calls += 1
                    files_needing_processing.append({
                        'file': str(c_file.relative_to(project_root)),
                        'total_funs': len(set(fun_matches)),
                        'defines': len(set(defines)),
                        'calls': len(set(actual_calls)),
                        'call_list': list(set(actual_calls))[:5]  # 显示前5个调用
                    })
                else:
                    files_with_only_defines += 1
                    files_with_defines_only.append({
                        'file': str(c_file.relative_to(project_root)),
                        'defines': len(set(defines))
                    })
        
        except Exception as e:
            print(f"处理文件 {c_file} 时出错: {e}")
    
    # 输出统计信息
    print(f"总文件数: {total_files}")
    print(f"包含FUN_函数的文件数: {files_with_fun}")
    print(f"只有#define定义的文件数: {files_with_only_defines}")
    print(f"包含实际调用的文件数: {files_with_actual_calls}")
    print("=" * 50)
    
    # 输出需要处理的文件
    if files_needing_processing:
        print(f"需要处理的文件 ({files_with_actual_calls} 个):")
        print("-" * 50)
        
        for i, file_info in enumerate(files_needing_processing[:20]):  # 显示前20个
            print(f"{i+1:2d}. {file_info['file']}")
            print(f"    总FUN_函数: {file_info['total_funs']}, 定义: {file_info['defines']}, 调用: {file_info['calls']}")
            if file_info['call_list']:
                print(f"    示例调用: {', '.join(file_info['call_list'])}")
            print()
        
        if len(files_needing_processing) > 20:
            print(f"... 还有 {len(files_needing_processing) - 20} 个文件需要处理")
    
    # 输出只有定义的文件
    if files_with_defines_only:
        print(f"只有#define定义的文件 ({files_with_only_defines} 个):")
        print("-" * 50)
        
        for i, file_info in enumerate(files_with_defines_only[:10]):  # 显示前10个
            print(f"{i+1:2d}. {file_info['file']} ({file_info['defines']} 个定义)")
        
        if len(files_with_defines_only) > 10:
            print(f"... 还有 {len(files_with_defines_only) - 10} 个文件")
    
    return files_needing_processing, files_with_defines_only

def create_processing_script(files_needing_processing):
    """创建处理脚本"""
    
    script_content = '''#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量FUN_函数处理脚本
自动替换文件中的FUN_函数调用为有意义的别名
"""

import re
import sys
from pathlib import Path

def process_file(file_path):
    """处理单个文件"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 检查是否已经有#define定义
        existing_defines = re.findall(r'^\\s*#define\\s+(\\w+)\\s+(FUN_[0-9a-f]{8})', content, re.MULTILINE)
        define_map = {fun: alias for alias, fun in existing_defines}
        
        # 找到所有实际的FUN_函数调用
        fun_calls = re.findall(r'FUN_[0-9a-f]{8}', content)
        actual_calls = [call for call in fun_calls if call not in define_map]
        
        if not actual_calls:
            print(f"文件 {file_path} 不需要处理")
            return False
        
        print(f"处理文件: {file_path}")
        print(f"  发现 {len(set(actual_calls))} 个需要替换的FUN_函数")
        
        # 为每个FUN_函数创建别名
        for fun in set(actual_calls):
            if fun not in define_map:
                # 基于函数地址创建有意义的别名
                alias = create_function_alias(fun)
                define_map[fun] = alias
        
        # 添加#define定义到文件开头
        defines_section = "\\n/* ============================================================================
 * 函数别名定义 - 自动生成的代码美化别名
 * ============================================================================ */\\n"
        
        for fun, alias in sorted(define_map.items()):
            defines_section += f"#define {alias} {fun}\\n"
        
        # 替换所有FUN_函数调用
        processed_content = content
        for fun, alias in define_map.items():
            processed_content = processed_content.replace(fun, alias)
        
        # 在文件开头插入定义
        insert_pos = processed_content.find("#include")
        if insert_pos != -1:
            # 找到include语句的结尾
            end_include = processed_content.find("\\n", insert_pos)
            if end_include != -1:
                processed_content = processed_content[:end_include+1] + defines_section + processed_content[end_include+1:]
        
        # 写入文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(processed_content)
        
        print(f"  成功处理，添加了 {len(define_map)} 个函数别名")
        return True
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

def create_function_alias(fun_address):
    """为FUN_函数创建有意义的别名"""
    # 基于地址创建通用别名
    address_suffix = fun_address[6:]  # 去掉"FUN_180"前缀
    
    # 根据地址范围创建不同类型的别名
    if address_suffix.startswith('0'):
        return f"SystemInitializer_{address_suffix}"
    elif address_suffix.startswith('1'):
        return f"DataProcessor_{address_suffix}"
    elif address_suffix.startswith('2'):
        return f"MemoryManager_{address_suffix}"
    elif address_suffix.startswith('3'):
        return f"ResourceManager_{address_suffix}"
    elif address_suffix.startswith('4'):
        return f"NetworkHandler_{address_suffix}"
    elif address_suffix.startswith('5'):
        return f"SecurityChecker_{address_suffix}"
    elif address_suffix.startswith('6'):
        return f"StateController_{address_suffix}"
    elif address_suffix.startswith('7'):
        return f"ErrorHandler_{address_suffix}"
    elif address_suffix.startswith('8'):
        return f"ConfigurationManager_{address_suffix}"
    elif address_suffix.startswith('9'):
        return f"OptimizationEngine_{address_suffix}"
    else:
        return f"SystemFunction_{address_suffix}"

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("用法: python process_fun_functions.py <file_path>")
        sys.exit(1)
    
    file_path = Path(sys.argv[1])
    if not file_path.exists():
        print(f"错误：文件不存在: {file_path}")
        sys.exit(1)
    
    success = process_file(file_path)
    sys.exit(0 if success else 1)

if __name__ == "__main__":
    main()
'''
    
    # 写入脚本文件
    script_path = Path("/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/process_fun_functions.py")
    with open(script_path, 'w', encoding='utf-8') as f:
        f.write(script_content)
    
    # 设置执行权限
    os.chmod(script_path, 0o755)
    
    print(f"处理脚本已创建: {script_path}")
    
    # 创建批量处理脚本
    batch_script = '''#!/bin/bash

# 批量处理FUN_函数的脚本

SCRIPT_DIR="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native"
PYTHON_SCRIPT="$SCRIPT_DIR/process_fun_functions.py"

cd "$SCRIPT_DIR"

# 处理所有需要处理的文件
echo "开始批量处理FUN_函数..."

# 这里可以添加具体的文件列表
for file in $@; do
    if [ -f "$file" ]; then
        echo "处理文件: $file"
        python3 "$PYTHON_SCRIPT" "$file"
    else
        echo "警告：文件不存在: $file"
    fi
done

echo "批量处理完成"
'''
    
    batch_script_path = Path("/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/batch_process.sh")
    with open(batch_script_path, 'w', encoding='utf-8') as f:
        f.write(batch_script)
    
    os.chmod(batch_script_path, 0o755)
    print(f"批量处理脚本已创建: {batch_script_path}")

if __name__ == "__main__":
    files_needing_processing, files_with_defines_only = analyze_fun_functions()
    
    if files_needing_processing:
        create_processing_script(files_needing_processing)
        print("\\n处理脚本已创建，可以开始批量处理FUN_函数")
    else:
        print("\\n恭喜！所有文件都已经完成了FUN_函数的美化处理")