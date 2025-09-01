#!/bin/bash

# 美化02_core_engine.c文件中的变量名
# 作者: Claude Code
# 日期: 2025-09-01

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建临时脚本文件来执行替换
cat > /tmp/beautify_core_engine_vars.py << 'EOF'
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 变量替换映射
variable_replacements = {
    # 栈变量替换
    r'puStack_a0': 'ConfigurationHandlerPointer',
    r'puStack_98': 'BufferPointer',
    r'uStack_90': 'ConfigurationType',
    r'auStack_88': 'ConfigurationBuffer',
    r'in_R9': 'RegisterR9Value',
    
    # 其他未定义变量
    r'undefined8': 'uint64_t',
    r'undefined4': 'uint32_t', 
    r'undefined2': 'uint16_t',
    r'undefined1': 'uint8_t',
    r'undefined \*': 'void *',
    r'undefined': 'void',
}

# 执行替换
for pattern, replacement in variable_replacements.items():
    content = re.sub(pattern, replacement, content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("变量美化完成")
EOF

# 执行Python脚本
python3 /tmp/beautify_core_engine_vars.py

# 清理临时文件
rm -f /tmp/beautify_core_engine_vars.py

echo "核心引擎变量美化完成"