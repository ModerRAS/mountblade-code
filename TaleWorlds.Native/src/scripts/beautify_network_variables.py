#!/usr/bin/env python3
"""
美化网络代码中的变量名
将逆向工程生成的变量名替换为语义化的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_network_variables(content):
    """美化网络相关变量名"""
    
    # 替换 extraout_XMM0_Da 系列变量
    replacements = [
        # 寄存器输出变量
        (r'extraout_XMM0_Da', 'NetworkRegisterOutputA'),
        (r'extraout_XMM0_Da_04', 'NetworkRegisterOutputB'),
        (r'extraout_XMM0_Da_05', 'NetworkRegisterOutputC'),
        (r'extraout_XMM0_Da_06', 'NetworkRegisterOutputD'),
        (r'extraout_XMM0_Da_07', 'NetworkRegisterOutputE'),
        (r'extraout_XMM0_Da_08', 'NetworkRegisterOutputF'),
        (r'extraout_XMM0_Da_09', 'NetworkRegisterOutputG'),
        
        # 输入寄存器变量
        (r'in_XMM0_Da', 'NetworkRegisterInputA'),
        (r'in_XMM0_Da_04', 'NetworkRegisterInputB'),
        (r'in_XMM0_Qa', 'NetworkRegisterInputQ'),
        (r'in_XMM0_Qa_04', 'NetworkRegisterInputQ2'),
        
        # 浮点数变量
        (r'NetworkFloat5', 'NetworkFloatValueA'),
        (r'NetworkFloat30', 'NetworkFloatValueB'),
        (r'NetworkFloat[0-9]+', lambda m: f'NetworkFloatValue{chr(65 + int(m.group(0)[11:]))}'),
        
        # 代码标签
        (r'code_r0x[0-9a-fA-F]+', lambda m: f'NetworkCodeLabel{hash(m.group(0)) % 1000:03d}'),
        (r'LAB_[A-Z0-9_]+', lambda m: f'NetworkLabel{hash(m.group(0)) % 1000:03d}'),
        
        # CONCAT44 宏调用
        (r'CONCAT44\(([^,]+),([^)]+)\)', r'NetworkConcat44(\1,\2)'),
        
        # 网络状态变量
        (r'NetworkPrimaryStatus', 'NetworkMainStatus'),
        (r'NetworkTimeoutStatus', 'NetworkTimeoutIndicator'),
        (r'NetworkStatus[A-Z_]*', lambda m: f'Network{m.group(0)[12:]}Status'),
        
        # 指针变量
        (r'pNetwork[A-Z_]*', lambda m: f'Network{m.group(0)[7:]}Pointer'),
        
        # 连接处理相关
        (r'joined_r0x[0-9a-fA-F]+', 'NetworkConnectionLoopExit'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        if callable(replacement):
            content = re.sub(pattern, replacement, content)
        else:
            content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python beautify_network_variables.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化变量名
    beautified_content = beautify_network_variables(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print(f"Successfully beautified variables in {file_path}")

if __name__ == "__main__":
    main()