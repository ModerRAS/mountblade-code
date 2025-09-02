#!/usr/bin/env python3
"""
网络系统代码美化脚本
用于批量重命名05_networking.c文件中的变量名
"""

import re
import sys

def beautify_networking_variables():
    """美化网络系统中的变量名"""
    
    # 读取原始文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射
    variable_mappings = {
        # 栈参数缓冲区
        'StackParameterBuffer40': 'ConnectionStackBuffer40',
        'StackParameterBuffer48': 'ConnectionStackBuffer48', 
        'StackParameterBuffer50': 'ConnectionStackBuffer50',
        'StackParameterBuffer68': 'ConnectionStackBuffer68',
        'StackParameterBuffer88': 'ConnectionStackBuffer88',
        'StackParameterBuffer98': 'SecurityGuardBuffer98',
        'StackParameterBufferA0': 'SecurityGuardBufferA0',
        
        # 网络栈缓冲区
        'NetworkStackBuffer40': 'NetworkConnectionBuffer40',
        'NetworkStackBuffer': 'NetworkConnectionBuffer',
        
        # 状态标志
        'QuaternaryStatusFlag': 'NetworkQuaternaryStatus',
        'QuinaryStatusFlag': 'NetworkQuinaryStatus',
        
        # 操作结果指针
        'OperationResultPointer': 'NetworkOperationResult',
        
        # 网络上下文相关
        'plStack0000000000000088': 'NetworkContextStack88',
        'pnetworkContext': 'NetworkContextArray',
        'pConnectionHandle': 'ConnectionHandlePointer',
        
        # 其他栈变量
        'uStack000000000000003c': 'NetworkStackVar3c',
        'uStack0000000000000034': 'NetworkStackVar34',
        'uStack0000000000000030': 'NetworkStackVar30',
        'uStack0000000000000054': 'NetworkStackVar54',
        
        # 网络值
        'NetworkStackValue64': 'NetworkContextValue64',
        'NetworkStackValue44': 'NetworkContextValue44',
        
        # 网络偏移
        'networkOffset24': 'NetworkContextOffset24',
        
        # 操作状态
        'OperationPrimaryStatus': 'NetworkOperationStatus',
        'OperationPrimaryStatus1': 'NetworkOperationStatus1',
        'OperationStatus': 'NetworkProcessingStatus',
        
        # 数据指针
        'DataPointer': 'NetworkDataPointer',
        
        # 处理状态
        'ProcessingStatus': 'NetworkProcessingStatus',
        
        # 网络输入参数
        'NetworkInputParameter': 'NetworkInputData',
        
        # 连接状态
        'ConnectionStateBuffer': 'NetworkStateBuffer',
        'ConnectionStateFlags': 'NetworkStateFlags',
        'ConnectionStatePointer': 'NetworkStatePointer',
        
        # 包数据
        'PacketData': 'NetworkPacketData',
        'ConnectionData': 'NetworkConnectionData',
        'ContextData': 'NetworkContextData',
        'ContextArrayInitial': 'NetworkContextInitial',
        
        # 网络句柄
        'stackSecondaryNetworkHandle': 'SecondaryNetworkHandle',
        
        # 连接句柄状态
        'ConnectionHandleStatus': 'NetworkHandleStatus',
        
        # 网络子网模板
        'NetworkSubnetTemplate': 'NetworkSubnetMaskTemplate',
        
        # 安全相关
        'SecurityGuardCleanup': 'SecurityGuardCleanupFunction',
    }
    
    # 应用替换
    original_content = content
    for old_name, new_name in variable_mappings.items():
        # 使用词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        
        # 检查是否有替换发生
        if content != original_content:
            print(f"替换: {old_name} -> {new_name}")
            original_content = content
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("网络系统变量美化完成")

if __name__ == "__main__":
    beautify_networking_variables()