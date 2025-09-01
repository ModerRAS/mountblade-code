#!/usr/bin/env python3
import re

# 读取文件
file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'

# 定义替换映射
replacements = {
    'UNK_180986f68': 'NetworkConnectionContext',
    'UNK_180986f90': 'NetworkConnectionValidator',
    'UNK_18095af38': 'NetworkMemoryAllocator',
    'UNK_180863400': 'NetworkCodeBuffer',
    'UNK_1808633a0': 'NetworkCodeBufferAlt',
    'UNK_18095b500': 'NetworkConnectionBuffer',
    'UNK_180957600': 'NetworkErrorMemory',
    'UNK_180984dd0': 'NetworkProtocolBuffer',
    'UNK_1809874b0': 'NetworkConnectionConfig',
    'UNK_180981c30': 'NetworkStateManager',
    'UNK_180981be0': 'NetworkStateValidator',
    'UNK_180981c08': 'NetworkStateCleaner',
    'UNK_180985010': 'NetworkRoutingTable',
    'UNK_18097cf70': 'NetworkRoutingCache',
    'UNK_180985080': 'NetworkProtocolHandler'
}

# 读取文件内容
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 执行替换
for old, new in replacements.items():
    # 使用词边界确保只替换完整的变量名
    pattern = r'\b' + re.escape(old) + r'\b'
    content = re.sub(pattern, new, content)
    print(f"替换: {old} -> {new}")

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("批量替换完成！")