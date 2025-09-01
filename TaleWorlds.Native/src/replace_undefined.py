#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r') as f:
    content = f.read()

# 替换所有 undefined 变量声明为 void*
# 1. 全局变量声明: undefined SystemGlobalDataConfigBlock2;
pattern1 = r'undefined\s+([a-zA-Z_][a-zA-Z0-9_]*);'
replacement1 = r'void* \1;'

# 2. 函数参数中的指针: undefined *systemDataReference
pattern2 = r'undefined\s+\*([a-zA-Z_][a-zA-Z0-9_]*)'
replacement2 = r'void* \1'

# 3. 数组声明: undefined auStack_170 [32];
pattern3 = r'undefined\s+([a-zA-Z_][a-zA-Z0-9_]*)\s+\[([^\]]+)\];'
replacement3 = r'void* \1 [\2];'

# 4. 类型转换: (undefined *)0x0
pattern4 = r'\(undefined\s*\*\)'
replacement4 = r'(void*)'

# 5. 函数参数中的其他undefined变量
pattern5 = r'\(undefined\s*\*\*\)'
replacement5 = r'(void**)'

# 6. undefined2, undefined4等
pattern6 = r'undefined([248])\s*\*([a-zA-Z_][a-zA-Z0-9_]*)'
replacement6 = r'uint\1_t* \2'

# 7. 直接的undefined2, undefined4等变量
pattern7 = r'undefined([248])\s+([a-zA-Z_][a-zA-Z0-9_]*)'
replacement7 = r'uint\1_t \2'

# 执行替换
modified_content = content
modified_content = re.sub(pattern1, replacement1, modified_content, flags=re.MULTILINE)
modified_content = re.sub(pattern2, replacement2, modified_content, flags=re.MULTILINE)
modified_content = re.sub(pattern3, replacement3, modified_content, flags=re.MULTILINE)
modified_content = re.sub(pattern4, replacement4, modified_content, flags=re.MULTILINE)
modified_content = re.sub(pattern5, replacement5, modified_content, flags=re.MULTILINE)
modified_content = re.sub(pattern6, replacement6, modified_content, flags=re.MULTILINE)
modified_content = re.sub(pattern7, replacement7, modified_content, flags=re.MULTILINE)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w') as f:
    f.write(modified_content)

print('替换完成')