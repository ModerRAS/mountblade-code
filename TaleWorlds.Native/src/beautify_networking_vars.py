#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r') as f:
    content = f.read()

# 替换栈变量名
content = re.sub(r'\b(cStack|puStack|uStack|lStack|iStack)_([0-9a-f]+)\b', lambda m: f'{m.group(1)}Var{m.group(2)}', content)

# 替换局部变量名
content = re.sub(r'\b(uVar|iVar|lVar|fVar)(\d+)\b', lambda m: f'{m.group(1)}iable{m.group(2)}', content)

# 替换指针变量
content = re.sub(r'\b(puVar|piVar|plVar|pfVar)(\d+)\b', lambda m: f'{m.group(1)}iable{m.group(2)}', content)

# 替换unaff变量
content = re.sub(r'\bunaff_([A-Z0-9]+)\b', lambda m: f'unassignedRegister{m.group(1)}', content)

# 替换DAT变量
content = re.sub(r'\bDAT_([0-9a-f]+)\b', lambda m: f'dataSegment{m.group(1)}', content)

# 替换local变量
content = re.sub(r'\blocal_([0-9a-f]+)\b', lambda m: f'localVariable{m.group(1)}', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w') as f:
    f.write(content)

print('变量名替换完成')