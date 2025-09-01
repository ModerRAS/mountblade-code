import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r') as f:
    content = f.read()

# 替换栈变量名
content = re.sub(r'cStack_([0-9a-f]+)', r'charStackVar\1', content)
content = re.sub(r'puStack_([0-9a-f]+)', r'ptrStackVar\1', content)
content = re.sub(r'uStack_([0-9a-f]+)', r'uintStackVar\1', content)
content = re.sub(r'lStack_([0-9a-f]+)', r'longStackVar\1', content)
content = re.sub(r'iStack_([0-9a-f]+)', r'intStackVar\1', content)

# 替换局部变量名
content = re.sub(r'uVar([0-9]+)', r'unsignedVar\1', content)
content = re.sub(r'iVar([0-9]+)', r'intVar\1', content)
content = re.sub(r'lVar([0-9]+)', r'longVar\1', content)
content = re.sub(r'fVar([0-9]+)', r'floatVar\1', content)

# 替换指针变量
content = re.sub(r'puVar([0-9]+)', r'unsignedPtrVar\1', content)
content = re.sub(r'piVar([0-9]+)', r'intPtrVar\1', content)
content = re.sub(r'plVar([0-9]+)', r'longPtrVar\1', content)
content = re.sub(r'pfVar([0-9]+)', r'floatPtrVar\1', content)

# 替换函数名
content = re.sub(r'FUN_([0-9a-f]+)', r'Function\1', content)

# 替换标签名
content = re.sub(r'LAB_([0-9a-f]+)', r'Label\1', content)

# 替换未知变量
content = re.sub(r'UNK_([0-9a-f]+)', r'Unknown\1', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w') as f:
    f.write(content)

print('变量名替换完成')