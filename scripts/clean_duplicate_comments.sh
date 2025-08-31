#!/bin/bash

# 清理重复注释的脚本
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

python3 -c "
import re

with open('$FILE', 'r') as f:
    content = f.read()

# 清理重复的函数注释模式
pattern = r'/\*\*\n \* @brief ([^\n]+)\n \* ([^\n]+)\n \*/\n/\*\*\n \* @brief ([^\n]+)\n \* ([^\n]+)\n \*/'

def replace_duplicates(match):
    brief1 = match.group(1)
    desc1 = match.group(2)
    brief2 = match.group(3)
    desc2 = match.group(4)
    
    # 合并注释，保留更详细的信息
    combined_brief = brief1 if len(brief1) > len(brief2) else brief2
    combined_desc = desc1 + ' ' + desc2 if desc1 != desc2 else desc1
    
    return f'''/**
 * @brief {combined_brief}
 * {combined_desc}
 * 
 * @return void
 */'''

content = re.sub(pattern, replace_duplicates, content, flags=re.DOTALL)

with open('$FILE', 'w') as f:
    f.write(content)
"

echo "重复注释清理完成"