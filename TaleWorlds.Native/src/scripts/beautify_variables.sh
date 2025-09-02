#!/bin/bash

# 美化变量名脚本
# 用于将99_unmatched_functions.c文件中的十六进制后缀变量名改为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时脚本文件
cat > /tmp/beautify_vars.py << 'EOF'
import re
import sys

def beautify_variables(content):
    # 美化SystemMemoryRegion变量
    def replace_system_memory_region(match):
        base_name = "SystemMemoryRegion"
        return base_name
    
    # 美化SystemDataTable变量
    def replace_system_data_table(match):
        base_name = "SystemDataTable"
        return base_name
    
    # 美化SystemSubroutine变量
    def replace_system_subroutine(match):
        base_name = "SystemSubroutine"
        return base_name
    
    # 美化SystemStatusFlag变量
    def replace_system_status_flag(match):
        base_name = "SystemStatusFlag"
        return base_name
    
    # 美化UnknownSystemMemoryRegion变量
    def replace_unknown_system_memory_region(match):
        base_name = "UnknownSystemMemoryRegion"
        return base_name
    
    # 美化XmlSchema变量
    def replace_xml_schema(match):
        base_name = "XmlSchema"
        return base_name
    
    # 美化SystemGlobalConfigurationConstant变量
    def replace_system_global_constant(match):
        base_name = "SystemGlobalConfigurationConstant"
        return base_name
    
    # 应用替换规则
    patterns = [
        (r'SystemMemoryRegion[0-9a-fA-F]{4,5}', replace_system_memory_region),
        (r'SystemDataTable[0-9a-fA-F]{4,5}', replace_system_data_table),
        (r'SystemSubroutine[0-9a-fA-F]{4,5}', replace_system_subroutine),
        (r'SystemStatusFlag[0-9a-fA-F]{4,5}', replace_system_status_flag),
        (r'UnknownSystemMemoryRegion[0-9a-fA-F]{4,5}', replace_unknown_system_memory_region),
        (r'XmlSchema[0-9a-fA-F]{4,5}', replace_xml_schema),
        (r'SystemGlobalConfigurationConstant_[0-9a-fA-F]{4,5}', replace_system_global_constant),
    ]
    
    for pattern, replacement in patterns:
        content = re.sub(pattern, replacement, content)
    
    return content

# 读取文件
with open(FILE, 'r', encoding='utf-8') as f:
    content = f.read()

# 应用美化
beautified_content = beautify_variables(content)

# 写回文件
with open(FILE, 'w', encoding='utf-8') as f:
    f.write(beautified_content)

print("变量名美化完成")
EOF

# 执行Python脚本
python3 /tmp/beautify_vars.py

# 清理临时文件
rm -f /tmp/beautify_vars.py

echo "变量名美化完成"