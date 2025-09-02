#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化03_rendering.c文件中的LAB_标签
这个脚本将LAB_标签重命名为语义化的名称
"""

import re
import os

def beautify_rendering_labels():
    """美化渲染文件中的LAB_标签"""
    
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取原始文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 统计处理的标签数量
    processed_count = 0
    
    # 定义LAB_标签的替换映射
    label_replacements = {
        "LAB_180416f88": "ProcessDefaultProperty",
        "LAB_180417020": "ProcessCurveMultiplier", 
        "LAB_1804175d5": "ApplyTimeProperty",
        "LAB_180417650": "ApplyValueProperty",
        "LAB_180417570": "ProcessTimeNode",
        "LAB_1804174f0": "ProcessKeyNode",
        "LAB_1804170b5": "ProcessCurveData",
        "LAB_180417140": "ProcessNodeData",
        "LAB_1804171a0": "ProcessRenderState",
        "LAB_180417224": "ProcessShaderData",
        "LAB_1804172f2": "ProcessTextureData",
        "LAB_180416d70": "ProcessNextNode",
        "LAB_180416dfb": "ProcessCurveNodeData",
        "LAB_180416ed4": "UseDefaultNodeData",
        "LAB_180416f25": "ProcessDefaultNode",
        "LAB_180417038": "ApplyCurveMultiplier",
    }
    
    # 应用替换
    for old_label, new_label in label_replacements.items():
        # 统计出现次数
        count = content.count(old_label)
        if count > 0:
            print(f"替换 {old_label} -> {new_label} (出现 {count} 次)")
            content = content.replace(old_label, new_label)
            processed_count += count
    
    print(f"总共处理了 {processed_count} 个标签")
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("LAB_标签重命名完成")

if __name__ == "__main__":
    beautify_rendering_labels()