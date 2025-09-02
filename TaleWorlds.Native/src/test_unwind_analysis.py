#!/usr/bin/env python3
"""
手动执行Unwind函数美化
"""

import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 查找所有Unwind函数定义
pattern = r'void (Unwind_[0-9a-fA-F]{8})\(([^)]*)\)'
matches = re.findall(pattern, content)

print(f"找到 {len(matches)} 个Unwind函数")

# 显示前10个函数的信息
for i, (old_name, params) in enumerate(matches[:10]):
    print(f"{i+1}. {old_name}({params})")

print("...")
print(f"总共 {len(matches)} 个函数")