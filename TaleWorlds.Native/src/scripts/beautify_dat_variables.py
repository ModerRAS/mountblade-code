#!/usr/bin/env python3
"""
美化DAT_变量的脚本
将01_initialization.c文件中的DAT_变量替换为有意义的名称
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

def extract_dat_variables(content):
    """提取所有DAT_变量"""
    # 匹配DAT_开头的十六进制地址变量
    pattern = r'DAT_([0-9a-fA-F]{8})'
    matches = re.findall(pattern, content)
    return list(set(matches))  # 去重

def create_variable_mapping(dat_vars):
    """创建变量映射表"""
    mapping = {}
    
    # 根据地址范围和用途分类变量
    for var in dat_vars:
        addr = int(var, 16)
        
        # 根据地址范围给变量起有意义的名字
        if 0x180bf0000 <= addr <= 0x180bfffff:
            mapping[f"DAT_{var}"] = f"SystemConfigData{addr & 0xFFFF:04x}"
        elif 0x180c80000 <= addr <= 0x180c8ffff:
            mapping[f"DAT_{var}"] = f"SystemMemoryData{addr & 0xFFFF:04x}"
        elif 0x180c90000 <= addr <= 0x180c9ffff:
            mapping[f"DAT_{var}"] = f"SystemConsoleData{addr & 0xFFFF:04x}"
        elif 0x180a00000 <= addr <= 0x180afffff:
            mapping[f"DAT_{var}"] = f"SystemTemplateData{addr & 0xFFFF:04x}"
        elif 0x180d40000 <= addr <= 0x180d4ffff:
            mapping[f"DAT_{var}"] = f"SystemValueData{addr & 0xFFFF:04x}"
        elif 0x180be0000 <= addr <= 0x180beffff:
            mapping[f"DAT_{var}"] = f"SystemResourceData{addr & 0xFFFF:04x}"
        elif 0x180980000 <= addr <= 0x1809fffff:
            mapping[f"DAT_{var}"] = f"SystemFunctionData{addr & 0xFFFF:04x}"
        elif 0x180060000 <= addr <= 0x18006ffff:
            mapping[f"DAT_{var}"] = f"SystemConstantData{addr & 0xFFFF:04x}"
        else:
            mapping[f"DAT_{var}"] = f"SystemGlobalData{addr & 0xFFFF:04x}"
    
    return mapping

def replace_variables(content, mapping):
    """替换变量名"""
    for old_var, new_var in mapping.items():
        # 替换变量引用
        content = re.sub(rf'\b{old_var}\b', new_var, content)
        # 替换带下划线的变量引用
        content = re.sub(rf'_{old_var}', f'_{new_var}', content)
    
    return content

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return
    
    # 提取DAT变量
    dat_vars = extract_dat_variables(content)
    print(f"找到 {len(dat_vars)} 个DAT变量")
    
    # 创建变量映射
    mapping = create_variable_mapping(dat_vars)
    
    # 输出映射表
    print("\n变量映射表:")
    for old_var, new_var in mapping.items():
        print(f"{old_var} -> {new_var}")
    
    # 替换变量
    new_content = replace_variables(content, mapping)
    
    # 写入文件
    if write_file(file_path, new_content):
        print(f"\n成功美化 {len(mapping)} 个变量")
    else:
        print("写入文件失败")

if __name__ == "__main__":
    main()