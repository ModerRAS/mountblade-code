#!/usr/bin/env python3
"""
网络模块代码美化脚本
用于重命名05_networking.c文件中的变量和函数名
"""

import re
import sys

def beautify_networking_code():
    """美化网络模块代码"""
    
    # 读取源文件
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return
    
    # 定义变量和函数的重命名映射
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
        
        # 局部变量重命名
        'networkContextData': 'networkContext',
        'connectionParam5': 'connectionFlags',
        'NetworkSocketParameter': 'socketHandle',
        'networkOperationPrimaryStatus0': 'networkOperationStatus',
        'NetworkPrimaryStatusFlag8': 'networkStatusFlag',
        'NetworkIndexCounter': 'connectionIndex',
        'networkContextArray1': 'connectionArray',
        'networkConnectionData': 'connectionData',
        
        # 函数参数重命名
        'param_1': 'networkContext',
        'param_2': 'socketData',
        'param_3': 'packetBuffer',
        'param_4': 'dataSize',
        'param_5': 'connectionFlags',
        'param_6': 'timeoutValue',
        'param_7': 'priorityLevel',
        'param_8': 'securityToken',
        
        # 网络相关变量
        'local_10': 'connectionState',
        'local_18': 'packetHeader',
        'local_20': 'networkBuffer',
        'local_28': 'transferSize',
        'local_30': 'protocolVersion',
        'local_38': 'authenticationToken',
        'local_40': 'encryptionKey',
        'local_48': 'checksumValue',
        'local_50': 'sequenceNumber',
        'local_58': 'timestampValue',
        'local_60': 'errorStatus',
        'local_68': 'retryCount',
        'local_70': 'bandwidthLimit',
        'local_78': 'compressionLevel',
        'local_80': 'connectionTimeout',
        'local_88': 'packetPriority',
        'local_90': 'securityLevel',
        'local_98': 'transferMode',
        'local_a0': 'networkInterface',
        'local_a8': 'portNumber',
        'local_b0': 'ipAddress',
        'local_b8': 'macAddress',
        'local_c0': 'subnetMask',
        'local_c8': 'gatewayAddress',
        'local_d0': 'dnsServer',
        'local_d8': 'proxyServer',
        'local_e0': 'firewallRule',
        'local_e8': 'routeTable',
        'local_f0': 'networkMetric',
        'local_f8': 'latencyValue',
        'local_100': 'throughputValue',
        'local_108': 'packetLossRate',
        'local_110': 'jitterValue',
        'local_118': 'bandwidthUsage',
        'local_120': 'connectionQuality',
        'local_128': 'signalStrength',
        'local_130': 'interferenceLevel',
        'local_138': 'channelQuality',
        'local_140': 'networkLoad',
        'local_148': 'serverResponse',
        'local_150': 'clientRequest',
        'local_158': 'sessionData',
        'local_160': 'userContext',
        'local_168': 'applicationData',
        'local_170': 'systemResource',
        'local_178': 'memoryUsage',
        'local_180': 'cpuUsage',
        'local_188': 'diskUsage',
        'local_190': 'threadCount',
        'local_198': 'processId',
        'local_1a0': 'threadId',
        'local_1a8': 'handleValue',
        'local_1b0': 'descriptorValue',
        'local_1b8': 'fileDescriptor',
        'local_1c0': 'socketDescriptor',
        'local_1c8': 'pipeDescriptor',
        'local_1d0': 'eventDescriptor',
        'local_1d8': 'timerDescriptor',
        'local_1e0': 'signalDescriptor',
        'local_1e8': 'mutexDescriptor',
        'local_1f0': 'semaphoreDescriptor',
        'local_1f8': 'sharedMemoryDescriptor',
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
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"文件已成功美化: {output_file}")
    except Exception as e:
        print(f"写入文件失败: {e}")

if __name__ == "__main__":
    beautify_networking_code()