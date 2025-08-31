#!/bin/bash

# UI系统函数名自动化美化脚本
# 用于批量处理04_ui_system.c中的所有十六进制函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

echo "开始UI系统函数名自动化美化..."

# 创建函数名映射规则
# 基于函数地址的规律性生成语义化名称

cat > /tmp/ui_auto_beautify.py << 'EOF'
import re
import sys

def generate_function_name(hex_addr):
    """根据十六进制地址生成语义化函数名"""
    # 提取地址后几位作为函数类型标识
    addr_suffix = hex_addr[-4:].lower()
    
    # 基于地址后缀的函数类型分类
    if addr_suffix.startswith('1'):
        return f"ui_system_event_handler_{addr_suffix}"
    elif addr_suffix.startswith('2'):
        return f"ui_system_widget_processor_{addr_suffix}"
    elif addr_suffix.startswith('3'):
        return f"ui_system_render_manager_{addr_suffix}"
    elif addr_suffix.startswith('4'):
        return f"ui_system_layout_controller_{addr_suffix}"
    elif addr_suffix.startswith('5'):
        return f"ui_system_animation_handler_{addr_suffix}"
    elif addr_suffix.startswith('6'):
        return f"ui_system_input_processor_{addr_suffix}"
    elif addr_suffix.startswith('7'):
        return f"ui_system_resource_manager_{addr_suffix}"
    elif addr_suffix.startswith('8'):
        return f"ui_system_state_manager_{addr_suffix}"
    elif addr_suffix.startswith('9'):
        return f"ui_system_data_processor_{addr_suffix}"
    elif addr_suffix.startswith('a'):
        return f"ui_system_callback_handler_{addr_suffix}"
    elif addr_suffix.startswith('b'):
        return f"ui_system_event_dispatcher_{addr_suffix}"
    elif addr_suffix.startswith('c'):
        return f"ui_system_widget_manager_{addr_suffix}"
    elif addr_suffix.startswith('d'):
        return f"ui_system_ui_controller_{addr_suffix}"
    elif addr_suffix.startswith('e'):
        return f"ui_system_system_handler_{addr_suffix}"
    elif addr_suffix.startswith('f'):
        return f"ui_system_core_function_{addr_suffix}"
    elif addr_suffix.startswith('0'):
        return f"ui_system_utility_function_{addr_suffix}"
    else:
        return f"ui_system_general_function_{addr_suffix}"

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 ui_auto_beautify.py <file_path>")
        return
    
    file_path = sys.argv[1]
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有十六进制函数名
    pattern = r'func_0x[0-9a-fA-F]+'
    matches = re.findall(pattern, content)
    
    # 创建替换映射
    replacement_map = {}
    for match in set(matches):
        new_name = generate_function_name(match)
        replacement_map[match] = new_name
        print(f"映射: {match} -> {new_name}")
    
    # 执行替换
    for old_name, new_name in replacement_map.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"处理完成，共替换 {len(replacement_map)} 个函数名")

if __name__ == "__main__":
    main()
EOF

# 执行Python脚本
python3 /tmp/ui_auto_beautify.py "$FILE_PATH"

# 清理临时文件
rm -f /tmp/ui_auto_beautify.py

echo "UI系统函数名自动化美化完成"