#!/usr/bin/env python3
"""
批量删除UI系统中的函数注释
删除以"// 函数:"开头的注释行
"""

import re
import os

# 读取文件
file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 删除以"// 函数:"开头的注释行
pattern = r'// 函数:.*\n'
content = re.sub(pattern, '', content)

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("函数注释删除完成")