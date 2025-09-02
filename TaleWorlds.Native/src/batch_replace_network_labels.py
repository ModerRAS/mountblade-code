#!/usr/bin/env python3
"""
批量处理网络代码中的LAB标签
"""

import re

def process_networking_file():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义标签映射规则
    label_mappings = {
        '18084f6': 'NetworkSocketLabel',
        '18084f7': 'NetworkProtocolLabel', 
        '18084f8': 'NetworkHandshakeLabel',
        '18084f9': 'NetworkAuthenticationLabel',
        '18084fa': 'NetworkEncryptionLabel',
        '18084fb': 'NetworkCompressionLabel',
        '18084fc': 'NetworkValidationLabel',
        '18084fd': 'NetworkErrorRecoveryLabel',
        '18084fe': 'NetworkRetryLabel',
        '18084ff': 'NetworkFinalizeLabel',
        '1808500': 'NetworkInitializeLabel',
        '1808501': 'NetworkConnectLabel',
        '1808502': 'NetworkDisconnectLabel',
        '1808503': 'NetworkSendLabel',
        '1808504': 'NetworkReceiveLabel',
        '1808505': 'NetworkProcessLabel',
        '1808506': 'NetworkQueueLabel',
        '1808507': 'NetworkThreadLabel',
        '1808508': 'NetworkEventLabel',
        '1808509': 'NetworkCallbackLabel',
        '180850a': 'NetworkTimeoutLabel',
        '180850b': 'NetworkAbortLabel',
        '180850c': 'NetworkResetLabel',
        '180850d': 'NetworkRestartLabel',
        '180850e': 'NetworkCleanupLabel',
        '180850f': 'NetworkShutdownLabel',
    }
    
    # 应用映射规则
    for prefix, label_name in label_mappings.items():
        # 查找所有匹配的标签
        pattern = rf'LAB_{prefix}[0-9a-fA-F]+'
        matches = re.findall(pattern, content)
        
        if matches:
            # 为每个匹配的标签创建唯一名称
            for match in set(matches):
                suffix = match[6:]  # 获取后缀
                new_name = f'{label_name}{suffix}'
                
                # 替换标签定义
                content = re.sub(rf'{match}:', f'{new_name}:', content)
                # 替换goto语句
                content = re.sub(rf'goto {match};', f'goto {new_name};', content)
    
    # 写回文件
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("网络标签处理完成")

if __name__ == "__main__":
    process_networking_file()