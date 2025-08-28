#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
数据定义文件完整转译脚本
使用映射表进行批量替换
"""

def load_translation_map(map_file):
    """加载转译映射表"""
    translations = {}
    with open(map_file, 'r', encoding='utf-8') as f:
        current_section = None
        for line in f:
            line = line.strip()
            if line.startswith('#') or not line:
                continue
            if '=' in line:
                original, translated = line.split('=', 1)
                translations[original.strip()] = translated.strip()
    return translations

def translate_file(input_file, output_file, map_file):
    """转译文件"""
    print(f"开始转译文件: {input_file}")
    
    # 加载映射表
    translations = load_translation_map(map_file)
    print(f"加载了 {len(translations)} 个翻译映射")
    
    # 读取原始文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 按照原始标识符长度排序，优先替换长的标识符以避免部分匹配
    sorted_translations = sorted(translations.items(), key=lambda x: len(x[0]), reverse=True)
    
    # 执行替换
    translated_content = content
    for original, translated in sorted_translations:
        translated_content = translated_content.replace(original, translated)
    
    # 添加文件头注释
    header = """#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 数据定义 - 转译版本
// 原始FUN_、DAT_、UNK_标识符已转译为语义化名称
// 转译规则：
// - FUN_* -> 函数名 (initialize_module_*, setup_thread_*, register_string_*, etc.)
// - DAT_* -> 变量名 (control_flag_*, data_pointer_*, thread_mutex_*, etc.)
// - UNK_* -> 常量名 (system_constant_*, base_address_*, string_data_*, etc.)

"""
    
    # 替换文件头
    if translated_content.startswith('#ifndef DATA_DEFINITIONS_H'):
        first_newline = translated_content.find('\n', translated_content.find('#define DATA_DEFINITIONS_H'))
        if first_newline != -1:
            second_newline = translated_content.find('\n', first_newline + 1)
            if second_newline != -1:
                translated_content = header + translated_content[second_newline + 1:]
    
    # 写入转译后的文件
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(translated_content)
    
    print(f"转译完成，输出文件: {output_file}")
    return True

if __name__ == "__main__":
    input_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    output_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/00/00_data_definitions.h"
    map_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/translation_map.txt"
    
    try:
        translate_file(input_file, output_file, map_file)
        print("转译脚本执行成功")
    except Exception as e:
        print(f"执行失败: {e}")
        import traceback
        traceback.print_exc()