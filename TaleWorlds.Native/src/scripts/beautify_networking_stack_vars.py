#!/usr/bin/env python3
"""
批量重命名网络栈变量
将像 uStack_XX, lStack_XX, iStack_XX 这样的栈变量名重命名为更有意义的名称
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_stack_variables(content):
    """美化栈变量名"""
    
    # 栈变量映射表
    stack_var_mappings = {
        # 通用栈变量
        'uStack_68': 'NetworkContextData',
        'uStack_60': 'NetworkConnectionData',
        'uStack_5c': 'NetworkPacketData',
        'uStack_5c': 'NetworkValidationData',
        'uStack_68': 'NetworkContextPrimary',
        'uStack_60': 'NetworkContextSecondary',
        'uStack_5c': 'NetworkContextTertiary',
        
        # 长整型栈变量
        'lStack_10': 'NetworkPacketPointer',
        'lStack_2a8': 'NetworkConnectionDataPointer',
        'lStack_e0': 'NetworkContextDataPointer',
        'lStack_f8': 'NetworkBufferPointer',
        'lStack_10': 'NetworkPacketHandle',
        
        # 整型栈变量
        'iStack_7c': 'NetworkConnectionFlags',
        '_iStack0000000000000078': 'NetworkValidationResult',
        
        # 浮点型栈变量
        'fStackX_24': 'NetworkFloatValueX',
        'fStackX_20': 'NetworkFloatValueY',
        'fStackX_10': 'NetworkFloatValueZ',
        'dStackX_10': 'NetworkDoubleValue',
        
        # 数组型栈变量
        'alStackX_10': 'NetworkDataArray',
        'aiStackX_8': 'NetworkIndexArray',
        'aiStackX_18': 'NetworkParameterArray',
        'aiStack_68': 'NetworkStatusArray',
        'aiStack_90': 'NetworkBufferArray',
        'aiStack_70': 'NetworkValidationArray',
        'aiStack_d8': 'NetworkConnectionArray',
        'afStackX_8': 'NetworkFloatArray',
        'adStack_38': 'NetworkDoubleArray',
        'abStack_18': 'NetworkByteArray',
        'abStackX_8': 'NetworkFlagArray',
        'acStack_153': 'NetworkCharArray',
        'acStackX_8': 'NetworkCharBuffer',
        'acStackX_18': 'NetworkCharData',
        'auStack_338': 'NetworkByteLargeArray',
        'auStack_298': 'NetworkHandleArray',
        'auStack_278': 'NetworkPacketArray',
        'auStack_e8': 'NetworkByteSmallArray',
        'auStack_d8': 'NetworkWordArray',
        'auStack_b0': 'NetworkDwordArray',
        'auStack_2e8': 'NetworkByteExtraArray',
        'auStack_2a8': 'NetworkPacketLargeArray',
        
        # 复杂栈变量
        'pppppppuStack_a8': 'NetworkComplexPointer',
        'pppppuStack_60': 'NetworkDataPointer',
        'ppppacketDataPointer58': 'NetworkPacketPointer'
    }
    
    # 应用替换
    for old_name, new_name in stack_var_mappings.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def beautify_parameter_variables(content):
    """美化参数变量名"""
    
    param_mappings = {
        'in_RAX': 'NetworkContextRegister',
        'in_R10': 'NetworkDataRegister',
        'in_EAX': 'NetworkIndexRegister',
        'extraout_XMM0_Qa_03': 'NetworkFloatParameter1',
        'extraout_XMM0_Qa_04': 'NetworkFloatParameter2',
        'CONCAT44': 'NetworkValueCombine'
    }
    
    for old_name, new_name in param_mappings.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def beautify_function_pointers(content):
    """美化函数指针"""
    
    func_ptr_mappings = {
        'func_0x0001808d7290': 'ValidateNetworkContext',
        'func_0x0001808cf130': 'ReleaseNetworkResourceHandle',
        'func_0x0001808cded0': 'FreeNetworkConnection',
        'func_0x0001808c16c0': 'InitializeNetworkConnection',
        'func_0x00018085d7b0': 'GetNetworkByteStatus',
        'func_0x0001808c57f0': 'ProcessNetworkByteData',
        'func_0x000180853cc0': 'SetNetworkFloatParameter',
        'func_0x0001808b8390': 'ProcessNetworkContext',
        'func_0x00018084e700': 'HandleNetworkPool',
        'func_0x0001808d5fb0': 'GetNetworkOperationStatus',
        'func_0x00018084dcc0': 'CalculateNetworkFloat',
        'func_0x000180242600': 'GetNetworkTimestamp',
        'func_0x000180867200': 'GetNetworkStatusValue',
        'func_0x00018084c030': 'GetNetworkContextPointer',
        'func_0x000180866480': 'ProcessNetworkStatus',
        'func_0x0001808cef10': 'CleanupNetworkPacket'
    }
    
    for old_name, new_name in func_ptr_mappings.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python beautify_networking_stack_vars.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化栈变量
    content = beautify_stack_variables(content)
    
    # 美化参数变量
    content = beautify_parameter_variables(content)
    
    # 美化函数指针
    content = beautify_function_pointers(content)
    
    # 写回文件
    write_file(file_path, content)
    
    print(f"Successfully beautified stack variables in {file_path}")

if __name__ == "__main__":
    main()