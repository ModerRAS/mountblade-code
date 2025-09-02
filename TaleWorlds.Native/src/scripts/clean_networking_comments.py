#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def clean_networking_file(input_file):
    """清理05_networking.c文件中的原始函数名映射"""
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 清理原始函数名映射的模式
    patterns = [
        r'\*ProcessConnectionRequest：ProcessNetworkConnectionRequest',
        r'\*ExecuteDataTransfer：ExecuteNetworkDataTransfer',
        r'\*ProcessPacket：ProcessNetworkPacket',
        r'\*InitializeNetworkConnectionContext：InitializeNetworkConnectionContext',
        r'\*ProcessNetworkStackDataEx：ProcessNetworkStackDataEx',
        r'\*ValidateNetworkConnectionHandle：ValidateNetworkConnectionHandle',
        r'\*GetConnectionHandle：GetNetworkConnectionHandle',
        r'\*func_0x00018088c6e0：ValidateNetworkConnectionEntry',
        r'\*func_0x00018088be40：InitializeNetworkContext',
        r'\*func_0x0001808bad50：ProcessNetworkContextEntry',
        r'\*func_0x0001808db610：HandleNetworkConnectionData',
        r'\*func_0x00018088c570：ProcessSecondaryConnectionData',
        r'\*func_0x0001808dcac0：ValidateNetworkContextEntry',
        r'\*func_0x0001808661c0：InitializeNetworkConnection',
        r'\*func_0x0001808661d0：ValidateNetworkConnectionStatus',
        r'\*func_0x000180866330：ResetNetworkConnectionState',
        r'\*func_0x0001808713a0：ProcessNetworkValidationQueue',
        r'\*func_0x0001808671f0：ClearNetworkConnectionCache',
        r'\*func_0x000180874280：InitializeNetworkBuffer',
        r'\*func_0x0001808da780：ProcessNetworkArrayData',
        r'\*CloseConnection：CloseNetworkConnection',
    ]
    
    # 执行替换
    for pattern in patterns:
        content = re.sub(pattern, '', content)
    
    # 修复重复的Network前缀
    content = re.sub(r'NetworknetworkConnectionTableHandle', 'NetworkConnectionTableHandle', content)
    
    # 删除重复的变量定义
    lines = content.split('\n')
    seen_vars = set()
    cleaned_lines = []
    
    for line in lines:
        # 检查是否是变量定义行
        if 'uint32_t NetworkSecurityContextData;' in line:
            if line.strip() not in seen_vars:
                seen_vars.add(line.strip())
                cleaned_lines.append(line)
            else:
                # 跳过重复的定义
                continue
        else:
            cleaned_lines.append(line)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write('\n'.join(cleaned_lines))
    
    print(f"文件 {input_file} 清理完成")

if __name__ == "__main__":
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    clean_networking_file(input_file)