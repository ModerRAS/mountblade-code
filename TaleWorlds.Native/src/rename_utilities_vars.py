#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r') as f:
    content = f.read()

# 替换UNK_变量为MemoryBuffer
unk_vars = [
    'UNK_180a3a310', 'UNK_180a3a320', 'UNK_180a3a348', 'UNK_180a3a370', 'UNK_180a3a398',
    'UNK_180a3a3c0', 'UNK_180a3a3d0', 'UNK_180a3a3e8', 'UNK_180a3a3f8', 'UNK_180a3a408',
    'UNK_180a3a418', 'UNK_180a3a428', 'UNK_180a3a440', 'UNK_180a3a458', 'UNK_180a3a468',
    'UNK_180a3a478', 'UNK_180a3a498', 'UNK_180a3a4a8', 'UNK_180a3a4c0', 'UNK_180a3a4d0',
    'UNK_180a3a4e0', 'UNK_180a3a4f8', 'UNK_180a3a508', 'UNK_180a3a520', 'UNK_180a3a530',
    'UNK_180a3a540', 'UNK_180a3a560', 'UNK_180a3a580', 'UNK_180a3a5a8', 'UNK_180a3a5c0',
    'UNK_180a3a5d0', 'UNK_180a3a5e0', 'UNK_180a3a600', 'UNK_180a3a620', 'UNK_180a3a630',
    'UNK_180a3a640', 'UNK_180a3a650', 'UNK_180a3a660', 'UNK_180a3a670', 'UNK_180a3a688',
    'UNK_180a3a6a0', 'UNK_180a3a6c0', 'UNK_180a3a6e0', 'UNK_180a3a6f8', 'UNK_180a3a708',
    'UNK_180a3a720', 'UNK_180a3a738', 'UNK_180a3a748', 'UNK_180a3a754', 'UNK_180a3a758',
    'UNK_180a3a768', 'UNK_180a3a778', 'UNK_180a3a788', 'UNK_180a3a798', 'UNK_180a3a7a8',
    'UNK_180a3a7b8', 'UNK_180a3a7d0', 'UNK_180a3a7e0', 'UNK_180a3a7f0', 'UNK_180a3a800',
    'UNK_180a3a820', 'UNK_180a3a830', 'UNK_180a3a850', 'UNK_180a3a860', 'UNK_180a3a870',
    'UNK_180a3a880', 'UNK_180a3a898', 'UNK_180a3a8b0', 'UNK_180a3a8c0', 'UNK_180a3a8d8',
    'UNK_180a3a8f0', 'UNK_180a3a900', 'UNK_180a3a910', 'UNK_180a3a920', 'UNK_180a3a938',
    'UNK_180a3a948', 'UNK_180a3a960', 'UNK_180a3a970', 'UNK_180a3a988', 'UNK_180a3a998',
    'UNK_180a3a9b0', 'UNK_180a3a9c8', 'UNK_180a3a9d8', 'UNK_180a3a9e0', 'UNK_180a3a9f0',
    'UNK_180a3aa08', 'UNK_180a3aa20', 'UNK_180a3aa38', 'UNK_180a3aa50', 'UNK_180a3aa70',
    'UNK_180a3aa98', 'UNK_180a3aab0', 'UNK_180a3aac0', 'UNK_180a3aad8', 'UNK_180a3aae8',
    'UNK_180a3aaf8'
]

# 批量替换
for i, var in enumerate(unk_vars):
    new_name = f'MemoryBuffer{i+1:03d}'
    content = content.replace(var, new_name)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w') as f:
    f.write(content)

print("变量重命名完成")