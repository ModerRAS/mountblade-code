#!/usr/bin/env python3
"""
美化UI系统变量的脚本 - 批量重命名无意义变量名
将无符号整型变量、整型变量等重命名为有意义的名称
"""

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_ui_system_variables(content):
    # 动画数据相关变量重命名
    content = re.sub(r'a无符号整型变量23', 'animationDataBuffer23', content)
    content = re.sub(r'a无符号整型变量24', 'animationDataBuffer24', content)
    content = re.sub(r'a无符号整型变量25', 'animationDataBuffer25', content)
    content = re.sub(r'a无符号整型变量26', 'animationDataBuffer26', content)
    content = re.sub(r'a无符号整型变量27', 'animationDataBuffer27', content)
    content = re.sub(r'a无符号整型变量28', 'animationDataBuffer28', content)
    content = re.sub(r'a无符号整型变量29', 'animationDataBuffer29', content)
    content = re.sub(r'a无符号整型变量30', 'animationDataBuffer30', content)
    
    # 通用变量重命名
    content = re.sub(r'无符号整型变量1', 'unsignedVariable1', content)
    content = re.sub(r'无符号整型变量2', 'unsignedVariable2', content)
    content = re.sub(r'无符号整型变量3', 'unsignedVariable3', content)
    content = re.sub(r'无符号整型变量4', 'unsignedVariable4', content)
    content = re.sub(r'无符号整型变量5', 'unsignedVariable5', content)
    content = re.sub(r'无符号整型变量6', 'unsignedVariable6', content)
    content = re.sub(r'无符号整型变量7', 'unsignedVariable7', content)
    content = re.sub(r'无符号整型变量8', 'unsignedVariable8', content)
    content = re.sub(r'无符号整型变量9', 'unsignedVariable9', content)
    content = re.sub(r'无符号整型变量10', 'unsignedVariable10', content)
    content = re.sub(r'无符号整型变量11', 'unsignedVariable11', content)
    content = re.sub(r'无符号整型变量12', 'unsignedVariable12', content)
    content = re.sub(r'无符号整型变量22', 'unsignedVariable22', content)
    
    # 整型变量重命名
    content = re.sub(r'整型变量1', 'integerVariable1', content)
    content = re.sub(r'整型变量2', 'integerVariable2', content)
    content = re.sub(r'整型变量3', 'integerVariable3', content)
    content = re.sub(r'整型变量4', 'integerVariable4', content)
    content = re.sub(r'整型变量5', 'integerVariable5', content)
    content = re.sub(r'整型变量6', 'integerVariable6', content)
    content = re.sub(r'整型变量7', 'integerVariable7', content)
    content = re.sub(r'整型变量8', 'integerVariable8', content)
    content = re.sub(r'整型变量9', 'integerVariable9', content)
    content = re.sub(r'整型变量10', 'integerVariable10', content)
    content = re.sub(r'整型变量11', 'integerVariable11', content)
    content = re.sub(r'整型变量12', 'integerVariable12', content)
    content = re.sub(r'整型变量14', 'integerVariable14', content)
    content = re.sub(r'整型变量17', 'integerVariable17', content)
    
    # 长整型变量重命名
    content = re.sub(r'长整型变量1', 'longVariable1', content)
    content = re.sub(r'长整型变量2', 'longVariable2', content)
    content = re.sub(r'长整型变量3', 'longVariable3', content)
    content = re.sub(r'长整型变量4', 'longVariable4', content)
    content = re.sub(r'长整型变量5', 'longVariable5', content)
    content = re.sub(r'长整型变量6', 'longVariable6', content)
    
    # 指针变量重命名
    content = re.sub(r'p无符号整型变量1', 'ptrUnsignedVariable1', content)
    content = re.sub(r'p无符号整型变量2', 'ptrUnsignedVariable2', content)
    content = re.sub(r'p无符号整型变量3', 'ptrUnsignedVariable3', content)
    content = re.sub(r'p无符号整型变量4', 'ptrUnsignedVariable4', content)
    content = re.sub(r'p无符号整型变量6', 'ptrUnsignedVariable6', content)
    content = re.sub(r'p无符号整型变量7', 'ptrUnsignedVariable7', content)
    content = re.sub(r'p无符号整型变量8', 'ptrUnsignedVariable8', content)
    content = re.sub(r'p无符号整型变量10', 'ptrUnsignedVariable10', content)
    content = re.sub(r'p无符号整型变量15', 'ptrUnsignedVariable15', content)
    content = re.sub(r'p无符号整型变量18', 'ptrUnsignedVariable18', content)
    content = re.sub(r'p整型变量1', 'ptrIntegerVariable1', content)
    content = re.sub(r'p整型变量6', 'ptrIntegerVariable6', content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化变量名
    beautified_content = beautify_ui_system_variables(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print("UI系统变量名美化完成")

if __name__ == "__main__":
    main()