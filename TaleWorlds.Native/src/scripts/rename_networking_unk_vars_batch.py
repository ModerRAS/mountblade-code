#!/usr/bin/env python3
"""
批量重命名05_networking.c中的UNK变量
"""

import re

def main():
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # UNK变量映射表
    replacements = {
        'UNK_180983588': 'NetworkStackValidationBuffer1',
        'UNK_180984358': 'NetworkStackValidationBuffer2',
        'UNK_1809843d0': 'NetworkStackValidationBuffer3',
        'UNK_1809841e0': 'NetworkStackValidationBuffer4',
        'UNK_180986350': 'NetworkConnectionContextPointer1',
        'UNK_180986370': 'NetworkConnectionContextPointer2',
        'UNK_1809868b0': 'NetworkConnectionContextBuffer',
        'UNK_1809863f8': 'NetworkBufferDataStreamSecondary',
        'UNK_180984010': 'NetworkBufferDataStreamTertiary',
        'UNK_180986298': 'NetworkBufferDataStreamPrimary',
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