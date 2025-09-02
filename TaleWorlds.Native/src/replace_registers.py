#!/usr/bin/env python3
"""
替换网络文件中的寄存器变量名为有意义的名称
"""

def replace_register_variables():
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    # 替换规则
    replacements = [
        ('in_RAX', 'RegisterAccumulator'),
        ('in_RCX', 'RegisterCounter'),
        ('in_RDX', 'RegisterData'),
        ('in_RBX', 'RegisterBase'),
        ('in_RSP', 'RegisterStackPointer'),
        ('in_RBP', 'RegisterBasePointer'),
        ('in_RSI', 'RegisterSourceIndex'),
        ('in_RDI', 'RegisterDestinationIndex'),
        ('in_R8', 'Register8'),
        ('in_R9', 'Register9'),
        ('in_R10', 'Register10'),
        ('in_R11', 'Register11'),
        ('in_R12', 'Register12'),
        ('in_R13', 'Register13'),
        ('in_R14', 'Register14'),
        ('in_R15', 'Register15'),
        ('in_RAXd', 'RegisterAccumulator32'),
        ('in_RCXd', 'RegisterCounter32'),
        ('in_RDXd', 'RegisterData32'),
        ('in_RBXd', 'RegisterBase32'),
        ('in_R8d', 'Register8_32'),
        ('in_R9d', 'Register9_32'),
        ('in_R10d', 'Register10_32'),
        ('in_R11d', 'Register11_32'),
        ('in_R12d', 'Register12_32'),
        ('in_R13d', 'Register13_32'),
        ('in_R14d', 'Register14_32'),
        ('in_R15d', 'Register15_32'),
        ('in_RAXb', 'RegisterAccumulator8'),
        ('in_RCXb', 'RegisterCounter8'),
        ('in_RDXb', 'RegisterData8'),
        ('in_RBXb', 'RegisterBase8'),
        ('in_R8b', 'Register8_8'),
        ('in_R9b', 'Register9_8'),
        ('in_R10b', 'Register10_8'),
        ('in_R11b', 'Register11_8'),
        ('in_R12b', 'Register12_8'),
        ('in_R13b', 'Register13_8'),
        ('in_R14b', 'Register14_8'),
        ('in_R15b', 'Register15_8'),
        ('in_XMM0', 'RegisterXMM0'),
        ('in_XMM1', 'RegisterXMM1'),
        ('in_XMM2', 'RegisterXMM2'),
        ('in_XMM3', 'RegisterXMM3'),
        ('in_XMM4', 'RegisterXMM4'),
        ('in_XMM5', 'RegisterXMM5'),
        ('in_XMM6', 'RegisterXMM6'),
        ('in_XMM7', 'RegisterXMM7')
    ]
    
    # 处理每一行
    modified_lines = []
    for line in lines:
        modified_line = line
        for old, new in replacements:
            # 只替换完整的变量名
            modified_line = modified_line.replace(old, new)
        modified_lines.append(modified_line)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
        f.writelines(modified_lines)
    
    print("寄存器变量名替换完成")

if __name__ == "__main__":
    replace_register_variables()