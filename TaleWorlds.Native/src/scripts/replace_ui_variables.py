#!/usr/bin/env python3
"""
批量替换04_ui_system.c文件中的变量名
"""

def replace_variables():
    """替换变量名"""
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换所有UISystemUnknownDataPointer为UISystemHexDataBuffer
    import re
    content = re.sub(r'UISystemUnknownDataPointer([0-9A-Fa-f]+)', r'UISystemHexDataBuffer\1', content)
    
    # 替换undefined变量
    replacements = {
        'undefined* defaultDataSource': 'UIConfigurationData* DefaultDataSource',
        'undefined* configurationSource': 'UIConfigurationData* ConfigurationSource', 
        'undefined* dataItemPointer': 'UIDataItem* DataItemPointer',
        'undefined* defaultDataPointer': 'UIDataItem* DefaultDataPointer',
        'undefined *ResourcePointerArray[10]': 'UIResource* ResourcePointerArray[10]'
    }
    
    for old, new in replacements.items():
        content = content.replace(old, new)
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量替换完成")

if __name__ == '__main__':
    replace_variables()