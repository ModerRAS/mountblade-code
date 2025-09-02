#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 删除原始函数名注释
content = re.sub(r' \* 原始函数名：FUN_180[0-9a-f]{5}\n', '', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("删除完成")