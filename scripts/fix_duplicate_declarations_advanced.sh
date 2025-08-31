#!/bin/bash

# 更强大的脚本，处理所有重复的变量声明问题
# 包括network_operation_status, network_connection_state等

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_fixed_advanced.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 使用Python进行更复杂的文本处理
python3 << 'EOF'
import re

# 读取文件
with open('$TEMP_FILE', 'r') as f:
    content = f.read()

# 定义函数来修复重复声明
def fix_duplicate_declarations(text):
    # 处理函数内的重复声明
    # 匹配函数块
    pattern = r'\{[^{}]*\}'
    
    def replace_function_body(match):
        body = match.group(0)
        # 在函数体内查找重复声明
        lines = body.split('\n')
        seen_declarations = set()
        new_lines = []
        
        for line in lines:
            # 检查是否是变量声明行
            decl_match = re.match(r'\s*int32_t\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*;', line.strip())
            if decl_match:
                var_name = decl_match.group(1)
                if var_name in seen_declarations:
                    # 跳过重复声明
                    continue
                seen_declarations.add(var_name)
            new_lines.append(line)
        
        return '\n'.join(new_lines)
    
    # 应用替换
    result = re.sub(pattern, replace_function_body, text, flags=re.DOTALL)
    return result

# 应用修复
fixed_content = fix_duplicate_declarations(content)

# 写回文件
with open('$TEMP_FILE', 'w') as f:
    f.write(fixed_content)

print("高级重复声明修复完成")
EOF

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "高级重复变量声明修复完成"