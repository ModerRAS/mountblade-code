#!/bin/bash

# 00_data_definitions.h UNK_标签美化脚本
# 将UNK_180a3xxxx标签替换为语义化的网络配置验证参数名

# 创建临时脚本文件
cat > /tmp/replace_unk_labels.py << 'EOF'
import re
import sys

def replace_unk_labels(content):
    """将UNK_180a3xxxx标签替换为语义化的网络配置验证参数名"""
    
    # UNK_180a3xxxx 地址到参数名的映射
    # 基于地址顺序创建连续的参数名
    replacements = {}
    
    # 提取所有UNK_180a3xxxx地址
    pattern = r'UNK_180a3([0-9a-f]{4})'
    matches = re.findall(pattern, content)
    
    # 获取唯一的地址并排序
    unique_addresses = sorted(set(matches), key=lambda x: int(x, 16))
    
    # 创建映射关系
    for i, addr in enumerate(unique_addresses, 1):
        unk_label = f'UNK_180a3{addr}'
        param_name = f'NetworkConfigValidationParameter{i + 54}'  # 从55开始，因为前面已经有54个参数
        replacements[unk_label] = param_name
    
    # 执行替换
    for unk_label, param_name in replacements.items():
        content = content.replace(f'&{unk_label}', f'&{param_name}')
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python replace_unk_labels.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行替换
    new_content = replace_unk_labels(content)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(new_content)
    
    print(f"Successfully replaced UNK labels in {input_file}")

if __name__ == "__main__":
    main()
EOF

# 执行Python脚本
python3 /tmp/replace_unk_labels.py "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 清理临时文件
rm -f /tmp/replace_unk_labels.py