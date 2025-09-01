#!/usr/bin/env python3
import re
import os

# 设置工作目录
os.chdir('/dev/shm/mountblade-code/TaleWorlds.Native/src')

# 读取文件
with open('99_unmatched_functions.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 替换函数调用
content = re.sub(r'FUN_1800a32b0', 'InitializeResourceHandleData', content)
content = re.sub(r'FUN_1800a3f00', 'ProcessSystemStateValidationAndResourceRequest', content)
content = re.sub(r'FUN_1800a5750', 'CopyRenderObjectStateData', content)

# 写回文件
with open('99_unmatched_functions.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("函数调用更新完成！")