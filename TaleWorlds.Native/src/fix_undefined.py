#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r') as f:
    content = f.read()

# 替换所有的undefined为void*，但保留函数返回值中的undefined8等
# 使用正则表达式来精确匹配变量声明中的undefined
pattern = r'^(\s*)undefined\s+([a-zA-Z_][a-zA-Z0-9_]*)'
replacement = r'\1void* \2'

# 处理每一行
lines = content.split('\n')
new_lines = []
for line in lines:
    # 跳过函数返回值中的undefined8, undefined4等
    if 'undefined8' in line or 'undefined4' in line or 'undefined1' in line:
        new_lines.append(line)
        continue
    
    # 匹配并替换变量声明
    if re.match(pattern, line):
        line = re.sub(pattern, replacement, line)
    new_lines.append(line)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w') as f:
    f.write('\n'.join(new_lines))

print("undefined变量替换完成")