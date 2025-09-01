#!/usr/bin/env python3
import subprocess
import os

# 定义要替换的变量对
replacements = [
    ('UNK_1809fda58', 'SystemConfigDataFieldF'),
    ('UNK_1809fda80', 'SystemConfigDataFieldG'),
    ('UNK_1809fdaa8', 'SystemConfigDataFieldH'),
    ('UNK_1809fdad0', 'SystemConfigDataFieldI'),
    ('UNK_1809fdaf8', 'SystemConfigDataFieldJ'),
    ('UNK_1809fdb20', 'SystemConfigDataFieldK'),
    ('UNK_1809fdcd8', 'SystemStringConstantA'),
    ('UNK_1809fdb40', 'SystemStringConstantB'),
    ('UNK_1809fdbd0', 'SystemMemoryConstantA'),
    ('UNK_180058ee0', 'SystemFunctionPointerA'),
]

file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'

# 读取文件内容
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 执行替换
for old, new in replacements:
    content = content.replace(old, new)
    print(f'已替换: {old} -> {new}')

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print('前10个变量替换完成！')