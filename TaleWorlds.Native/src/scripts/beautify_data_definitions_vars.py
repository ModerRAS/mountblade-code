#!/usr/bin/env python3
"""
美化00_data_definitions.h文件中的变量名
将逆向工程生成的变量名替换为语义化名称
"""

import re

def beautify_variables():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量替换映射
    replacements = {
        # 栈变量
        r'\bpStackCounter4\b': 'StackBufferPointer',
        r'\blStack_28\b': 'StackBufferLong',
        r'\biStack_20\b': 'StackBufferInteger',
        
        # 循环计数器
        r'\bLoopCounter\b': 'IterationCounter',
        r'\bLongCounter\b': 'LongIterationCounter',
        r'\bIntegerCounter\b': 'IntegerIterationCounter',
        r'\bLongLoop\b': 'LongIterationIndex',
        
        # 网络相关
        r'\bpNetworkRequestResult\b': 'NetworkResponseData',
        r'\bNetworkRequestStringLogin\b': 'NetworkLoginRequestString',
        r'\bNetworkRequestStringAuth\b': 'NetworkAuthRequestString',
        r'\bNetworkRequestStringConnect\b': 'NetworkConnectRequestString',
        r'\bNetworkRequestStringVerify\b': 'NetworkVerifyRequestString',
        r'\bNetworkRequestStringValidate\b': 'NetworkValidateRequestString',
        r'\bNetworkRequestStringDisconnect\b': 'NetworkDisconnectRequestString',
        r'\bNetworkRequestResultSuccess\b': 'NetworkSuccessResponse',
        
        # 参数
        r'\bparam_1\b': 'FirstParameter',
        r'\bparam_2\b': 'SecondParameter',
        r'\bparam_3\b': 'ThirdParameter',
        r'\bparam_4\b': 'FourthParameter',
        
        # 字符串长度
        r'\bstringLength\b': 'StringLength',
    }
    
    # 执行替换
    for pattern, replacement in replacements.items():
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_variables()