import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 使用正则表达式删除所有包含"原始函数名："的行
content = re.sub(r'\s*\* 原始函数名：FUN_[0-9a-fA-F]+\n', '', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("已清理所有原始函数名注释")