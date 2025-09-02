#!/usr/bin/env python3
"""
美化00_data_definitions.h文件中的函数名
将所有FUN_180xxxxxx形式的函数名替换为有意义的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def create_function_mapping():
    """创建函数名映射表"""
    return {
        # 系统初始化相关
        'FUN_18005e110': 'ProcessSystemMemoryPage',
        'FUN_1800466d0': 'ReleaseSystemResource',
        'FUN_1801ab660': 'InitializeSystemMemoryBuffer',
        'FUN_180046190': 'WriteDataToBuffer',
        'FUN_1801b9a40': 'InitializeSystemMemoryAllocator',
        'FUN_180075ff0': 'InitializeSystemData',
        'FUN_180077750': 'ValidateSystemConfiguration',
        'FUN_180624a00': 'GetSystemStatusFlags',
        'FUN_18062c5f0': 'ConfigureSystemData',
        'FUN_180179aa0': 'ReleaseSystemResources',
        'FUN_1800588c0': 'InitializeSystemBuffer',
        'FUN_18005d580': 'UpdateSystemData',
        'FUN_18004b790': 'ProcessSystemOperation',
        'FUN_1801ebff0': 'ExecuteSystemCommand',
        'FUN_1801ec160': 'HandleSystemEvent',
        'FUN_1801ec300': 'FinalizeSystemOperation',
        'FUN_18034dd30': 'AllocateSystemMemory',
        'FUN_1804055e0': 'FreeSystemMemory',
        'FUN_180068a90': 'ValidateSystemParameters',
        'FUN_180060680': 'ProcessSystemString',
        'FUN_1802a41e0': 'InitializeModuleSystem',
        'FUN_1802a4590': 'ConfigureModuleParameters',
        'FUN_1802a1fb0': 'ValidateModuleConfiguration',
        'FUN_1802a4e60': 'ProcessModuleInitialization',
        'FUN_1802a2ab0': 'StartModuleExecution',
        'FUN_1802a2d10': 'ExecuteModuleTask',
        'FUN_1802a2420': 'ProcessModuleData',
        'FUN_1802a21d0': 'InitializeModuleContext',
        'FUN_1804300b0': 'ProcessModuleOperation',
        'FUN_180062300': 'UpdateModuleStatus',
        'FUN_1802a9200': 'GetModuleInformation',
        'FUN_1801ec3f0': 'CleanupModuleResources',
        'FUN_18023a940': 'InitializeSystemComponents',
        'FUN_180225ee0': 'StartSystemServices',
        'FUN_1808fc820': 'RegisterSystemService',
        'FUN_1808fcb30': 'ConfigureSystemService',
        'FUN_1808fcb90': 'ValidateSystemService',
        'FUN_180328540': 'ProcessSystemMessage',
        'FUN_1800b4a00': 'InitializeNetworkSystem',
        'FUN_1800bf6c0': 'CreateNetworkConnection',
        'FUN_1800763c0': 'ConfigureNetworkConnection',
        'FUN_180076910': 'ValidateNetworkConnection',
        'FUN_1802f5f70': 'ProcessNetworkRequest',
        'FUN_18033b220': 'HandleNetworkData',
        'FUN_1801a35b0': 'ProcessNetworkResponse',
        'FUN_18033b3a0': 'GetNetworkStatus',
        'FUN_18033bc80': 'UpdateNetworkConfiguration',
        'FUN_180327540': 'InitializeNetworkProtocol',
        'FUN_180941dd0': 'GetNetworkProtocolHandler',
        'FUN_180320c80': 'StartNetworkService',
        'FUN_180941e00': 'GetNetworkServiceHandler',
        'FUN_1808fcb90': 'ValidateNetworkService',
        'FUN_180320e20': 'StopNetworkService',
        'FUN_180339110': 'CreateNetworkSocket',
        'FUN_180339920': 'ConfigureNetworkSocket',
        'FUN_180320470': 'BindNetworkSocket',
        'FUN_180339cf0': 'ListenNetworkSocket',
        'FUN_18033a090': 'AcceptNetworkConnection',
        'FUN_180339db0': 'CloseNetworkSocket',
        'FUN_18032bd90': 'ProcessNetworkDataPacket',
        'FUN_18032ba60': 'ValidateNetworkDataPacket',
        'FUN_1803296c0': 'HandleNetworkDataPacket',
        'FUN_18032bea0': 'ProcessNetworkCommand',
        'FUN_180329910': 'ExecuteNetworkCommand',
        'FUN_18032bfc0': 'SendNetworkData',
        'FUN_18032b880': 'ValidateNetworkData',
        'FUN_18045d840': 'CreateNetworkMutex',
        'FUN_1800ba4b0': 'InitializeNetworkMutex',
        'FUN_18045d8e0': 'LockNetworkMutex',
        'FUN_18045d980': 'UnlockNetworkMutex',
        'FUN_18005e300': 'ProcessNetworkThread',
        'FUN_18055e020': 'InitializeNetworkThread',
        'FUN_1804aa090': 'StartNetworkThread',
        'FUN_1804b9ce0': 'StopNetworkThread',
        'FUN_1808fc838': 'RegisterNetworkCallback',
        'FUN_1804ce100': 'GetNetworkCallbackHandler',
        'FUN_1804ce510': 'ExecuteNetworkCallback',
        'FUN_1804ce1c0': 'ProcessNetworkEvent',
        'FUN_1804ce040': 'HandleNetworkEvent',
        'FUN_1804ca960': 'CleanupNetworkResources',
        'FUN_18005e1d0': 'GetNetworkInformation',
        'FUN_18022a890': 'ProcessNetworkBuffer',
        'FUN_1801c0fb0': 'InitializeNetworkBuffer',
        'FUN_180285b40': 'ProcessNetworkBufferData',
        'FUN_1806090b0': 'ValidateNetworkConfiguration',
        'FUN_180629850': 'CheckNetworkStatus',
        'FUN_180627b90': 'CleanupNetworkConfiguration',
        'FUN_18064fe90': 'GetNetworkConfigurationHandler',
        'FUN_180650050': 'InitializeNetworkConfiguration',
        'FUN_1806500b0': 'LoadNetworkConfiguration',
        'FUN_180650490': 'SaveNetworkConfiguration',
        'FUN_1806502e0': 'UpdateNetworkConfiguration',
        'FUN_18064fcc0': 'FinalizeNetworkConfiguration',
        'FUN_18062f1f0': 'ProcessNetworkRequestData',
        'FUN_180627340': 'ValidateNetworkRequest',
        'FUN_180626ee0': 'InitializeNetworkRequest',
        'FUN_180631420': 'HandleNetworkRequest',
        'FUN_180631780': 'ProcessNetworkResponseData',
        'FUN_180627ce0': 'CreateNetworkResponse',
        'FUN_180632160': 'SendNetworkResponse',
        'FUN_180057110': 'FinalizeNetworkRequest',
        'FUN_180627c50': 'ProcessNetworkMessage',
        'FUN_180059820': 'HandleNetworkMessage',
        'FUN_18005d4b0': 'CreateNetworkMessage',
        'FUN_1800a02a0': 'InitializeSystemMemory',
        'FUN_18010cbc0': 'ProcessSystemMemoryData',
        'FUN_1802c0460': 'AllocateSystemMemoryBlock',
        'FUN_18064e2a0': 'GetSystemMemoryStatus',
        'FUN_18064e0d0': 'ValidateSystemMemory',
        'FUN_1806470a0': 'InitializeSystemMemoryPool',
        'FUN_1806478d0': 'ConfigureSystemMemoryPool',
        'FUN_18062b680': 'ProcessSystemMemoryOperation',
        'FUN_18064d630': 'GetSystemMemoryInformation',
        'FUN_1801a9fd0': 'InitializeGraphicsSystem',
        'FUN_1801aa0f0': 'ConfigureGraphicsSystem',
        'FUN_180635b80': 'ProcessGraphicsOperation',
        'FUN_180633110': 'ExecuteGraphicsCommand',
        'FUN_180742250': 'RenderGraphicsFrame',
        'FUN_18076a440': 'InitializeGraphicsDevice',
        'FUN_180769ed0': 'ConfigureGraphicsDevice',
        'FUN_1808156f0': 'StartGraphicsRendering',
        'FUN_180815080': 'StopGraphicsRendering',
        'FUN_180769ed0': 'ValidateGraphicsDevice',
    }

def beautify_functions(content):
    """美化函数名"""
    mapping = create_function_mapping()
    
    # 替换函数定义
    for old_name, new_name in mapping.items():
        # 替换函数调用
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("用法: python beautify_00_data_definitions.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        sys.exit(1)
    
    # 美化函数名
    beautified_content = beautify_functions(content)
    
    # 写入文件
    if write_file(file_path, beautified_content):
        print(f"文件 {file_path} 美化完成")
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()