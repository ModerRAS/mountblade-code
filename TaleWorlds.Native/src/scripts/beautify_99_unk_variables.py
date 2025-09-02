#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的UNK_变量
"""

import re
import os

def beautify_unk_variables():
    """美化UNK_变量"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义UNK_变量替换映射
    replacements = [
        # 系统配置相关
        ("UNK_180a13e58", "SystemConfigVariableA"),
        ("UNK_18023ea80", "SystemConfigVariableB"),
        ("UNK_180a13e00", "SystemConfigVariableC"),
        ("UNK_18023e0d0", "SystemConfigVariableD"),
        ("UNK_180a13e90", "SystemConfigVariableE"),
        ("UNK_180a13fd0", "SystemConfigVariableF"),
        ("UNK_18023de90", "SystemConfigVariableG"),
        ("UNK_18023df70", "SystemConfigVariableH"),
        ("UNK_18023dfb0", "SystemConfigVariableI"),
        ("UNK_18023dff0", "SystemConfigVariableJ"),
        ("UNK_18023e870", "SystemConfigVariableK"),
        ("UNK_18023e740", "SystemConfigVariableL"),
        
        # 系统数据相关
        ("UNK_180a14ad0", "SystemDataPointerA"),
        ("UNK_180a14bb8", "SystemDataPointerB"),
        ("UNK_180a14c60", "SystemDataPointerC"),
        ("UNK_180a14b28", "SystemDataPointerD"),
        ("UNK_180257d20", "SystemDataPointerE"),
        ("UNK_180257d30", "SystemDataPointerF"),
        ("UNK_180a14b50", "SystemDataPointerG"),
        ("UNK_180257960", "SystemDataPointerH"),
        ("UNK_180257aa0", "SystemDataPointerI"),
        ("UNK_180a14b08", "SystemDataPointerJ"),
        ("UNK_180a14b80", "SystemDataPointerK"),
        ("UNK_180a150c0", "SystemDataPointerL"),
        ("UNK_180a150a0", "SystemDataPointerM"),
        
        # 系统内存相关
        ("UNK_18098d7d8", "SystemMemoryPointerA"),
        ("UNK_180a14da8", "SystemMemoryPointerB"),
        ("UNK_18098d7e0", "SystemMemoryPointerC"),
        ("UNK_180a15360", "SystemMemoryPointerD"),
        ("UNK_180a15310", "SystemMemoryPointerE"),
        
        # 其他系统变量
        ("UNK_180a04538", "SystemGlobalVariableA"),
        ("UNK_180a0ed30", "SystemGlobalVariableB"),
        ("UNK_180a33f80", "SystemGlobalVariableC"),
        ("UNK_180a270e8", "SystemGlobalVariableD"),
        ("UNK_180a270f8", "SystemGlobalVariableE"),
        ("UNK_180a27170", "SystemGlobalVariableF"),
        ("UNK_180983e88", "SystemGlobalVariableG"),
    ]
    
    # 执行替换
    for old_name, new_name in replacements:
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已美化 {len(replacements)} 个UNK_变量")

if __name__ == "__main__":
    beautify_unk_variables()