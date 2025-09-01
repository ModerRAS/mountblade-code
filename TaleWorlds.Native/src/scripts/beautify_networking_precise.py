#!/usr/bin/env python3
"""
网络模块代码美化脚本 - 精确版本
用于重命名05_networking.c文件中的变量和函数名
"""

import re

def beautify_networking_code():
    """美化网络模块代码"""
    
    # 读取源文件
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return
    
    # 定义需要替换的变量名映射
    replacements = {
        # 全局变量重命名
        'UNK_180957f58': 'GlobalNetworkConfigTable',
        'UNK_180876e90': 'NetworkConnectionManager',
        'UNK_18020f868': 'NetworkProtocolHandler',
        'UNK_18006b434': 'NetworkSocketRegistry',
        'UNK_180873e9c': 'NetworkPacketQueue',
        'UNK_180873ea4': 'NetworkConnectionPool',
        'UNK_180873eac': 'NetworkSecurityContext',
        'UNK_180873eb4': 'NetworkEventDispatcher',
        'UNK_180986190': 'NetworkErrorBuffer',
        'UNK_180986208': 'NetworkErrorDetails',
        
        # 局部变量重命名
        'networkContextData': 'networkContext',
        'connectionParam5': 'connectionFlags',
        'NetworkSocketParameter': 'socketHandle',
        'networkOperationPrimaryStatus0': 'networkOperationStatus',
        'NetworkPrimaryStatusFlag8': 'networkStatusFlag',
        'NetworkIndexCounter': 'connectionIndex',
        'networkContextArray1': 'connectionArray',
        'networkConnectionData': 'connectionData',
        'NetworkPrimaryStatusFlag': 'networkPrimaryStatus',
        'NetworkTertiaryStatusFlag': 'networkTertiaryStatus',
        'networkOperationQuaternaryStatus': 'networkQuaternaryStatus',
        'networkOperationSecondaryStatus': 'networkSecondaryStatus',
        'stack0x00000030': 'stackContext',
        
        # 函数名重命名
        'FUN_180868f00': 'ValidateNetworkConnectionData',
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in replacements.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 统计替换次数
    replacement_count = 0
    for old_name, new_name in replacements.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        count = len(re.findall(pattern, original_content))
        if count > 0:
            replacement_count += count
            print(f"替换 {old_name} -> {new_name}: {count} 次")
    
    print(f"总共替换了 {replacement_count} 个变量名")
    
    # 写入文件
    try:
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"文件已成功美化: {input_file}")
    except Exception as e:
        print(f"写入文件失败: {e}")

if __name__ == "__main__":
    beautify_networking_code()