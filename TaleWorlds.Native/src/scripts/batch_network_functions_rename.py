#!/usr/bin/env python3
"""
批量处理网络模块函数名美化
"""

import re

def generate_function_name(address, context=""):
    """根据地址生成语义化函数名"""
    addr_suffix = address[6:]
    
    # 根据地址前缀和上下文生成更具体的函数名
    if "ProcessConnectionDataValidation" in context:
        return f"ProcessConnectionDataValidationInstance{addr_suffix}"
    elif "NetworkSystemNoOperation" in context:
        return f"NetworkSystemNoOperationInstance{addr_suffix}"
    elif "ValidateConnectionContextOffset" in context:
        return f"ValidateConnectionContextOffsetInstance{addr_suffix}"
    elif "ProcessNetworkContextCounterValidation" in context:
        return f"ProcessNetworkContextCounterValidationInstance{addr_suffix}"
    else:
        return f"NetworkFunction_{addr_suffix}"

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有需要替换的函数
    pattern = r'(?:// 函数: .*\n)?(\w+\s+\*?\s*)FUN_(0x[0-9a-fA-F]+)\s*\([^)]*\)\s*\{[^}]*\}'
    
    def replace_function(match):
        comment = match.group(1) if match.group(1) else ""
        return_type = match.group(2).strip()
        address = match.group(3)
        function_body = match.group(4)
        
        # 生成新的函数名
        new_name = generate_function_name(address, comment)
        
        # 重新构建函数
        lines = function_body.split('\n')
        signature_line = lines[0]
        new_signature = f"{return_type} {new_name}("
        
        # 替换函数签名
        new_function = function_body.replace(signature_line, new_signature)
        
        return new_function
    
    # 应用替换
    new_content = re.sub(pattern, replace_function, content, flags=re.DOTALL)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(new_content)
    
    print("函数名批量替换完成")

if __name__ == "__main__":
    main()