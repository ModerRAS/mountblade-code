#!/usr/bin/env python3
"""
批量重命名05_networking.c中的UNK变量
"""

import re
import sys

def main():
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # UNK变量映射表
    replacements = {
        'UNK_180986170': 'NetworkMemoryFreeRegion',
        'UNK_18088d500': 'NetworkSystemMemoryPool',
        'UNK_180986218': 'NetworkBufferSizeValidator',
        'UNK_1809fe7f8': 'NetworkBufferTemplate',
        'UNK_1809fd0a0': 'NetworkSecurityContextPrimary',
        'UNK_180a063a0': 'NetworkSecurityContextSecondary',
        'UNK_180986240': 'NetworkContextBufferBase',
        'UNK_180986244': 'NetworkContextBufferBasePlus4',
        'UNK_180986248': 'NetworkContextBufferBasePlus8',
        'UNK_18098624c': 'NetworkContextBufferBasePlus12',
        'UNK_180986250': 'NetworkContextBufferBasePlus16',
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"完成了 {len(replacements)} 个UNK变量的重命名")

if __name__ == "__main__":
    main()