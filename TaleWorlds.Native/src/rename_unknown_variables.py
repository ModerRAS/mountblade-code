#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量重命名00_data_definitions.h文件中的未知变量名
将UnknownDataPointer重命名为更具语义的名称
"""

import re

def rename_unknown_variables():
    """重命名未知变量名"""
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换系统引擎内部数据指针
    content = re.sub(
        r'UnknownDataPointer180a22d68',
        'SystemEngineInternalDataPointer180a22d68',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22e40',
        'SystemEngineInternalDataPointer180a22e40',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22e20',
        'SystemEngineInternalDataPointer180a22e20',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22df8',
        'SystemEngineInternalDataPointer180a22df8',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22dd0',
        'SystemEngineInternalDataPointer180a22dd0',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22eb0',
        'SystemEngineInternalDataPointer180a22eb0',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22e90',
        'SystemEngineInternalDataPointer180a22e90',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22e70',
        'SystemEngineInternalDataPointer180a22e70',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22e58',
        'SystemEngineInternalDataPointer180a22e58',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22f28',
        'SystemEngineInternalDataPointer180a22f28',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22f10',
        'SystemEngineInternalDataPointer180a22f10',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22ef8',
        'SystemEngineInternalDataPointer180a22ef8',
        content
    )
    content = re.sub(
        r'UnknownDataPointer180a22ed8',
        'SystemEngineInternalDataPointer180a22ed8',
        content
    )
    
    # 替换系统模块数据指针
    module_pointers = [
        '180a0f5b8', '180a0f190', '180a0f168', '180a0f188', '180a0f178',
        '180a24c50', '180a24c60', '180a24bd0', '180a24bf0', '180a24c10',
        '180a24c30', '180a24d58', '180a24d80', '180a24da8', '180a24dc0',
        '180a27a58', '180a27a6c', '180a27a70', '180a01300', '180a01330'
    ]
    
    for addr in module_pointers:
        content = re.sub(
            f'UnknownDataPointer{addr}',
            f'SystemModuleDataPointer{addr}',
            content
        )
    
    # 替换系统配置数据指针
    config_pointers = [
        '1809fd1a0', '1809fd1b0', '1809fd1c0', '1809fd1d8', '1809fd1f0',
        '1809fd208', '1809fd220', '1809fd238', '1809fd250', '1809fd260',
        '1809fd270', '1809fd288', '1809fd298', '1809fd2a8', '1809fd2c0',
        '1809fd318', '1809fd328', '1809fd340', '1809fd350', '1809fd368',
        '1809fd380', '1809fd398', '1809fd3f0', '1809fd4b8', '1809fd3c8',
        '1809fd8c0', '1809fdfc0', '1809fd950', '1809fd970', '1809fd980',
        '180a0ad28', '1809fe1b0', '1809fe1c8', '1809fe1d8', '1809fc7b8',
        '180a04910'
    ]
    
    for addr in config_pointers:
        content = re.sub(
            f'UnknownDataPointer{addr}',
            f'SystemConfigDataPointer{addr}',
            content
        )
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名重命名完成")

if __name__ == '__main__':
    rename_unknown_variables()