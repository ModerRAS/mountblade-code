#!/usr/bin/env python3
"""
批量重命名网络模块中的UNK变量
根据变量在代码中的使用上下文来推断其含义并重命名
"""

import re
import sys

def replace_function_names():
    """替换05_networking.c中的函数名"""
    
    # 定义函数名映射
    function_mappings = {
        'func_0x0001808757f0': 'HandleNetworkPrimaryTransfer',
        'func_0x0001808d2620': 'ProcessNetworkTransferOperation',
        'func_0x0001808d2660': 'ProcessNetworkTransferValidation',
        'func_0x0001808c8710': 'GetNetworkSessionPrimaryStatus',
        'func_0x0001808c8700': 'GetNetworkSessionSecondaryStatus',
        'func_0x0001808c8470': 'GetNetworkSessionTertiaryStatus',
        'func_0x0001808c7d30': 'ValidateNetworkConnectionHandle',
        'func_0x000180867680': 'InitializeNetworkTimeoutContext',
        'func_0x000180867960': 'ProcessNetworkTimeoutOperation',
        'func_0x0001808c2130': 'ValidateNetworkHandleStatus',
        'func_0x00018088aed0': 'ProcessNetworkPacketCompletion',
        'func_0x0001808d2830': 'ExecuteNetworkTransferFinalization',
        'func_0x00018085eef0': 'ProcessNetworkDataBuffer',
        'func_0x0001808e64b0': 'ProcessNetworkHandleOperation'
    }
    
    return function_mappings

def replace_unk_variables():
    """替换05_networking.c中的UNK变量"""
    
    # 定义替换规则 - 根据上下文推断变量含义
    replacements = {
        # 安全验证相关的变量
        '&UNK_1809581bc': '&NetworkSecurityValidationContext',
        '&UNK_180986268': '&NetworkSecurityValidationBuffer',
        '&UNK_180a02954': '&NetworkSecurityValidationConfig',
        '&UNK_180a06418': '&NetworkConnectionValidationConfigA',
        '&UNK_180a06420': '&NetworkConnectionValidationConfigB',
        
        # 网络连接请求处理相关的变量
        '&UNK_1809862d0': '&NetworkConnectionRequestBuffer',
        '&UNK_180986298': '&NetworkBufferProcessingConfigA',
        '&UNK_180984010': '&NetworkBufferProcessingConfigB',
        '&UNK_180982240': '&NetworkBufferProcessingConfigC',
        
        # 网络栈和缓冲区变量
        '&UNK_180983588': '&NetworkStackBufferA',
        '&UNK_180984358': '&NetworkStackValidationBufferA',
        '&UNK_1809843d0': '&NetworkStackValidationBufferB',
        '&UNK_1809841e0': '&NetworkStackBufferB',
        
        # 连接上下文变量
        '&UNK_180986350': '&NetworkConnectionContextA',
        '&UNK_180986370': '&NetworkConnectionContextB',
        
        # 网络操作状态变量
        '&UNK_1809868b0': '&NetworkOperationConfigBuffer',
        '&UNK_1809863f8': '&NetworkOperationSecondaryConfig',
        '&UNK_180986470': '&NetworkOperationTertiaryConfig',
        
        # 堆栈和参数缓冲区变量
        '&UNK_180982608': '&NetworkStackParameterBufferA',
        '&UNK_180982588': '&NetworkStackParameterBufferB',
        '&UNK_1809830b8': '&NetworkStackDataBufferA',
        '&UNK_180983238': '&NetworkStackDataBufferB',
        
        # 网络连接句柄和偏移量变量
        '&UNK_1809832b8': '&NetworkConnectionHandleBuffer',
        '&UNK_1809839d8': '&NetworkConnectionOffsetBuffer',
        
        # 网络安全上下文变量
        '&UNK_180982f38': '&NetworkSecurityContextBuffer',
        '&UNK_1809834f8': '&NetworkSecurityContextDataA',
        '&UNK_180986408': '&NetworkSecurityContextDataB',
        
        # 网络状态和处理变量
        '&UNK_1809864dc': '&NetworkStatusProcessingBufferA',
        '&UNK_1809864e0': '&NetworkStatusProcessingBufferB',
        '&UNK_180986508': '&NetworkStatusProcessingBufferC',
        '&UNK_180986550': '&NetworkStatusProcessingBufferD',
        '&UNK_180986590': '&NetworkStatusProcessingBufferE',
        '&UNK_1809865f0': '&NetworkStatusProcessingBufferF',
        '&UNK_1809866c0': '&NetworkStatusProcessingBufferG',
        '&UNK_180986730': '&NetworkStatusProcessingBufferH',
        '&UNK_1809867b0': '&NetworkStatusProcessingBufferI',
        '&UNK_180986850': '&NetworkStatusProcessingBufferJ',
        '&UNK_180986488': '&NetworkStatusProcessingBufferK',
        '&UNK_1809864b0': '&NetworkStatusProcessingBufferL',
        
        # 其他缓冲区变量
        '&UNK_180982378': '&NetworkGeneralBufferA',
        '&UNK_180986390': '&NetworkGeneralBufferB',
        '&UNK_1809869a0': '&NetworkConnectionDataBuffer',
        '&UNK_180986940': '&NetworkProcessingStatusBuffer',
        '&UNK_180986e70': '&NetworkContextDataBuffer'
    }
    
    # 读取文件
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 执行替换
        for old_name, new_name in replacements.items():
            content = content.replace(old_name, new_name)
        
        # 检查是否有变化
        if content != original_content:
            with open(input_file, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"成功替换了 {len(replacements)} 个UNK变量")
            return True
        else:
            print("没有找到需要替换的UNK变量")
            return False
            
    except Exception as e:
        print(f"处理文件时出错: {e}")
        return False

def batch_replace_function_names():
    """批量替换函数名"""
    
    function_mappings = replace_function_names()
    
    # 读取文件
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        replacement_count = 0
        
        # 执行替换
        for old_func, new_func in function_mappings.items():
            old_count = content.count(old_func)
            if old_count > 0:
                content = content.replace(old_func, new_func)
                replacement_count += old_count
                print(f"替换完成: {old_func} -> {new_func} (替换了 {old_count} 处)")
        
        # 检查是否有变化
        if content != original_content:
            with open(input_file, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"\n总共替换了 {replacement_count} 处函数名")
            return replacement_count
        else:
            print("没有找到需要替换的函数名")
            return 0
            
    except Exception as e:
        print(f"处理文件时出错: {e}")
        return False

if __name__ == "__main__":
    # 执行函数名替换
    result = batch_replace_function_names()
    if result:
        print(f"函数名替换完成，共替换了 {result} 处")