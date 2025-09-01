#!/usr/bin/env python3
"""
简化版网络函数分析脚本
"""

import re
from collections import defaultdict

def analyze_functions():
    """分析05_networking.c中的func_0x函数"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r') as f:
        content = f.read()
    
    # 找到所有func_0x函数调用
    func_pattern = r'func_0x([a-f0-9]+)'
    functions = re.findall(func_pattern, content)
    
    # 统计调用次数
    func_counts = defaultdict(int)
    for func in functions:
        func_counts[func] += 1
    
    # 根据手动分析创建映射表
    function_mapping = {
        '00018085f4a0': {
            'name': 'CompareNetworkHandles',
            'desc': '比较两个网络句柄',
            'params': 2,
            'returns': 'int'
        },
        '0001808c1740': {
            'name': 'GetNetworkFloatValue',
            'desc': '获取网络浮点数值',
            'params': 2,
            'returns': 'float'
        },
        '0001808bef20': {
            'name': 'GetNetworkConnectionIndex',
            'desc': '获取网络连接索引',
            'params': 2,
            'returns': 'int'
        },
        '00018084d100': {
            'name': 'AccessNetworkContext',
            'desc': '访问网络上下文数据',
            'params': 2,
            'returns': 'void*'
        },
        '000180859da0': {
            'name': 'ProcessNetworkData',
            'desc': '处理网络数据',
            'params': 2,
            'returns': 'void'
        },
        '000180854a60': {
            'name': 'InitializeNetworkStack',
            'desc': '初始化网络栈',
            'params': 1,
            'returns': 'void'
        },
        '0001808c6c50': {
            'name': 'ProcessNetworkDataStream',
            'desc': '处理网络数据流',
            'params': 2,
            'returns': 'int'
        },
        '0001808b8910': {
            'name': 'GetNetworkContextPointer',
            'desc': '获取网络上下文指针',
            'params': 1,
            'returns': 'void*'
        },
        '00018085c9a0': {
            'name': 'SendNetworkPacket',
            'desc': '发送网络数据包',
            'params': 4,
            'returns': 'void'
        },
        '0001808601d0': {
            'name': 'GetNetworkStatus',
            'desc': '获取网络状态',
            'params': 1,
            'returns': 'int'
        },
        '0001808c7250': {
            'name': 'ValidateNetworkPacket',
            'desc': '验证网络数据包',
            'params': 2,
            'returns': 'void'
        },
        '0001808b62c0': {
            'name': 'EstablishNetworkConnection',
            'desc': '建立网络连接',
            'params': 5,
            'returns': 'void'
        },
        '0001808c92a0': {
            'name': 'ConfigureNetworkConnection',
            'desc': '配置网络连接',
            'params': 7,
            'returns': 'void'
        },
        '00018085de10': {
            'name': 'CleanupNetworkResources',
            'desc': '清理网络资源',
            'params': 1,
            'returns': 'void'
        },
        '00018085e3f0': {
            'name': 'ReleaseNetworkConnection',
            'desc': '释放网络连接',
            'params': 1,
            'returns': 'void'
        },
        '00018085deb0': {
            'name': 'FreeNetworkMemory',
            'desc': '释放网络内存',
            'params': 1,
            'returns': 'void'
        },
        '00018085f3d0': {
            'name': 'ValidateNetworkContext',
            'desc': '验证网络上下文',
            'params': 1,
            'returns': 'void'
        },
        '00018085df50': {
            'name': 'ResetNetworkBuffer',
            'desc': '重置网络缓冲区',
            'params': 1,
            'returns': 'void'
        },
        '0001808b6360': {
            'name': 'ClearNetworkFlags',
            'desc': '清除网络标志',
            'params': 1,
            'returns': 'void'
        },
        '00018084de30': {
            'name': 'GetNetworkCharacter',
            'desc': '获取网络字符数据',
            'params': 1,
            'returns': 'char'
        },
        '0001808d7290': {
            'name': 'ValidateNetworkData',
            'desc': '验证网络数据',
            'params': 2,
            'returns': 'int'
        },
        '0001808cf130': {
            'name': 'CloseNetworkConnection',
            'desc': '关闭网络连接',
            'params': 2,
            'returns': 'void'
        },
        '0001808bc370': {
            'name': 'GetNetworkConnectionStatus',
            'desc': '获取网络连接状态',
            'params': 1,
            'returns': 'char'
        },
        '0001808cded0': {
            'name': 'DestroyNetworkHandle',
            'desc': '销毁网络句柄',
            'params': 1,
            'returns': 'void'
        },
        '0001808c16c0': {
            'name': 'InitializeNetworkConnection',
            'desc': '初始化网络连接',
            'params': 3,
            'returns': 'int'
        },
        '000180857b20': {
            'name': 'ReadNetworkChar',
            'desc': '读取网络字符',
            'params': 1,
            'returns': 'char'
        },
        '00018085d7b0': {
            'name': 'PeekNetworkChar',
            'desc': '预览网络字符',
            'params': 1,
            'returns': 'char'
        },
        '0001808c57f0': {
            'name': 'WriteNetworkData',
            'desc': '写入网络数据',
            'params': 2,
            'returns': 'char'
        },
        '0001808577b0': {
            'name': 'FlushNetworkBuffer',
            'desc': '刷新网络缓冲区',
            'params': 1,
            'returns': 'void'
        },
        '0001808b8390': {
            'name': 'SetupNetworkChannel',
            'desc': '设置网络通道',
            'params': 2,
            'returns': 'void'
        },
        '000180853cc0': {
            'name': 'SetNetworkParameter',
            'desc': '设置网络参数',
            'params': 2,
            'returns': 'void'
        },
        '0001808cd390': {
            'name': 'GetNetworkTertiaryStatus',
            'desc': '获取网络第三级状态',
            'params': 2,
            'returns': 'int'
        },
        '0001808cef10': {
            'name': 'SendNetworkEvent',
            'desc': '发送网络事件',
            'params': 2,
            'returns': 'void'
        },
        '000180851e30': {
            'name': 'GetNetworkParameter',
            'desc': '获取网络参数',
            'params': 1,
            'returns': 'float'
        },
        '0001808d57c0': {
            'name': 'FindNetworkConnection',
            'desc': '查找网络连接',
            'params': 2,
            'returns': 'int'
        },
        '000180857b00': {
            'name': 'CheckNetworkBuffer',
            'desc': '检查网络缓冲区',
            'params': 1,
            'returns': 'char'
        },
        '00018084e700': {
            'name': 'SendNetworkError',
            'desc': '发送网络错误',
            'params': 2,
            'returns': 'void'
        },
        '0001808d5fb0': {
            'name': 'GetNetworkError',
            'desc': '获取网络错误',
            'params': 1,
            'returns': 'char'
        },
        '00018084dcc0': {
            'name': 'CalculateNetworkChecksum',
            'desc': '计算网络校验和',
            'params': 2,
            'returns': 'float'
        },
        '000180242600': {
            'name': 'GetNetworkSystemStatus',
            'desc': '获取网络系统状态',
            'params': 0,
            'returns': 'int'
        },
        '000180867200': {
            'name': 'GetNetworkStatusCode',
            'desc': '获取网络状态码',
            'params': 1,
            'returns': 'int'
        },
        '00018084c030': {
            'name': 'GetNetworkStatusObject',
            'desc': '获取网络状态对象',
            'params': 1,
            'returns': 'void*'
        },
        '000180866480': {
            'name': 'ProcessNetworkStatus',
            'desc': '处理网络状态',
            'params': 1,
            'returns': 'int'
        },
        '0001808674c0': {
            'name': 'FlushNetworkOutputBuffer',
            'desc': '刷新网络输出缓冲区',
            'params': 1,
            'returns': 'void'
        },
        '00018088c6e0': {
            'name': 'GetNetworkOperationStatus',
            'desc': '获取网络操作状态',
            'params': 1,
            'returns': 'int'
        },
        '00018085eef0': {
            'name': 'ExecuteNetworkCommand',
            'desc': '执行网络命令',
            'params': 2,
            'returns': 'int'
        },
        '00018088dd50': {
            'name': 'CheckNetworkAvailability',
            'desc': '检查网络可用性',
            'params': 1,
            'returns': 'int'
        },
        '00018088e6f0': {
            'name': 'WaitForNetworkResponse',
            'desc': '等待网络响应',
            'params': 1,
            'returns': 'int'
        },
        '00018088c500': {
            'name': 'CreateNetworkSession',
            'desc': '创建网络会话',
            'params': 2,
            'returns': 'int'
        },
        '000180851e20': {
            'name': 'GetNetworkPrimaryStatus',
            'desc': '获取网络主状态',
            'params': 0,
            'returns': 'int'
        },
        '00018086dc30': {
            'name': 'GetNetworkPointer',
            'desc': '获取网络指针',
            'params': 1,
            'returns': 'void*'
        },
        '000180875460': {
            'name': 'CheckNetworkFlags',
            'desc': '检查网络标志',
            'params': 2,
            'returns': 'char'
        },
        '000180871840': {
            'name': 'InitializeNetworkSecurity',
            'desc': '初始化网络安全',
            'params': 1,
            'returns': 'void'
        },
        '0001808664e0': {
            'name': 'ValidateNetworkHandle',
            'desc': '验证网络句柄',
            'params': 2,
            'returns': 'char'
        },
        '000180867370': {
            'name': 'GetNetworkHandleFlags',
            'desc': '获取网络句柄标志',
            'params': 2,
            'returns': 'int'
        },
        '00018088a120': {
            'name': 'ResetNetworkSystem',
            'desc': '重置网络系统',
            'params': 1,
            'returns': 'void'
        },
        '00018088c570': {
            'name': 'GetNetworkSecondaryStatus',
            'desc': '获取网络次级状态',
            'params': 2,
            'returns': 'int'
        },
        '0001808bad50': {
            'name': 'GetNetworkBufferPointer',
            'desc': '获取网络缓冲区指针',
            'params': 1,
            'returns': 'void*'
        },
        '00018088be40': {
            'name': 'ClearNetworkBuffer',
            'desc': '清除网络缓冲区',
            'params': 1,
            'returns': 'void'
        },
        '0001808db610': {
            'name': 'ProcessNetworkMessage',
            'desc': '处理网络消息',
            'params': 3,
            'returns': 'int'
        },
        '0001808dcac0': {
            'name': 'GetNetworkConnectionInfo',
            'desc': '获取网络连接信息',
            'params': 1,
            'returns': 'char'
        },
        '0001808661c0': {
            'name': 'GetNetworkConnectionType',
            'desc': '获取网络连接类型',
            'params': 1,
            'returns': 'char'
        },
        '0001808661d0': {
            'name': 'IsNetworkConnectionActive',
            'desc': '检查网络连接是否活跃',
            'params': 1,
            'returns': 'char'
        },
        '000180866330': {
            'name': 'InitializeNetworkProtocol',
            'desc': '初始化网络协议',
            'params': 0,
            'returns': 'void'
        },
        '0001808713a0': {
            'name': 'CreateNetworkContext',
            'desc': '创建网络上下文',
            'params': 1,
            'returns': 'int'
        },
        '0001808671f0': {
            'name': 'FinalizeNetworkContext',
            'desc': '完成网络上下文',
            'params': 0,
            'returns': 'void'
        },
        '000180874280': {
            'name': 'SetupNetworkEnvironment',
            'desc': '设置网络环境',
            'params': 1,
            'returns': 'void'
        },
        '0001808da780': {
            'name': 'ProcessNetworkIndex',
            'desc': '处理网络索引',
            'params': 2,
            'returns': 'void'
        },
        '0001808c6590': {
            'name': 'UpdateNetworkFlags',
            'desc': '更新网络标志',
            'params': 2,
            'returns': 'int'
        },
        '00018088e470': {
            'name': 'GetNetworkConnectionState',
            'desc': '获取网络连接状态',
            'params': 1,
            'returns': 'int'
        },
        '0001808676e0': {
            'name': 'ValidateNetworkAddress',
            'desc': '验证网络地址',
            'params': 2,
            'returns': 'int'
        },
        '0001808e2ff0': {
            'name': 'CreateNetworkEndpoint',
            'desc': '创建网络端点',
            'params': 1,
            'returns': 'int'
        },
        '000180866b40': {
            'name': 'ValidateNetworkEndpoint',
            'desc': '验证网络端点',
            'params': 2,
            'returns': 'int'
        },
        '000180866440': {
            'name': 'SendNetworkDataPacket',
            'desc': '发送网络数据包',
            'params': 4,
            'returns': 'int'
        },
        '0001808e0070': {
            'name': 'GetNetworkAdvancedStatus',
            'desc': '获取网络高级状态',
            'params': 1,
            'returns': 'int'
        },
        '0001808e0080': {
            'name': 'GetNetworkDetailedStatus',
            'desc': '获取网络详细状态',
            'params': 1,
            'returns': 'int'
        },
        '0001808ded80': {
            'name': 'InitializeNetworkStream',
            'desc': '初始化网络流',
            'params': 2,
            'returns': 'void'
        },
        '0001808e3470': {
            'name': 'GetNetworkStreamInfo',
            'desc': '获取网络流信息',
            'params': 2,
            'returns': 'int'
        },
        '0001808e3b80': {
            'name': 'CloseNetworkStream',
            'desc': '关闭网络流',
            'params': 1,
            'returns': 'void'
        },
        '0001808e57e0': {
            'name': 'ValidateNetworkStream',
            'desc': '验证网络流',
            'params': 2,
            'returns': 'int'
        },
        '0001808967b0': {
            'name': 'ProcessNetworkSecurity',
            'desc': '处理网络安全',
            'params': 3,
            'returns': 'int'
        }
    }
    
    # 生成替换映射表
    print("=== 网络函数美化替换映射表 ===\n")
    
    # 按功能分类
    categories = {
        'Connection': ['connection', 'handle', 'endpoint'],
        'Data': ['data', 'packet', 'buffer', 'stream'],
        'Status': ['status', 'state', 'error', 'validation'],
        'Operation': ['operation', 'command', 'process', 'execute'],
        'Configuration': ['config', 'setup', 'init', 'parameter'],
        'Security': ['security', 'flags', 'check']
    }
    
    for category, keywords in categories.items():
        print(f"## {category} 相关函数")
        print("-" * 50)
        
        found = False
        for addr, mapping in function_mapping.items():
            func_name = f'func_0x{addr}'
            if func_name in [f'func_0x{addr}' for addr in func_counts.keys()]:
                if any(keyword in mapping['name'].lower() for keyword in keywords):
                    found = True
                    print(f"原函数名: {func_name}")
                    print(f"建议名称: {mapping['name']}")
                    print(f"功能描述: {mapping['desc']}")
                    print(f"参数数量: {mapping['params']}")
                    print(f"返回类型: {mapping['returns']}")
                    print(f"调用次数: {func_counts.get(addr, 0)}")
                    print()
        
        if not found:
            print("该分类下暂无函数")
            print()
    
    # 生成替换脚本
    print("=== 替换脚本 ===")
    print("#!/bin/bash")
    print("cd /dev/shm/mountblade-code/TaleWorlds.Native/src")
    print("cp 05_networking.c 05_networking.c.backup")
    print()
    
    for addr, mapping in function_mapping.items():
        func_name = f'func_0x{addr}'
        if func_name in [f'func_0x{addr}' for addr in func_counts.keys()]:
            old_name = func_name
            new_name = mapping['name']
            print(f"sed -i 's/{old_name}/{new_name}/g' 05_networking.c")
    
    print()
    print("echo '函数替换完成'")
    print("echo '请检查替换结果并编译测试'")
    
    return function_mapping

if __name__ == "__main__":
    analyze_functions()