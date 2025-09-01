#!/usr/bin/env python3
"""
美化00_data_definitions.h文件中的变量名
将DAT_地址格式的变量名替换为语义化的名称
"""

import re
import sys

def beautify_data_definitions():
    """美化数据定义文件中的变量名"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射
    variable_mappings = {
        # 字符串缓冲区相关
        'DAT_180bf8270': 'SystemStringBufferPrimary',
        'DAT_180bf82c8': 'SystemStringBufferSecondary',
        'DAT_180bf8320': 'SystemStringBufferTertiary',
        'DAT_180bf8378': 'SystemStringBufferQuaternary',
        'DAT_180bf83d0': 'SystemStringBufferQuinary',
        'DAT_180bf8428': 'SystemStringBufferSenary',
        'DAT_180bf8480': 'SystemStringBufferSeptenary',
        'DAT_180bf84d8': 'SystemStringBufferOctonary',
        'DAT_180bf8530': 'SystemStringBufferNonary',
        'DAT_180bf8588': 'SystemStringBufferDenary',
        
        # 配置缓冲区相关
        'DAT_180bf90c8': 'SystemConfigBufferPrimary',
        'DAT_180bf91c8': 'SystemConfigBufferSecondary',
        'DAT_180bf9408': 'SystemConfigBufferTertiary',
        'DAT_180bf9768': 'SystemConfigBufferQuaternary',
        'DAT_180bf97c8': 'SystemConfigBufferQuinary',
        'DAT_180bf9828': 'SystemConfigBufferSenary',
        'DAT_180bf9888': 'SystemConfigBufferSeptenary',
        'DAT_180bf99a8': 'SystemConfigBufferOctonary',
        'DAT_180bf9a08': 'SystemConfigBufferNonary',
        'DAT_180bf9a68': 'SystemConfigBufferDenary',
        
        # 内存配置相关
        'DAT_180bfa400': 'SystemMemoryConfigBufferPrimary',
        'DAT_180bfa498': 'SystemMemoryConfigBufferSecondary',
        'DAT_180bfa530': 'SystemMemoryConfigBufferTertiary',
        'DAT_180bfa5c8': 'SystemMemoryConfigBufferQuaternary',
        'DAT_180bfa660': 'SystemMemoryConfigBufferQuinary',
        'DAT_180bfa6f8': 'SystemMemoryConfigBufferSenary',
        'DAT_180bfa798': 'SystemMemoryConfigBufferSeptenary',
        'DAT_180bfa830': 'SystemMemoryConfigBufferOctonary',
        'DAT_180bfa8c8': 'SystemMemoryConfigBufferNonary',
        'DAT_180bfa960': 'SystemMemoryConfigBufferDenary',
        
        # 特殊缓冲区
        'DAT_180c92068': 'SystemMemoryPoolBuffer',
        'DAT_180bfaf08': 'SystemExtendedMemoryBuffer',
        'DAT_180bfb328': 'SystemNetworkMemoryBuffer',
        'DAT_180bfb748': 'SystemGameMemoryBuffer',
        
        # 地址指针
        '_DAT_180bf8258': 'SystemStringDataPointerPrimary',
        '_DAT_180bf82b0': 'SystemStringDataPointerSecondary',
        '_DAT_180bf8308': 'SystemStringDataPointerTertiary',
        '_DAT_180bf8360': 'SystemStringDataPointerQuaternary',
        '_DAT_180bf83b8': 'SystemStringDataPointerQuinary',
        '_DAT_180bf8410': 'SystemStringDataPointerSenary',
        '_DAT_180bf8468': 'SystemStringDataPointerSeptenary',
        '_DAT_180bf84c0': 'SystemStringDataPointerOctonary',
        '_DAT_180bf8518': 'SystemStringDataPointerNonary',
        '_DAT_180bf8570': 'SystemStringDataPointerDenary',
        
        # 网络相关
        '_DAT_180bf93f0': 'NetworkConfigDataPointer',
        '_DAT_180bf9750': 'NetworkBufferPointer',
        '_DAT_180bf97b0': 'NetworkStreamPointer',
        '_DAT_180bf9810': 'NetworkConnectionPointer',
        '_DAT_180bf9870': 'NetworkProtocolPointer',
        
        # 系统模块相关
        '_DAT_180bf98d0': 'SystemModuleAPointer',
        '_DAT_180bf9930': 'SystemModuleBPointer',
        '_DAT_180bf9990': 'SystemModuleCPointer',
        '_DAT_180bf99f0': 'SystemModuleDPointer',
        '_DAT_180bf9a50': 'SystemModuleEPointer',
        
        # 其他重要变量
        'DAT_18098bc73': 'SystemConstantStringPrimary',
        'UNK_180a0cc48': 'SystemConstantStringSecondary',
        'UNK_180a0cc08': 'SystemConstantStringTertiary',
        'UNK_180a0cc10': 'SystemConstantStringQuaternary',
        'UNK_180a0cca0': 'SystemConstantStringQuinary',
        'UNK_180a0ccb8': 'SystemConstantStringSenary',
        'UNK_180a0cc68': 'SystemConstantStringSeptenary',
        'UNK_180a0cc88': 'SystemConstantStringOctonary',
        'UNK_180a0cd08': 'SystemConstantStringNonary',
        'UNK_180a0cd28': 'SystemConstantStringDenary',
    }
    
    # 执行替换
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只匹配完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已完成 {len(variable_mappings)} 个变量名的美化")

if __name__ == '__main__':
    beautify_data_definitions()