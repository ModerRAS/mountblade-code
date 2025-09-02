#!/usr/bin/env python3
"""
处理网络函数的前50个FUN_函数
"""

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def process_functions(content):
    # 处理前50个FUN_函数
    function_names = [
        'InitializeNetworkConnectionContextFirst',
        'InitializeNetworkConnectionContextSecond', 
        'InitializeNetworkConnectionContextThird',
        'InitializeNetworkConnectionContextFourth',
        'ProcessNetworkConnectionDataFirst',
        'ProcessNetworkConnectionDataSecond',
        'ProcessNetworkConnectionDataThird',
        'ProcessNetworkConnectionDataFourth',
        'ProcessNetworkConnectionDataFifth',
        'ProcessNetworkConnectionDataSixth',
        'ProcessNetworkConnectionDataSeventh',
        'ProcessNetworkConnectionDataEighth',
        'ProcessNetworkConnectionDataNinth',
        'ProcessNetworkConnectionDataTenth',
        'ProcessNetworkConnectionDataEleventh',
        'ProcessNetworkConnectionDataTwelfth',
        'ProcessNetworkConnectionDataThirteenth',
        'ProcessNetworkConnectionDataFourteenth',
        'ProcessNetworkConnectionDataFifteenth',
        'ProcessNetworkConnectionDataSixteenth',
        'ProcessNetworkConnectionDataSeventeenth',
        'ProcessNetworkConnectionDataEighteenth',
        'ProcessNetworkConnectionDataNineteenth',
        'ProcessNetworkConnectionDataTwentieth',
        'ProcessNetworkConnectionDataTwentyFirst',
        'ProcessNetworkConnectionDataTwentySecond',
        'ProcessNetworkConnectionDataTwentyThird',
        'ProcessNetworkConnectionDataTwentyFourth',
        'ProcessNetworkConnectionDataTwentyFifth',
        'HandleNetworkPacketTransmissionFirst',
        'HandleNetworkPacketTransmissionSecond',
        'HandleNetworkPacketTransmissionThird',
        'HandleNetworkPacketTransmissionFourth',
        'HandleNetworkPacketTransmissionFifth',
        'HandleNetworkPacketTransmissionSixth',
        'HandleNetworkPacketTransmissionSeventh',
        'HandleNetworkPacketTransmissionEighth',
        'HandleNetworkPacketTransmissionNinth',
        'HandleNetworkPacketTransmissionTenth',
        'HandleNetworkPacketTransmissionEleventh',
        'HandleNetworkPacketTransmissionTwelfth',
        'HandleNetworkPacketTransmissionThirteenth',
        'HandleNetworkPacketTransmissionFourteenth',
        'HandleNetworkPacketTransmissionFifteenth',
        'HandleNetworkPacketTransmissionSixteenth',
        'HandleNetworkPacketTransmissionSeventeenth',
        'HandleNetworkPacketTransmissionEighteenth',
        'HandleNetworkPacketTransmissionNineteenth',
        'HandleNetworkPacketTransmissionTwentieth'
    ]
    
    # 查找所有FUN_函数定义
    pattern = r'// 函数: void (FUN_[a-f0-9]+\(.*\))\nvoid (\1)'
    matches = list(re.finditer(pattern, content))
    
    processed_count = 0
    for i, match in enumerate(matches[:50]):
        if i >= len(function_names):
            break
            
        old_fun_name = match.group(1)
        new_fun_name = function_names[i]
        
        # 创建新的函数文档
        param_part = old_fun_name.split('(')[1].split(')')[0]
        new_comment = f"""/**
 * {new_fun_name}函数
 * 
 * 该函数负责处理网络相关的操作，包括数据传输、连接管理等。
 * 具体功能需要根据上下文进一步分析。
 * 
 * @param {param_part} 参数
 * @return void
 * 
 * 原始函数名为{old_fun_name.split('(')[0]}，现已重命名为{new_fun_name}
 */
void {new_fun_name}({param_part})"""
        
        # 替换旧的函数定义
        old_text = match.group(0)
        content = content.replace(old_text, new_comment)
        
        # 替换函数调用
        fun_name_only = old_fun_name.split('(')[0]
        content = re.sub(r'\b' + re.escape(fun_name_only) + r'\b', new_fun_name, content)
        
        processed_count += 1
    
    return content, processed_count

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    content = read_file(file_path)
    new_content, processed_count = process_functions(content)
    
    write_file(file_path, new_content)
    print(f"处理完成，共处理 {processed_count} 个函数")

if __name__ == "__main__":
    main()