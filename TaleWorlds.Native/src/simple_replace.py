#!/usr/bin/env python3

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r') as f:
    lines = f.readlines()

# 处理每一行
modified_lines = []
for line in lines:
    # 替换 undefined 变量声明
    if line.strip().startswith('undefined ') and line.strip().endswith(';'):
        # 提取变量名
        var_name = line.strip().replace('undefined ', '').replace(';', '').strip()
        # 替换为 void*
        new_line = line.replace('undefined ', 'void* ')
        modified_lines.append(new_line)
    else:
        modified_lines.append(line)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w') as f:
    f.writelines(modified_lines)

print('替换完成')