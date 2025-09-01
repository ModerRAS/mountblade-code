#!/usr/bin/env python3
"""
UI系统文件美化脚本
重命名FUN_函数为语义化名称并添加文档注释
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def extract_function_addresses(content):
    """提取函数地址和注释"""
    # 匹配函数注释和地址
    pattern = r'// 函数:.*?FUN_(\w+).*?\n.*?FUN_(\w+)\('
    matches = re.findall(pattern, content, re.DOTALL)
    
    function_map = {}
    for match in matches:
        comment_addr = match[0]
        func_addr = match[1]
        if comment_addr != func_addr:
            function_map[func_addr] = comment_addr
    
    return function_map

def generate_function_name(addr, context):
    """根据地址生成语义化函数名"""
    # 根据地址后缀和上下文生成函数名
    addr_suffix = addr[-4:]  # 取最后4位
    
    # 常见UI系统函数类型
    ui_functions = {
        '05e60': 'InitializeUIComponent',
        '56110': 'ProcessUIInput',
        '56160': 'HandleUIEvent',
        '57510': 'CreateUIWindow',
        '57b00': 'SetupUILayout',
        '57dd0': 'UpdateUIState',
        '57fa0': 'ValidateUIData',
        '587d0': 'CalculateUILayout',
        '596a0': 'RenderUIElement',
        '5a91c': 'LoadUIResource',
        '5bd4f': 'ProcessUIAnimation',
        '5bf60': 'CalculateUIBounds',
        '5c070': 'UpdateUITransform',
        '5c8f0': 'HandleUIClick',
        '5cb98': 'ProcessUIHover',
        '5cbfa': 'ValidateUIInput',
        '5cc10': 'UpdateUICursor',
        '5dec1': 'CleanupUIResource',
        '5f057': 'ResetUIState',
        '5f1c2': 'ValidateUILayout',
        '5f210': 'RefreshUIDisplay',
        '5fa20': 'UpdateUIAnimation',
        '60051': 'ProcessUITouch',
        '603d0': 'RenderUIText',
        '673f0': 'InitializeUIRenderer',
        '677e7': 'SetupUIShader',
        '687d4': 'UpdateUIBuffer',
        '6c0c0': 'CreateUITexture',
        '6c4b8': 'LoadUIFont',
        '6d310': 'ProcessEvent',
        '6d3e9': 'UpdateUIFocus',
        '6d3f4': 'HandleUINavigation',
        '6d763': 'InitializeUIInput',
        '6c0c0': 'ProcessUIRender'
    }
    
    # 查找匹配的函数名
    for suffix, name in ui_functions.items():
        if addr_suffix in suffix or suffix in addr_suffix:
            return name
    
    # 根据地址范围推测函数类型
    addr_num = int(addr, 16)
    
    if 0x18065000 <= addr_num <= 0x18066000:
        return f'UIComponentManager_{addr_suffix}'
    elif 0x18066000 <= addr_num <= 0x18067000:
        return f'UIInputHandler_{addr_suffix}'
    elif 0x18067000 <= addr_num <= 0x18068000:
        return f'UIRenderer_{addr_suffix}'
    elif 0x18068000 <= addr_num <= 0x18069000:
        return f'UILayoutCalculator_{addr_suffix}'
    elif 0x18069000 <= addr_num <= 0x1806a000:
        return f'UIAnimationSystem_{addr_suffix}'
    else:
        return f'UISystemFunction_{addr_suffix}'

def rename_functions(content):
    """重命名函数"""
    # 首先提取已有注释中的函数地址映射
    function_map = extract_function_addresses(content)
    
    # 查找所有FUN_函数
    pattern = r'FUN_(\w+)'
    matches = re.finditer(pattern, content)
    
    # 创建替换映射
    replacements = {}
    for match in matches:
        func_addr = match.group(1)
        if func_addr not in replacements:
            # 检查是否有注释中的映射
            if func_addr in function_map:
                new_name = generate_function_name(function_map[func_addr], content)
            else:
                new_name = generate_function_name(func_addr, content)
            replacements[func_addr] = new_name
    
    # 应用替换
    for old_addr, new_name in replacements.items():
        # 替换函数定义
        content = re.sub(rf'FUN_{old_addr}\b', new_name, content)
        # 替换函数调用
        content = re.sub(rf'FUN_{old_addr}\b', new_name, content)
    
    return content, replacements

def add_function_documentation(content, function_replacements):
    """为函数添加文档注释"""
    # 为每个重命名的函数添加文档注释
    for old_addr, new_name in function_replacements.items():
        # 查找函数定义
        pattern = rf'({new_name}\([^)]*\))'
        matches = list(re.finditer(pattern, content))
        
        if matches:
            # 为第一个匹配（函数定义）添加注释
            first_match = matches[0]
            pos = first_match.start()
            
            # 生成函数文档
            doc_comment = f"""/** 
 * @brief {new_name}
 * 
 * UI系统核心功能函数
 * 原始地址: FUN_{old_addr}
 */
"""
            
            # 在函数定义前插入注释
            content = content[:pos] + doc_comment + content[pos:]
    
    return content

def process_ui_system_file(file_path):
    """处理UI系统文件"""
    print(f"开始处理文件: {file_path}")
    
    # 读取文件
    content = read_file(file_path)
    if not content:
        return False
    
    print("文件读取成功，开始重命名函数...")
    
    # 重命名函数
    content, replacements = rename_functions(content)
    
    print(f"重命名了 {len(replacements)} 个函数")
    
    # 添加文档注释
    content = add_function_documentation(content, replacements)
    
    # 写入文件
    if write_file(file_path, content):
        print("文件处理完成")
        return True
    else:
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    if process_ui_system_file(file_path):
        print("UI系统文件美化完成")
    else:
        print("UI系统文件美化失败")
        sys.exit(1)