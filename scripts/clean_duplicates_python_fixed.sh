#!/bin/bash

# 使用Python脚本来清理重复的赋值语句

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
TEMP_FILE="/tmp/core_engine_python_temp.c"

python3 << EOF
import re

# 读取文件
with open("$INPUT_FILE", 'r') as f:
    content = f.read()

# 使用正则表达式查找并替换重复的赋值语句
# 处理连续重复的赋值
pattern = r'(\\s*\\*engineContext = &g_engine_internal_state;\\n)\\1+'
replacement = r'\\1'
content = re.sub(pattern, replacement, content)

# 处理函数中间的重复赋值
pattern2 = r'(\\*engineContext = &g_engine_internal_state;\\n)(\\s*\\*engineContext = &g_engine_internal_state;\\n)+'
replacement2 = r'\\1'
content = re.sub(pattern2, replacement2, content)

# 写入临时文件
with open("$TEMP_FILE", 'w') as f:
    f.write(content)

print("Python脚本处理完成")
EOF

# 应用更改
if [ -f "$TEMP_FILE" ]; then
    cp "$TEMP_FILE" "$INPUT_FILE"
    rm "$TEMP_FILE"
    echo "重复赋值清理完成"
else
    echo "临时文件未创建，清理失败"
fi