#!/usr/bin/env python3
"""
美化05_networking.c文件中的变量名
重命名以下变量：
1. uStack_e8 -> NetworkProcessingOffset（网络处理偏移量）
2. uStack_f0 -> NetworkContextHandle（网络上下文句柄）
3. uStack_dc -> NetworkConnectionFlag（网络连接标志）
4. uStack_e0 -> NetworkPrimaryHandle（网络主句柄）
"""

import re

def beautify_networking_variables():
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 统计替换次数
    replacements = {
        'uStack_e8': 'NetworkProcessingOffset',
        'uStack_f0': 'NetworkContextHandle', 
        'uStack_dc': 'NetworkConnectionFlag',
        'uStack_e0': 'NetworkPrimaryHandle'
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        matches = re.findall(pattern, content)
        count = len(matches)
        content = re.sub(pattern, new_name, content)
        
        print(f"替换 {old_name} -> {new_name}: {count} 处")
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成！")

if __name__ == '__main__':
    beautify_networking_variables()